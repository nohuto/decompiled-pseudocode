/*
 * XREFs of sub_18003DA78 @ 0x18003DA78
 * Callers:
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 * Callees:
 *     sub_1800B15DC @ 0x1800B15DC (sub_1800B15DC.c)
 */

__int64 __fastcall sub_18003DA78(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14624LL;
  v4 = *a2;
  return sub_1800B15DC(v2, &v4);
}
