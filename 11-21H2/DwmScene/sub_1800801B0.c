/*
 * XREFs of sub_1800801B0 @ 0x1800801B0
 * Callers:
 *     sub_18002DC40 @ 0x18002DC40 (sub_18002DC40.c)
 * Callees:
 *     sub_180037398 @ 0x180037398 (sub_180037398.c)
 */

__int64 __fastcall sub_1800801B0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = a3 & 0x7E;
  if ( (a3 & 1) != 0 || (a3 & 0x7E) != 0 )
    sub_180037398();
  return result;
}
