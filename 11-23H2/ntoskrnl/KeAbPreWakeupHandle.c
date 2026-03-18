/*
 * XREFs of KeAbPreWakeupHandle @ 0x1402BDD98
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D880 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeWakeWaitChain @ 0x140260940 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260C30 (ExpCommitWakeResourceShared.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpWakePushLock @ 0x1402BD990 (ExpWakePushLock.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1402BC8A0 (KiAbApplyWakeupBoost.c)
 */

void __fastcall KeAbPreWakeupHandle(__int64 a1, char a2, int a3)
{
  KiAbApplyWakeupBoost(a2, a1, a3);
}
