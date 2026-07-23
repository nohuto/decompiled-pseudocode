/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x140AF5670
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F65DC (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140616114 (CmShutdownSystem1.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14061681C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x140768C8C (CmpTransMgrPrepare.c)
 *     HvpFinishPrimaryWrite @ 0x1407D99E4 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x1407E7C80 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1408274A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14082752C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmDumpKeyToFile @ 0x140A0AD54 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A0C034 (CmSaveMergedKeys.c)
 *     NtCompressKey @ 0x140A0D8F0 (NtCompressKey.c)
 *     CmpBlockHiveWrites @ 0x140A13A54 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13B08 (CmpBlockTwoHiveWrites.c)
 *     CmReplaceKey @ 0x140A159A4 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140A1AB98 (CmpFlushBackupHive.c)
 * Callees:
 *     CmSiRWLockAcquireExclusive @ 0x14074755C (CmSiRWLockAcquireExclusive.c)
 */

__int64 __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockAcquireExclusive((unsigned __int64 *)(a1 + 72));
}
