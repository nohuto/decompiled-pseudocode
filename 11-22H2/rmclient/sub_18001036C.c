/*
 * XREFs of sub_18001036C @ 0x18001036C
 * Callers:
 *     sub_18000F624 @ 0x18000F624 (sub_18000F624.c)
 *     sub_18000FC54 @ 0x18000FC54 (sub_18000FC54.c)
 * Callees:
 *     sub_180010DC4 @ 0x180010DC4 (sub_180010DC4.c)
 */

__int64 __fastcall sub_18001036C(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1[64] )
    result = sub_180010DC4(a2, a1 + 8);
  if ( a1[128] )
    result = sub_180010DC4(a2 + 64, a1 + 72);
  if ( a1[192] )
    return sub_180010DC4(a2 + 128, a1 + 136);
  return result;
}
