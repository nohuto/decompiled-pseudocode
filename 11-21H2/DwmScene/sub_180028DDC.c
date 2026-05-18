/*
 * XREFs of sub_180028DDC @ 0x180028DDC
 * Callers:
 *     sub_180016BE4 @ 0x180016BE4 (sub_180016BE4.c)
 *     sub_180028260 @ 0x180028260 (sub_180028260.c)
 *     sub_1800D78AC @ 0x1800D78AC (sub_1800D78AC.c)
 *     sub_1800D7B74 @ 0x1800D7B74 (sub_1800D7B74.c)
 *     sub_1800D7E3C @ 0x1800D7E3C (sub_1800D7E3C.c)
 *     sub_1800D8104 @ 0x1800D8104 (sub_1800D8104.c)
 *     sub_1800D83CC @ 0x1800D83CC (sub_1800D83CC.c)
 * Callees:
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_180037268 @ 0x180037268 (sub_180037268.c)
 */

__int64 __fastcall sub_180028DDC(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  v3 = sub_18002850C(a1);
  v4 = sub_180037268(v3);
  sub_18002C460(v4, v5);
  return a2;
}
