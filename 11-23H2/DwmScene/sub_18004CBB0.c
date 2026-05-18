/*
 * XREFs of sub_18004CBB0 @ 0x18004CBB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014620 @ 0x180014620 (sub_180014620.c)
 *     sub_18004CB98 @ 0x18004CB98 (sub_18004CB98.c)
 */

__int64 *__fastcall sub_18004CBB0(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  sub_18004CB98(a1, 0LL);
  v3 = 0LL;
  return sub_180014620(a1, &v3);
}
