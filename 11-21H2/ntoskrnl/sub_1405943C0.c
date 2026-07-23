/*
 * XREFs of sub_1405943C0 @ 0x1405943C0
 * Callers:
 *     sub_14045BA46 @ 0x14045BA46 (sub_14045BA46.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1405943C0(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 7 && *(_QWORD *)(a1 + 8) == -3LL;
}
