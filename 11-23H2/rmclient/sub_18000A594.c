/*
 * XREFs of sub_18000A594 @ 0x18000A594
 * Callers:
 *     sub_1800015B0 @ 0x1800015B0 (sub_1800015B0.c)
 * Callees:
 *     sub_18000CC20 @ 0x18000CC20 (sub_18000CC20.c)
 */

__int64 sub_18000A594()
{
  __int64 result; // rax

  word_180032A78 = 0;
  qword_180032A40 = (__int64)"WilStaging_02";
  byte_180032A38 = 0;
  xmmword_180032A48 = 0LL;
  xmmword_180032A58 = 0LL;
  xmmword_180032A68 = 0LL;
  sub_18000CC20(&unk_180032A80);
  qword_180032AC8 = 0LL;
  result = sub_18000CC20(&unk_180032AD0);
  qword_180032B38 = 0LL;
  byte_180032A38 = 1;
  xmmword_180032B18 = 0LL;
  xmmword_180032B28 = 0LL;
  return result;
}
