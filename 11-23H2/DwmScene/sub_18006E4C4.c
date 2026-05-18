/*
 * XREFs of sub_18006E4C4 @ 0x18006E4C4
 * Callers:
 *     sub_180062F40 @ 0x180062F40 (sub_180062F40.c)
 * Callees:
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 */

__int64 __fastcall sub_18006E4C4(__int64 a1)
{
  __int64 result; // rax

  result = 0x492492492492492LL;
  if ( *(_QWORD *)(a1 + 8) == 0x492492492492492LL )
    sub_18001DDFC();
  return result;
}
