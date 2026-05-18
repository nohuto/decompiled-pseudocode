/*
 * XREFs of sub_180028614 @ 0x180028614
 * Callers:
 *     sub_180029590 @ 0x180029590 (sub_180029590.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 *     sub_180036B84 @ 0x180036B84 (sub_180036B84.c)
 *     sub_18003D56C @ 0x18003D56C (sub_18003D56C.c)
 *     sub_1800DD040 @ 0x1800DD040 (sub_1800DD040.c)
 * Callees:
 *     sub_18002C730 @ 0x18002C730 (sub_18002C730.c)
 */

__int64 __fastcall sub_180028614(__int64 a1)
{
  sub_18002C730(a1 + 24);
  return (__int64)(*(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248)) >> 4;
}
