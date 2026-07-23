/*
 * XREFs of KiSwInterruptPresent @ 0x140B679C0
 * Callers:
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140B17B50 (KeCheckedKernelInitialize.c)
 *     KeFreeInitializationCode @ 0x140B17BF4 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140B17C30 (KiFilterFiberContext.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     ExpLicenseWatchInitWorker @ 0x140B6791C (ExpLicenseWatchInitWorker.c)
 *     KeInitAmd64SpecificState @ 0x140B72968 (KeInitAmd64SpecificState.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140340618 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
