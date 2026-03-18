/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x140AF6670
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F634C (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140615C34 (CmShutdownSystem1.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14061633C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x140768FAC (CmpTransMgrPrepare.c)
 *     HvpFinishPrimaryWrite @ 0x1407D9C94 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x1407E7F30 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140828CF4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140828D7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmDumpKeyToFile @ 0x140A0AB54 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A0BE34 (CmSaveMergedKeys.c)
 *     NtCompressKey @ 0x140A0D6F0 (NtCompressKey.c)
 *     CmpBlockHiveWrites @ 0x140A13854 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13908 (CmpBlockTwoHiveWrites.c)
 *     CmReplaceKey @ 0x140A157A4 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140A1A998 (CmpFlushBackupHive.c)
 * Callees:
 *     CmSiRWLockAcquireExclusive @ 0x14074787C (CmSiRWLockAcquireExclusive.c)
 */

__int64 __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockAcquireExclusive((unsigned __int64 *)(a1 + 72));
}
