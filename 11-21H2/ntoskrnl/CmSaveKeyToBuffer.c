/*
 * XREFs of CmSaveKeyToBuffer @ 0x140AB4770
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpDumpKeyToBuffer @ 0x140AB48B4 (CmpDumpKeyToBuffer.c)
 */

__int64 __fastcall CmSaveKeyToBuffer(void *a1, __int64 a2, __int64 a3)
{
  int v6; // r9d
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v18[3]; // [rsp+48h] [rbp-38h] BYREF

  Object = 0LL;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  CmpInitializeThreadInfo((__int64)&v17);
  if ( v6 == 4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
    {
      v7 = CmObReferenceObjectByHandle(a1, 0, v9, 0, &Object, 0LL);
      if ( v7 >= 0 )
      {
        v13 = KeGetCurrentThread();
        --v13->KernelApcDisable;
        CmpAttachToRegistryProcess((__int64)v18, v10, v11, v12);
        v7 = CmpDumpKeyToBuffer(Object, v14, a2, a3);
        KiUnstackDetachProcess((__int64)v18, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      if ( Object )
        ObfDereferenceObject(Object);
      ExReleaseRundownProtection(&CmpShutdownRundown);
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
  CmCleanupThreadInfo((__int64 *)&v17);
  return (unsigned int)v7;
}
