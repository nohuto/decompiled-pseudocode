/*
 * XREFs of MiGetStandbyPageType @ 0x1406507E4
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x140330BFC (MiRebuildStandbyLookasideList.c)
 *     MiSkipStandbyEntries @ 0x140330E4C (MiSkipStandbyEntries.c)
 *     MiFindSuitableLookasideReplacement @ 0x140330F90 (MiFindSuitableLookasideReplacement.c)
 * Callees:
 *     MiIsDecayPfn @ 0x14026EAB0 (MiIsDecayPfn.c)
 */

__int64 __fastcall MiGetStandbyPageType(ULONG_PTR a1)
{
  __int64 v1; // rcx

  if ( MiIsDecayPfn(a1) )
    return 1LL;
  else
    return (*(unsigned __int8 *)(48 * v1 - 0x21FFFFFFFFDDLL) >> 2) & 2;
}
