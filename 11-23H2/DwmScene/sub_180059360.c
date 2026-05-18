/*
 * XREFs of sub_180059360 @ 0x180059360
 * Callers:
 *     sub_180058884 @ 0x180058884 (sub_180058884.c)
 *     sub_180058DE4 @ 0x180058DE4 (sub_180058DE4.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 */

__int64 __fastcall sub_180059360(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  sub_180017648((_QWORD *)(a1 + 8), (__int64)(a2 + 2));
  return a1;
}
