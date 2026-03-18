/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x140AF568C
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F634C (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140615BC4 (CmShutdownSystem1.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140616354 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x140768A9C (CmpTransMgrPrepare.c)
 *     HvpFinishPrimaryWrite @ 0x1407D9714 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x1407E79B0 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1408271A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14082722C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1408604D8 (CmpWaitOnHiveWriteQueue.c)
 *     CmDumpKeyToFile @ 0x140A0AAA4 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A0BD84 (CmSaveMergedKeys.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13858 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A13974 (CmpUnblockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x140A13A2C (CmpUnblockTwoHiveWrites.c)
 *     CmReplaceKey @ 0x140A156F4 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140A1A8E8 (CmpFlushBackupHive.c)
 * Callees:
 *     CmSiRWLockReleaseExclusive @ 0x140747338 (CmSiRWLockReleaseExclusive.c)
 */

signed __int32 __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockReleaseExclusive((volatile signed __int64 *)(a1 + 72));
}
