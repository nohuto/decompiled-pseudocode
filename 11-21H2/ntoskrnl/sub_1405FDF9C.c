/*
 * XREFs of sub_1405FDF9C @ 0x1405FDF9C
 * Callers:
 *     sub_1405FDAE4 @ 0x1405FDAE4 (sub_1405FDAE4.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_1405FFBC8 @ 0x1405FFBC8 (sub_1405FFBC8.c)
 *     sub_1405FFC5C @ 0x1405FFC5C (sub_1405FFC5C.c)
 *     sub_1405FFD00 @ 0x1405FFD00 (sub_1405FFD00.c)
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 *     sub_140A81E94 @ 0x140A81E94 (sub_140A81E94.c)
 *     sub_140A82690 @ 0x140A82690 (sub_140A82690.c)
 *     sub_140A82730 @ 0x140A82730 (sub_140A82730.c)
 *     sub_140A82A00 @ 0x140A82A00 (sub_140A82A00.c)
 *     sub_140A83044 @ 0x140A83044 (sub_140A83044.c)
 *     sub_140A86EA0 @ 0x140A86EA0 (sub_140A86EA0.c)
 *     sub_140A87EFC @ 0x140A87EFC (sub_140A87EFC.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 *     sub_140A8942C @ 0x140A8942C (sub_140A8942C.c)
 *     sub_140A8A0C8 @ 0x140A8A0C8 (sub_140A8A0C8.c)
 *     sub_140A91824 @ 0x140A91824 (sub_140A91824.c)
 *     sub_140A919A8 @ 0x140A919A8 (sub_140A919A8.c)
 *     sub_140A92B74 @ 0x140A92B74 (sub_140A92B74.c)
 *     sub_140A92C0C @ 0x140A92C0C (sub_140A92C0C.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 *     sub_140A99A38 @ 0x140A99A38 (sub_140A99A38.c)
 *     sub_140A9D340 @ 0x140A9D340 (sub_140A9D340.c)
 *     sub_140AA0A20 @ 0x140AA0A20 (sub_140AA0A20.c)
 *     sub_140AA0BD0 @ 0x140AA0BD0 (sub_140AA0BD0.c)
 *     sub_140AA0D20 @ 0x140AA0D20 (sub_140AA0D20.c)
 *     sub_140AA1C3C @ 0x140AA1C3C (sub_140AA1C3C.c)
 *     sub_140AA5E40 @ 0x140AA5E40 (sub_140AA5E40.c)
 *     sub_140AA68A0 @ 0x140AA68A0 (sub_140AA68A0.c)
 *     sub_140AA6B60 @ 0x140AA6B60 (sub_140AA6B60.c)
 * Callees:
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 */

__int64 sub_1405FDF9C(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return sub_140369C50(&File, 0x65u, 0, a1, va, 1);
}
