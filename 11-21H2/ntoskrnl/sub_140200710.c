/*
 * XREFs of sub_140200710 @ 0x140200710
 * Callers:
 *     sub_1403B2500 @ 0x1403B2500 (sub_1403B2500.c)
 * Callees:
 *     sub_140200750 @ 0x140200750 (sub_140200750.c)
 */

__int64 __fastcall sub_140200710(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  __int64 result; // rax

  result = sub_140200750(a1, a2, a3, a4);
  if ( (*a6 == 1 || *a6 == 2) && !a6[1] )
    a6[1] = 1;
  return result;
}
