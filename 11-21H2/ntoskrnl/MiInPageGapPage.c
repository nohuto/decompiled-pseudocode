/*
 * XREFs of MiInPageGapPage @ 0x1405943C0
 * Callers:
 *     MiInPageSkipPage @ 0x14045BA46 (MiInPageSkipPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInPageGapPage(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 7 && *(_QWORD *)(a1 + 8) == -3LL;
}
