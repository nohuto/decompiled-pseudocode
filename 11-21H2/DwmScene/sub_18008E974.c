/*
 * XREFs of sub_18008E974 @ 0x18008E974
 * Callers:
 *     sub_18008EB54 @ 0x18008EB54 (sub_18008EB54.c)
 *     sub_18008F0BC @ 0x18008F0BC (sub_18008F0BC.c)
 *     sub_18008F360 @ 0x18008F360 (sub_18008F360.c)
 *     sub_18008F3C0 @ 0x18008F3C0 (sub_18008F3C0.c)
 *     sub_180091894 @ 0x180091894 (sub_180091894.c)
 *     sub_180091BE4 @ 0x180091BE4 (sub_180091BE4.c)
 *     sub_180091CE8 @ 0x180091CE8 (sub_180091CE8.c)
 *     sub_180093940 @ 0x180093940 (sub_180093940.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_18008E974(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      sub_180010910(v3 + 16);
      result = sub_180010910(v3);
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
