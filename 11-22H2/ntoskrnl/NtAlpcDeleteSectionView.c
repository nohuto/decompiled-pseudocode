/*
 * XREFs of NtAlpcDeleteSectionView @ 0x1407CB5C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     AlpcpEnumerateResourcesPort @ 0x14071A478 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpDeleteView @ 0x14071C158 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14071E9AC (AlpcpDereferenceBlobEx.c)
 */

NTSTATUS __cdecl NtAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  struct _KTHREAD *CurrentThread; // rax
  signed int v5; // ebx
  PVOID v6; // rdi
  signed __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  ULONG_PTR v11; // rdi
  ULONG_PTR BugCheckParameter2[4]; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      BugCheckParameter2[0] = (ULONG_PTR)ViewBase;
      v6 = Object;
      BugCheckParameter2[1] = 0LL;
      v7 = (signed __int64 *)((char *)Object + 352);
      while ( 1 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)v7, 0LL);
        v10 = AlpcpEnumerateResourcesPort((__int64)v6, v8, v9, (__int64)BugCheckParameter2);
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7);
        KeAbPostRelease((ULONG_PTR)v7);
        if ( v10 != -1073741267 )
          break;
        v6 = Object;
      }
      v11 = BugCheckParameter2[1];
      if ( BugCheckParameter2[1] )
      {
        v5 = AlpcpDeleteView(BugCheckParameter2[1]) == 0 ? 0xC0000056 : 0;
        AlpcpDereferenceBlobEx(v11, 1);
      }
      else
      {
        v5 = -1073741503;
      }
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
