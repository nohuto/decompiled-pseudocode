/*
 * XREFs of sub_18001E424 @ 0x18001E424
 * Callers:
 *     sub_18002DC3C @ 0x18002DC3C (sub_18002DC3C.c)
 *     sub_18002DFDC @ 0x18002DFDC (sub_18002DFDC.c)
 *     sub_180061DF8 @ 0x180061DF8 (sub_180061DF8.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     sub_1800DBDE0 @ 0x1800DBDE0 (sub_1800DBDE0.c)
 * Callees:
 *     sub_18001C45C @ 0x18001C45C (sub_18001C45C.c)
 */

_QWORD *__fastcall sub_18001E424(_QWORD *a1, const char *a2)
{
  sub_18001C45C((__int64)a1, -2147024809, a2, 0);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
