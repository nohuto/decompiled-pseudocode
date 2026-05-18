/*
 * XREFs of sub_18000F5DC @ 0x18000F5DC
 * Callers:
 *     sub_18000D988 @ 0x18000D988 (sub_18000D988.c)
 *     sub_18000F82C @ 0x18000F82C (sub_18000F82C.c)
 * Callees:
 *     sub_18000F714 @ 0x18000F714 (sub_18000F714.c)
 */

__int64 __fastcall sub_18000F5DC(_WORD *a1, __int64 a2, __int64 a3)
{
  _WORD *v3; // rax
  __int64 v4; // r9
  __int64 result; // rax

  v3 = a1;
  v4 = 260LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    return sub_18000F714(
             (char *)a1 + ((2 * (260 - v4)) & -(__int64)(v4 != 0)),
             ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 260,
             a3,
             a3);
  return result;
}
