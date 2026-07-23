/*
 * XREFs of sub_140AB8500 @ 0x140AB8500
 * Callers:
 *     sub_140AB8420 @ 0x140AB8420 (sub_140AB8420.c)
 * Callees:
 *     sub_14062E3A0 @ 0x14062E3A0 (sub_14062E3A0.c)
 */

void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sub_140AB8500()
{
  __int64 v0; // r10

  _mm_lfence();
  sub_14062E3A0(v0);
}
