/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x1407182C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     PsOpenProcess @ 0x1406F3DB0 (PsOpenProcess.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14071B1A4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x14071BF28 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140738DC0 (AlpcpLookupMessage.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderProcess(
        PHANDLE ProcessHandle,
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
  _QWORD *v18; // rsi
  __int64 v20; // rsi
  signed __int64 *v21; // rbx
  PVOID v22; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v24; // [rsp+38h] [rbp-90h] BYREF
  void *v25; // [rsp+40h] [rbp-88h] BYREF
  __int128 v26; // [rsp+48h] [rbp-80h] BYREF
  __int128 v27; // [rsp+58h] [rbp-70h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-60h]
  OBJECT_ATTRIBUTES v29; // [rsp+70h] [rbp-58h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  ClientViewSize = 0LL;
  memset(&v29, 0, 44);
  v25 = 0LL;
  v24 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_17;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessHandle < 0x7FFFFFFF0000LL )
      v13 = (__int64)ProcessHandle;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    AlpcpProbeAndCaptureMessageHeader(PortMessage, &v26, Flags);
    if ( ObjectAttributes < v12 )
      v12 = ObjectAttributes;
    v29 = *v12;
  }
  else
  {
    v26 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
    v27 = *(__int128 *)((char *)&PortMessage->8 + 8);
    ClientViewSize = PortMessage->ClientViewSize;
    v29 = *ObjectAttributes;
  }
  v14 = Object;
  v11 = AlpcpLookupMessage((_DWORD)Object, DWORD2(v27), ClientViewSize, (_DWORD)v12, (__int64)&v24);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v14);
    goto LABEL_17;
  }
  v15 = v24;
  if ( (*(_DWORD *)(v24 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(v24);
    ObfDereferenceObject(v14);
    v11 = -1073740029;
    goto LABEL_17;
  }
  v16 = *(_QWORD **)(v24 + 32);
  if ( v16 )
  {
    v17 = v16[153] - *((_QWORD *)&v26 + 1);
    if ( !v17 )
      v17 = v16[154] - v27;
    if ( v17 )
    {
      AlpcpUnlockMessage(v24);
      ObfDereferenceObject(v14);
      v11 = -1073741813;
      goto LABEL_17;
    }
    v18 = (_QWORD *)v16[68];
    ObfReferenceObjectWithTag(v18, 0x63706C41u);
    goto LABEL_15;
  }
  v20 = *(_QWORD *)(v24 + 24);
  if ( !v20 )
  {
    AlpcpUnlockMessage(v24);
    v22 = v14;
    goto LABEL_30;
  }
  v21 = (signed __int64 *)(v20 + 352);
  ExAcquirePushLockSharedEx(v20 + 352, 0LL);
  if ( (*(_DWORD *)(v20 + 416) & 0x40) == 0 )
  {
    v18 = *(_QWORD **)(v20 + 24);
    if ( v18[136] == *((_QWORD *)&v26 + 1) )
    {
      ObfReferenceObjectWithTag(v18, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((ULONG_PTR)v21);
      v15 = v24;
      v14 = Object;
LABEL_15:
      AlpcpUnlockMessage(v15);
      *(_QWORD *)&v27 = 0LL;
      v11 = PsOpenProcess(
              (unsigned __int64)&v25,
              DesiredAccess,
              (__int64)&v29,
              (__int128 *)((char *)&v26 + 8),
              0,
              PreviousMode);
      ObfDereferenceObjectWithTag(v18, 0x63706C41u);
      ObfDereferenceObject(v14);
      if ( v11 >= 0 )
        *ProcessHandle = v25;
      goto LABEL_17;
    }
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v21);
    KeAbPostRelease((ULONG_PTR)v21);
    AlpcpUnlockMessage(v24);
    v22 = Object;
LABEL_30:
    ObfDereferenceObject(v22);
    v11 = -1073741790;
    goto LABEL_17;
  }
  if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v20 + 352));
  KeAbPostRelease(v20 + 352);
  AlpcpUnlockMessage(v24);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
