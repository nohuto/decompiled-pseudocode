/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1407BBB20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14071B1A4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x14071BF28 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140738DC0 (AlpcpLookupMessage.c)
 *     PsOpenThread @ 0x1407BBD70 (PsOpenThread.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderThread(
        PHANDLE ThreadHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v11; // ebx
  POBJECT_ATTRIBUTES v12; // r9
  __int64 v13; // rcx
  PVOID v14; // rdi
  ULONG_PTR v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR v20; // [rsp+38h] [rbp-70h] BYREF
  int v21[2]; // [rsp+40h] [rbp-68h] BYREF
  int v22[4]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v23; // [rsp+58h] [rbp-50h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-40h]
  OBJECT_ATTRIBUTES v25; // [rsp+70h] [rbp-38h] BYREF

  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  ClientViewSize = 0LL;
  memset(&v25, 0, 44);
  *(_QWORD *)v21 = 0LL;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ThreadHandle < 0x7FFFFFFF0000LL )
        v13 = (__int64)ThreadHandle;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      AlpcpProbeAndCaptureMessageHeader((unsigned __int64)PortMessage, (__int64)v22, Flags);
      if ( ObjectAttributes < v12 )
        v12 = ObjectAttributes;
      v25 = *v12;
    }
    else
    {
      *(_OWORD *)v22 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
      v23 = *(__int128 *)((char *)&PortMessage->8 + 8);
      ClientViewSize = PortMessage->ClientViewSize;
      v25 = *ObjectAttributes;
    }
    v14 = Object;
    v11 = AlpcpLookupMessage((__int64)Object, SDWORD2(v23), ClientViewSize, (__int64)v12, &v20);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v14);
    }
    else
    {
      v15 = v20;
      if ( (*(_DWORD *)(v20 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(v20);
        ObfDereferenceObject(v14);
        v11 = -1073740029;
      }
      else
      {
        v16 = *(_QWORD **)(v20 + 32);
        if ( !v16 )
          goto LABEL_20;
        v17 = v16[153] - *(_QWORD *)&v22[2];
        if ( !v17 )
          v17 = v16[154] - v23;
        if ( v17 )
        {
LABEL_20:
          AlpcpUnlockMessage(v20);
          ObfDereferenceObject(v14);
          v11 = -1073741790;
        }
        else
        {
          ObfReferenceObject(*(PVOID *)(v20 + 32));
          AlpcpUnlockMessage(v15);
          v11 = PsOpenThread((int)v21, DesiredAccess, (int)&v25, (int)&v22[2], 0, PreviousMode);
          ObfDereferenceObject(v16);
          ObfDereferenceObject(v14);
          if ( v11 >= 0 )
            *ThreadHandle = *(HANDLE *)v21;
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
