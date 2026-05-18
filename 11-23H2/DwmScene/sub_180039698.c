/*
 * XREFs of sub_180039698 @ 0x180039698
 * Callers:
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 * Callees:
 *     sub_18009EC20 @ 0x18009EC20 (sub_18009EC20.c)
 */

__int64 __fastcall sub_180039698(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14472LL;
  v4 = *a2;
  return sub_18009EC20(v2, &v4);
}
