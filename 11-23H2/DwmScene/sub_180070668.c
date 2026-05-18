/*
 * XREFs of sub_180070668 @ 0x180070668
 * Callers:
 *     sub_18006FD7C @ 0x18006FD7C (sub_18006FD7C.c)
 *     sub_18006FE4C @ 0x18006FE4C (sub_18006FE4C.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 */

__int64 __fastcall sub_180070668(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x1FFFFFFFFFFFFFFLL )
    sub_180011AC4();
  return sub_18001090C(a2 << 7);
}
