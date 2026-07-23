/*
 * XREFs of sub_140642840 @ 0x140642840
 * Callers:
 *     sub_1406BE9A0 @ 0x1406BE9A0 (sub_1406BE9A0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_140642840(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
