/*
 * XREFs of MiGetStandbyPageType @ 0x140650CC4
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x14033102C (MiRebuildStandbyLookasideList.c)
 *     MiSkipStandbyEntries @ 0x14033127C (MiSkipStandbyEntries.c)
 *     MiFindSuitableLookasideReplacement @ 0x1403313C0 (MiFindSuitableLookasideReplacement.c)
 * Callees:
 *     MiIsDecayPfn @ 0x14026EE60 (MiIsDecayPfn.c)
 */

__int64 __fastcall MiGetStandbyPageType(ULONG_PTR a1)
{
  __int64 v1; // rcx

  if ( MiIsDecayPfn(a1) )
    return 1LL;
  else
    return (*(unsigned __int8 *)(48 * v1 - 0x21FFFFFFFFDDLL) >> 2) & 2;
}
