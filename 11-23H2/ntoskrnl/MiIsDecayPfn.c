/*
 * XREFs of MiIsDecayPfn @ 0x14026EE60
 * Callers:
 *     MiSynchronizeFastPageInsert @ 0x14026E1A0 (MiSynchronizeFastPageInsert.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiSkipStandbyEntries @ 0x14033127C (MiSkipStandbyEntries.c)
 *     MiWriteStandbyLookasideEntry @ 0x14033135C (MiWriteStandbyLookasideEntry.c)
 *     MiFindSuitableLookasideReplacement @ 0x1403313C0 (MiFindSuitableLookasideReplacement.c)
 *     MiMirrorGatherBrownPages @ 0x1406271C8 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x1406285B0 (MiMirrorReduceBlackWrites.c)
 *     MiGetStandbyPageType @ 0x140650CC4 (MiGetStandbyPageType.c)
 *     MiLockStandbyOldestPage @ 0x14065126C (MiLockStandbyOldestPage.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C68160 && a1 < qword_140C68160 + 2048;
}
