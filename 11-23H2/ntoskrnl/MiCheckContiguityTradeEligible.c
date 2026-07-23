/*
 * XREFs of MiCheckContiguityTradeEligible @ 0x14064937C
 * Callers:
 *     MiQueryVaPhysicalContiguity @ 0x14064949C (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065DC10 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     MiActivePageClaimCandidate @ 0x1403BBDD8 (MiActivePageClaimCandidate.c)
 */

__int64 __fastcall MiCheckContiguityTradeEligible(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  if ( v3 >= 0 && *(char *)(a1 + 35) >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
    {
      if ( !MiActivePageClaimCandidate(
              *(_QWORD *)(qword_140C673C8 + 8 * (((unsigned __int64)v3 >> 43) & 0x3FF)),
              a1,
              0,
              0LL,
              &v5) )
        return 1LL;
    }
    else if ( !*(_WORD *)(a1 + 32) )
    {
      LOBYTE(v1) = (unsigned int)MiCheckSlabPfnBitmap(a1, 1LL, 0) == 0;
      return v1;
    }
  }
  return 0LL;
}
