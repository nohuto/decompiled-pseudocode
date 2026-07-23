/*
 * XREFs of MiWriteStandbyLookasideEntry @ 0x14033135C
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiReplaceStandbyLookaside @ 0x140330E98 (MiReplaceStandbyLookaside.c)
 *     MiClearEntireStandbyLookasideList @ 0x140330F84 (MiClearEntireStandbyLookasideList.c)
 *     MiRebuildStandbyLookasideList @ 0x14033102C (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     MiIsDecayPfn @ 0x14026EE60 (MiIsDecayPfn.c)
 *     MiPurgingPageFromLookaside @ 0x140331740 (MiPurgingPageFromLookaside.c)
 *     MiSetStandbyLookasideState @ 0x1403318B0 (MiSetStandbyLookasideState.c)
 */

void __fastcall MiWriteStandbyLookasideEntry(ULONG_PTR *a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v4; // r8
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // rcx

  v4 = *a1;
  *a1 = a3;
  if ( v4 != -1LL && !MiIsDecayPfn(v4) )
    MiPurgingPageFromLookaside(v6, v5);
  if ( a3 != -1LL && !MiIsDecayPfn(a3) )
    MiSetStandbyLookasideState(v7, 1LL);
}
