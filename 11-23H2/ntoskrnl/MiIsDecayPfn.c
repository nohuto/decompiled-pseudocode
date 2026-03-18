/*
 * XREFs of MiIsDecayPfn @ 0x14026EBD0
 * Callers:
 *     MiSynchronizeFastPageInsert @ 0x14026DF10 (MiSynchronizeFastPageInsert.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     MiSkipStandbyEntries @ 0x140330FEC (MiSkipStandbyEntries.c)
 *     MiWriteStandbyLookasideEntry @ 0x1403310CC (MiWriteStandbyLookasideEntry.c)
 *     MiFindSuitableLookasideReplacement @ 0x140331130 (MiFindSuitableLookasideReplacement.c)
 *     MiMirrorGatherBrownPages @ 0x140626C78 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x140628060 (MiMirrorReduceBlackWrites.c)
 *     MiGetStandbyPageType @ 0x140650774 (MiGetStandbyPageType.c)
 *     MiLockStandbyOldestPage @ 0x140650D1C (MiLockStandbyOldestPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C68160 && a1 < qword_140C68160 + 2048;
}
