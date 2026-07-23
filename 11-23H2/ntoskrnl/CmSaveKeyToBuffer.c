/*
 * XREFs of CmSaveKeyToBuffer @ 0x140AF57B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 */

__int64 __fastcall CmSaveKeyToBuffer(void *a1, __int64 a2, __int64 a3)
{
  int v6; // r9d
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  struct _KTHREAD *v10; // rax
  __int64 v11; // rdx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  __int128 v14; // [rsp+38h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v15; // [rsp+48h] [rbp-38h] BYREF

  Object = 0LL;
  v14 = 0LL;
  memset(&v15, 0, sizeof(v15));
  CmpInitializeThreadInfo((__int64)&v14);
  if ( v6 == 4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection_0(&CmpShutdownRundown) )
    {
      v7 = CmObReferenceObjectByHandle(a1, 0, v9, 0, &Object, 0LL);
      if ( v7 >= 0 )
      {
        v10 = KeGetCurrentThread();
        --v10->KernelApcDisable;
        CmpAttachToRegistryProcess((__int64)&v15);
        v7 = CmpDumpKeyToBuffer(Object, v11, a2, a3);
        KiUnstackDetachProcess(&v15);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      if ( Object )
        ObfDereferenceObject(Object);
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KeLeaveCriticalRegion();
    }
    else
    {
      KeLeaveCriticalRegion();
      v7 = -1073741431;
    }
  }
  else
  {
    v7 = -1073741637;
  }
  CmCleanupThreadInfo((__int64 *)&v14);
  return (unsigned int)v7;
}
