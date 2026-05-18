/*
 * XREFs of sub_18003D868 @ 0x18003D868
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 * Callees:
 *     sub_1800B0960 @ 0x1800B0960 (sub_1800B0960.c)
 */

__int64 __fastcall sub_18003D868(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14472LL;
  v4 = *a2;
  return sub_1800B0960(v2, &v4);
}
