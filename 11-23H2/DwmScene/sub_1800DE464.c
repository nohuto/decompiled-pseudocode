/*
 * XREFs of sub_1800DE464 @ 0x1800DE464
 * Callers:
 *     sub_1800DCD70 @ 0x1800DCD70 (sub_1800DCD70.c)
 *     sub_1800DCF3C @ 0x1800DCF3C (sub_1800DCF3C.c)
 *     sub_1800DD10C @ 0x1800DD10C (sub_1800DD10C.c)
 *     sub_1800DD308 @ 0x1800DD308 (sub_1800DD308.c)
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
 *     sub_1800DEC60 @ 0x1800DEC60 (sub_1800DEC60.c)
 * Callees:
 *     sub_1800DDC64 @ 0x1800DDC64 (sub_1800DDC64.c)
 */

__int64 __fastcall sub_1800DE464(__int64 *a1, _QWORD *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_1800DDC64(a1, (__int64)v3, a2) + 64LL;
}
