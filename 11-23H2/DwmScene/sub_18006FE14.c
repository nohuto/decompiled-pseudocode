/*
 * XREFs of sub_18006FE14 @ 0x18006FE14
 * Callers:
 *     sub_18006FD7C @ 0x18006FD7C (sub_18006FD7C.c)
 *     sub_18006FE4C @ 0x18006FE4C (sub_18006FE4C.c)
 *     sub_18006FFA4 @ 0x18006FFA4 (sub_18006FFA4.c)
 *     sub_180070124 @ 0x180070124 (sub_180070124.c)
 *     sub_1800705A4 @ 0x1800705A4 (sub_1800705A4.c)
 *     sub_180070620 @ 0x180070620 (sub_180070620.c)
 *     sub_1800706D8 @ 0x1800706D8 (sub_1800706D8.c)
 * Callees:
 *     sub_180097628 @ 0x180097628 (sub_180097628.c)
 */

__int64 __fastcall sub_18006FE14(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180097628(v3);
      v3 += 128LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
