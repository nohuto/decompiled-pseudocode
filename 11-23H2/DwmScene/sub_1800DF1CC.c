/*
 * XREFs of sub_1800DF1CC @ 0x1800DF1CC
 * Callers:
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DDC64 @ 0x1800DDC64 (sub_1800DDC64.c)
 * Callees:
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 */

__int64 __fastcall sub_1800DF1CC(__int64 a1)
{
  __int64 result; // rax

  result = 0x155555555555555LL;
  if ( *(_QWORD *)(a1 + 8) == 0x155555555555555LL )
    sub_18001DDFC();
  return result;
}
