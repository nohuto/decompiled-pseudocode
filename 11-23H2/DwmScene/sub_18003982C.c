/*
 * XREFs of sub_18003982C @ 0x18003982C
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 * Callees:
 *     sub_18009F614 @ 0x18009F614 (sub_18009F614.c)
 */

__int64 __fastcall sub_18003982C(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14624LL;
  v4 = *a2;
  return sub_18009F614(v2, &v4);
}
