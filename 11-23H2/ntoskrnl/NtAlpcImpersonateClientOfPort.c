/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x14071CDA0
 * Callers:
 *     NtImpersonateClientOfPort @ 0x1409787E0 (NtImpersonateClientOfPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     AlpcpImpersonateMessage @ 0x14071D000 (AlpcpImpersonateMessage.c)
 *     AlpcpCaptureIdMessage @ 0x14071D240 (AlpcpCaptureIdMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x14071D2C8 (AlpcpReferenceConnectedPort.c)
 *     AlpcpLookupMessage @ 0x140738AA0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockBlob @ 0x14073BE30 (AlpcpUnlockBlob.c)
 *     SeImpersonateClientEx @ 0x1407F60C0 (SeImpersonateClientEx.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14097AC10 (AlpcpEnterStateChangeEventMessageLog.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  HANDLE v5; // r10
  PVOID v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  int v10; // r14d
  unsigned __int64 v11; // rdi
  int v12; // r15d
  BOOL v13; // r12d
  int v14; // esi
  int v15; // r9d
  ULONG_PTR v16; // rdi
  __int64 v18; // rax
  int Object; // [rsp+20h] [rbp-B8h]
  int v20; // [rsp+30h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+38h] [rbp-A0h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+50h] [rbp-88h] BYREF
  PVOID v24; // [rsp+E8h] [rbp+10h] BYREF
  int v25; // [rsp+F8h] [rbp+20h] BYREF

  v5 = PortHandle;
  v6 = 0LL;
  BugCheckParameter2[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = 0;
  v20 = 0;
  BugCheckParameter2[1] = 0LL;
  v8 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v24) = PreviousMode;
  if ( Message )
  {
    AlpcpCaptureIdMessage(Message, &v25, &v20);
    v10 = v25;
    if ( !v25 )
    {
LABEL_28:
      v14 = -1073741811;
      goto LABEL_11;
    }
    v5 = PortHandle;
    PreviousMode = (char)v24;
  }
  else
  {
    v10 = v25;
  }
  v11 = (unsigned __int64)Flags >> 2;
  if ( (unsigned int)((unsigned __int64)Flags >> 2) > 3 )
    goto LABEL_28;
  v12 = (unsigned __int8)Flags & 1;
  v13 = (((4 * (_DWORD)v11) | 2) & (unsigned int)Flags) != 0LL;
  v24 = 0LL;
  v14 = ObReferenceObjectByHandle(v5, 1u, AlpcPortObjectType, PreviousMode, &v24, 0LL);
  v6 = v24;
  if ( v14 < 0 )
    goto LABEL_11;
  if ( !v10 )
  {
    v18 = AlpcpReferenceConnectedPort(v24);
    v8 = (void *)v18;
    if ( !v18 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v18 + 256) & 0x10000) == 0 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v18 + 416) & 0x400) != 0 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    ClientContext = *(struct _SECURITY_CLIENT_CONTEXT *)(v18 + 64);
    if ( v13 )
    {
      if ( (int)v11 > ClientContext.SecurityQos.ImpersonationLevel )
      {
        v14 = -1073741790;
        goto LABEL_11;
      }
      ClientContext.SecurityQos.ImpersonationLevel = v11;
    }
    v14 = SeImpersonateClientEx(&ClientContext, 0LL);
    goto LABEL_11;
  }
  v14 = AlpcpLookupMessage((_DWORD)v24, v10, v20, v15, (__int64)BugCheckParameter2);
  if ( v14 >= 0 )
  {
    Object = v11;
    v16 = BugCheckParameter2[0];
    v14 = AlpcpImpersonateMessage((_DWORD)v6, BugCheckParameter2[0], v12, v13, Object);
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v16);
    AlpcpUnlockBlob(v16);
  }
LABEL_11:
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( v6 )
    ObfDereferenceObject(v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
