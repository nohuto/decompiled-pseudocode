/*
 * XREFs of sub_1800B1CA0 @ 0x1800B1CA0
 * Callers:
 *     sub_1800B1D60 @ 0x1800B1D60 (sub_1800B1D60.c)
 *     sub_1800B1D80 @ 0x1800B1D80 (sub_1800B1D80.c)
 *     sub_1800B1DA0 @ 0x1800B1DA0 (sub_1800B1DA0.c)
 *     sub_1800B1DC0 @ 0x1800B1DC0 (sub_1800B1DC0.c)
 *     sub_1800B1DE0 @ 0x1800B1DE0 (sub_1800B1DE0.c)
 *     sub_1800B1E00 @ 0x1800B1E00 (sub_1800B1E00.c)
 *     sub_1800B1E20 @ 0x1800B1E20 (sub_1800B1E20.c)
 *     sub_1800B1E40 @ 0x1800B1E40 (sub_1800B1E40.c)
 *     sub_1800B1E60 @ 0x1800B1E60 (sub_1800B1E60.c)
 *     sub_1800B1E80 @ 0x1800B1E80 (sub_1800B1E80.c)
 * Callees:
 *     sub_1800AF200 @ 0x1800AF200 (sub_1800AF200.c)
 *     sub_1800AF480 @ 0x1800AF480 (sub_1800AF480.c)
 *     sub_1800AF820 @ 0x1800AF820 (sub_1800AF820.c)
 *     sub_1800AFCB0 @ 0x1800AFCB0 (sub_1800AFCB0.c)
 *     sub_1800B0140 @ 0x1800B0140 (sub_1800B0140.c)
 *     sub_1800B0610 @ 0x1800B0610 (sub_1800B0610.c)
 *     sub_1800B0BB0 @ 0x1800B0BB0 (sub_1800B0BB0.c)
 *     sub_1800B10D0 @ 0x1800B10D0 (sub_1800B10D0.c)
 *     sub_1800B13A0 @ 0x1800B13A0 (sub_1800B13A0.c)
 *     sub_1800B1560 @ 0x1800B1560 (sub_1800B1560.c)
 */

__int64 __fastcall sub_1800B1CA0(__int64 a1, __int64 *a2)
{
  sub_1800B10D0(a1 + 9256, (__int64)a2);
  sub_1800B13A0(a1 + 14536, (__int64)a2);
  sub_1800B1560(a1 + 14624, (__int64)a2);
  sub_1800AF200(a1 + 9776, (__int64)a2);
  sub_1800AF480(a1, (__int64)a2);
  sub_1800AF820(a1 + 1160, (__int64)a2);
  sub_1800B0610(a1 + 64, (__int64)a2);
  sub_1800AFCB0(a1 + 4632, (__int64)a2);
  sub_1800B0BB0(a1 + 9704, (__int64)a2);
  sub_1800B0140(a1 + 9848, (__int64)a2);
  return sub_1800B0900(a1 + 14472, a2);
}
