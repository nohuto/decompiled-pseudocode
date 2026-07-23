/*
 * XREFs of KeAbPreWakeupHandle @ 0x1402BE028
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D950 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeWakeWaitChain @ 0x140260BD0 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260EC0 (ExpCommitWakeResourceShared.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAFD0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpWakePushLock @ 0x1402BDC20 (ExpWakePushLock.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1402BCB30 (KiAbApplyWakeupBoost.c)
 */

void __fastcall KeAbPreWakeupHandle(__int64 a1, char a2, int a3)
{
  KiAbApplyWakeupBoost(a2, a1, a3);
}
