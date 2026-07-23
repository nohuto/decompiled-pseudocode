/*
 * XREFs of sub_1402F50C0 @ 0x1402F50C0
 * Callers:
 *     sub_14029A2A0 @ 0x14029A2A0 (sub_14029A2A0.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     sub_1403C2D6C @ 0x1403C2D6C (sub_1403C2D6C.c)
 * Callees:
 *     sub_14036C804 @ 0x14036C804 (sub_14036C804.c)
 */

__int64 __fastcall sub_1402F50C0(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = *a1 ^ (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *a1 = result;
  if ( a2 )
  {
    if ( (*(_BYTE *)a1 & 1) == 0 )
      return sub_14036C804(a1, 1LL);
  }
  return result;
}
