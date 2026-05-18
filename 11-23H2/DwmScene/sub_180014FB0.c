/*
 * XREFs of sub_180014FB0 @ 0x180014FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014790 @ 0x180014790 (sub_180014790.c)
 */

__int64 __fastcall sub_180014FB0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = *a2 - 0x4BD1CD637052B94FLL;
  if ( *a2 == 0x4BD1CD637052B94FLL )
    result = a2[1] + 0x2492ED948E7B4D49LL;
  if ( !result )
    return sub_180014790(a1 + 16);
  return result;
}
