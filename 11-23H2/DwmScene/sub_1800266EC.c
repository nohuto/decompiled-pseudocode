/*
 * XREFs of sub_1800266EC @ 0x1800266EC
 * Callers:
 *     sub_1800273E0 @ 0x1800273E0 (sub_1800273E0.c)
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_18003439C @ 0x18003439C (sub_18003439C.c)
 *     sub_180039428 @ 0x180039428 (sub_180039428.c)
 *     sub_1800C72E0 @ 0x1800C72E0 (sub_1800C72E0.c)
 * Callees:
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 */

__int64 __fastcall sub_1800266EC(__int64 a1)
{
  sub_18002A370(a1 + 24);
  return (__int64)(*(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248)) >> 4;
}
