/*
 * XREFs of sub_1800423C8 @ 0x1800423C8
 * Callers:
 *     sub_18004231C @ 0x18004231C (sub_18004231C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012C74 @ 0x180012C74 (sub_180012C74.c)
 *     sub_180037398 @ 0x180037398 (sub_180037398.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

void __fastcall __noreturn sub_1800423C8(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_180043668(a1);
  sub_180012C74(a1, v2);
  sub_180010910((__int64)v2);
  sub_180037398();
}
