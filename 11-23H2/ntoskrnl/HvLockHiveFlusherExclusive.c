/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x140AF5670
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F634C (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140615BC4 (CmShutdownSystem1.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1406162CC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x140768A9C (CmpTransMgrPrepare.c)
 *     HvpFinishPrimaryWrite @ 0x1407D9714 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x1407E79B0 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1408271A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14082722C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmDumpKeyToFile @ 0x140A0AAA4 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A0BD84 (CmSaveMergedKeys.c)
 *     NtCompressKey @ 0x140A0D640 (NtCompressKey.c)
 *     CmpBlockHiveWrites @ 0x140A137A4 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13858 (CmpBlockTwoHiveWrites.c)
 *     CmReplaceKey @ 0x140A156F4 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140A1A8E8 (CmpFlushBackupHive.c)
 * Callees:
 *     CmSiRWLockAcquireExclusive @ 0x14074736C (CmSiRWLockAcquireExclusive.c)
 */

__int64 __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockAcquireExclusive((unsigned __int64 *)(a1 + 72));
}
