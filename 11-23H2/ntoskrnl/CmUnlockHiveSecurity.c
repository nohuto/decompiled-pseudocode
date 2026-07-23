/*
 * XREFs of CmUnlockHiveSecurity @ 0x140AF5100
 * Callers:
 *     CmpCreateTombstone @ 0x14061739C (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140680518 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmpFreeKeyByCell @ 0x14070B424 (CmpFreeKeyByCell.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmpAssignSecurityToKcb @ 0x14076AC50 (CmpAssignSecurityToKcb.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1407DE09C (CmpUnlockTwoSecurityCaches.c)
 *     CmpAssignKeySecurity @ 0x1408585CC (CmpAssignKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x1408746CC (CmpCreateHiveRootCell.c)
 *     CmDumpKeyToFile @ 0x140A0AD54 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A0C034 (CmSaveMergedKeys.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A21388 (CmpCopyMergeOfLayeredKeyNode.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 */

signed __int32 __fastcall CmUnlockHiveSecurity(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rdx

  v1 = (volatile signed __int64 *)(a1 + 1784);
  _m_prefetchw((const void *)(a1 + 1784));
  v2 = *(_QWORD *)(a1 + 1784);
  v3 = v2 - 16;
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(v1, v3, v2) )
    ExfReleasePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
