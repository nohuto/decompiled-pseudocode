/*
 * XREFs of CmpForceFlushWorker @ 0x140A11DB0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     CmpDoFlushAll @ 0x1402F6BDC (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

__int64 CmpForceFlushWorker()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v7[3]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0LL;
  memset(v7, 0, sizeof(v7));
  CmpInitializeThreadInfo((__int64)&v6);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v1, v0, v2) )
  {
    CmpAttachToRegistryProcess(v7);
    CmpDoFlushAll();
    CmpDetachFromRegistryProcess(v7);
    CmpReleaseShutdownRundown(v4, v3);
  }
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return CmCleanupThreadInfo((__int64 *)&v6);
}
