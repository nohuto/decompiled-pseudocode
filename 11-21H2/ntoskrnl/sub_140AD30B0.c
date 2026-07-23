/*
 * XREFs of sub_140AD30B0 @ 0x140AD30B0
 * Callers:
 *     sub_140AD3100 @ 0x140AD3100 (sub_140AD3100.c)
 *     sub_140AD3180 @ 0x140AD3180 (sub_140AD3180.c)
 *     sub_140AD3200 @ 0x140AD3200 (sub_140AD3200.c)
 *     sub_140AD3280 @ 0x140AD3280 (sub_140AD3280.c)
 *     sub_140AD3300 @ 0x140AD3300 (sub_140AD3300.c)
 *     sub_140AD3380 @ 0x140AD3380 (sub_140AD3380.c)
 *     sub_140AD3400 @ 0x140AD3400 (sub_140AD3400.c)
 *     sub_140AD3480 @ 0x140AD3480 (sub_140AD3480.c)
 *     sub_140AD3500 @ 0x140AD3500 (sub_140AD3500.c)
 *     sub_140AD3580 @ 0x140AD3580 (sub_140AD3580.c)
 *     sub_140AD3600 @ 0x140AD3600 (sub_140AD3600.c)
 *     sub_140AD3680 @ 0x140AD3680 (sub_140AD3680.c)
 *     sub_140AD3700 @ 0x140AD3700 (sub_140AD3700.c)
 *     sub_140AD3780 @ 0x140AD3780 (sub_140AD3780.c)
 *     sub_140AD3800 @ 0x140AD3800 (sub_140AD3800.c)
 *     sub_140AD3880 @ 0x140AD3880 (sub_140AD3880.c)
 *     sub_140AD3900 @ 0x140AD3900 (sub_140AD3900.c)
 *     sub_140AD3980 @ 0x140AD3980 (sub_140AD3980.c)
 *     sub_140AD3A00 @ 0x140AD3A00 (sub_140AD3A00.c)
 *     sub_140AD3A80 @ 0x140AD3A80 (sub_140AD3A80.c)
 *     sub_140AD3B00 @ 0x140AD3B00 (sub_140AD3B00.c)
 *     sub_140AD3B80 @ 0x140AD3B80 (sub_140AD3B80.c)
 *     sub_140AD3C00 @ 0x140AD3C00 (sub_140AD3C00.c)
 *     sub_140AD3C80 @ 0x140AD3C80 (sub_140AD3C80.c)
 *     sub_140AD3D00 @ 0x140AD3D00 (sub_140AD3D00.c)
 *     sub_140AD3D80 @ 0x140AD3D80 (sub_140AD3D80.c)
 *     sub_140AD3E00 @ 0x140AD3E00 (sub_140AD3E00.c)
 *     sub_140AD3E80 @ 0x140AD3E80 (sub_140AD3E80.c)
 *     sub_140AD3F00 @ 0x140AD3F00 (sub_140AD3F00.c)
 *     sub_140AD4400 @ 0x140AD4400 (sub_140AD4400.c)
 *     sub_140AD51B0 @ 0x140AD51B0 (sub_140AD51B0.c)
 *     sub_140AD52B0 @ 0x140AD52B0 (sub_140AD52B0.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn sub_140AD30B0(unsigned __int8 a1, unsigned __int64 a2)
{
  __writegsbyte(0x70u, a1);
  _mm_sfence();
  __writegsqword(0x78u, a2);
  _disable();
  __halt();
}
