/*
 * XREFs of sub_1406447D0 @ 0x1406447D0
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140644110 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406443F0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     sub_140644808 @ 0x140644808 (sub_140644808.c)
 *     sub_140644878 @ 0x140644878 (sub_140644878.c)
 *     sub_140644930 @ 0x140644930 (sub_140644930.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A08A50 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1406447D0(__int64 a1)
{
  return a1 && *(_DWORD *)(a1 + 8) == 16;
}
