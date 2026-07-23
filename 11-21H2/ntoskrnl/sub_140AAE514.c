/*
 * XREFs of sub_140AAE514 @ 0x140AAE514
 * Callers:
 *     sub_1403A8390 @ 0x1403A8390 (sub_1403A8390.c)
 *     sub_140AABB44 @ 0x140AABB44 (sub_140AABB44.c)
 *     sub_140AAE4B0 @ 0x140AAE4B0 (sub_140AAE4B0.c)
 * Callees:
 *     sub_1403A8C98 @ 0x1403A8C98 (sub_1403A8C98.c)
 *     sub_1403CA3B4 @ 0x1403CA3B4 (sub_1403CA3B4.c)
 */

__int64 __fastcall sub_140AAE514(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  v5 = 0LL;
  sub_1403CA3B4(v2, &v4);
  return sub_1403A8C98(a1, &v4);
}
