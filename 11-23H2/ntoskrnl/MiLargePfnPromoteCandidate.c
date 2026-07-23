/*
 * XREFs of MiLargePfnPromoteCandidate @ 0x140333600
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140333050 (MiCoalesceFreeLargePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064EFF4 (MiChangePageAttributeLargeFreeZeroPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLargePfnPromoteCandidate(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (*(_BYTE *)(a2 + 34) & 7u) <= 1 )
  {
    v3 = *(_QWORD *)(a2 + 40);
    if ( (v3 & 0x10000000000LL) != 0
      && *(_QWORD *)(qword_140C673C8 + 8 * ((v3 >> 43) & 0x3FF)) == a1
      && (*(_BYTE *)(a2 + 35) & 0x40) == 0
      && a3 == 3 - (*(_BYTE *)(a2 + 36) & 3) )
    {
      return 1;
    }
  }
  return result;
}
