/*
 * XREFs of sub_18001E9F4 @ 0x18001E9F4
 * Callers:
 *     sub_180027524 @ 0x180027524 (sub_180027524.c)
 *     sub_180054E24 @ 0x180054E24 (sub_180054E24.c)
 *     sub_180056AE8 @ 0x180056AE8 (sub_180056AE8.c)
 *     sub_180058B2C @ 0x180058B2C (sub_180058B2C.c)
 *     sub_1800D38EC @ 0x1800D38EC (sub_1800D38EC.c)
 *     sub_1800D45E8 @ 0x1800D45E8 (sub_1800D45E8.c)
 *     sub_1800DD780 @ 0x1800DD780 (sub_1800DD780.c)
 *     sub_1800DFC64 @ 0x1800DFC64 (sub_1800DFC64.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 */

__int64 __fastcall sub_18001E9F4(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    sub_180011AC4();
  return 32 * a1;
}
