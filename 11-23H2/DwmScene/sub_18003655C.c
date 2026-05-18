/*
 * XREFs of sub_18003655C @ 0x18003655C
 * Callers:
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_18003439C @ 0x18003439C (sub_18003439C.c)
 *     sub_18003B7C4 @ 0x18003B7C4 (sub_18003B7C4.c)
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_180054B70 @ 0x180054B70 (sub_180054B70.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_18006F6C0 @ 0x18006F6C0 (sub_18006F6C0.c)
 *     sub_180081120 @ 0x180081120 (sub_180081120.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 *     sub_180088C80 @ 0x180088C80 (sub_180088C80.c)
 *     sub_18008B0A8 @ 0x18008B0A8 (sub_18008B0A8.c)
 *     sub_18008C230 @ 0x18008C230 (sub_18008C230.c)
 *     sub_18008F990 @ 0x18008F990 (sub_18008F990.c)
 * Callees:
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 *     sub_180030F98 @ 0x180030F98 (sub_180030F98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003655C(__int64 a1, __int64 *a2)
{
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  sub_18002A244(a1 + 112, (__int64)v5);
  sub_180030F98(a2, a1 + 88);
  sub_180029FA0((__int64)v5);
  return a2;
}
