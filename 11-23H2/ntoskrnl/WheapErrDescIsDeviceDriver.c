/*
 * XREFs of WheapErrDescIsDeviceDriver @ 0x1406117C0
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140611100 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406113E0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x1406117F4 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x140611870 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x140611928 (WheapInitErrorReportDeviceDriver.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A07AA0 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapErrDescIsDeviceDriver(__int64 a1)
{
  return a1 && *(_DWORD *)(a1 + 8) == 16;
}
