/*
 * XREFs of sub_18005D7D8 @ 0x18005D7D8
 * Callers:
 *     sub_18005D714 @ 0x18005D714 (sub_18005D714.c)
 * Callees:
 *     sub_18005BCF4 @ 0x18005BCF4 (sub_18005BCF4.c)
 */

__int64 __fastcall sub_18005D7D8(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = *a3;
  sub_18005BCF4(a1, a2, (__int64)&v5);
  return a2;
}
