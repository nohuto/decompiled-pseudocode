/*
 * XREFs of KeAbPreWakeupHandle @ 0x1402BDD68
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D860 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeWakeWaitChain @ 0x140260820 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260B10 (ExpCommitWakeResourceShared.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpWakePushLock @ 0x1402BD960 (ExpWakePushLock.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1402BC870 (KiAbApplyWakeupBoost.c)
 */

void __fastcall KeAbPreWakeupHandle(__int64 a1, char a2, int a3)
{
  KiAbApplyWakeupBoost(a2, a1, a3);
}
