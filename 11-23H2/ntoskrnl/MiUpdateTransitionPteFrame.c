/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x140330BBC
 * Callers:
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiInvalidateCollidedIos @ 0x1403300F0 (MiInvalidateCollidedIos.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     MiSplitDirectMapPage @ 0x14063F264 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x140664088 (MiDuplicateCloneLeaf.c)
 *     MiSwapHardFaultPage @ 0x14066C978 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402857A0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  if ( qword_140C65B40 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140C65B40;
  }
  return MiSwizzleInvalidPte((a1 ^ (a2 << 12)) & 0xFFFFFFFFFF000LL ^ a1);
}
