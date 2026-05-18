/*
 * XREFs of sub_18002F250 @ 0x18002F250
 * Callers:
 *     sub_18002FC2C @ 0x18002FC2C (sub_18002FC2C.c)
 *     sub_180030EEC @ 0x180030EEC (sub_180030EEC.c)
 *     sub_180058A08 @ 0x180058A08 (sub_180058A08.c)
 *     sub_180058D20 @ 0x180058D20 (sub_180058D20.c)
 *     sub_18005EB8C @ 0x18005EB8C (sub_18005EB8C.c)
 *     sub_18005ED08 @ 0x18005ED08 (sub_18005ED08.c)
 *     sub_18005EE28 @ 0x18005EE28 (sub_18005EE28.c)
 *     sub_180063290 @ 0x180063290 (sub_180063290.c)
 *     sub_1800633B0 @ 0x1800633B0 (sub_1800633B0.c)
 *     sub_180063C6C @ 0x180063C6C (sub_180063C6C.c)
 *     sub_180087E94 @ 0x180087E94 (sub_180087E94.c)
 *     sub_1800C891C @ 0x1800C891C (sub_1800C891C.c)
 *     sub_1800DB030 @ 0x1800DB030 (sub_1800DB030.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 */

__int64 __fastcall sub_18002F250(unsigned __int64 a1)
{
  if ( a1 > 0x555555555555555LL )
    sub_180011AC4();
  return 48 * a1;
}
