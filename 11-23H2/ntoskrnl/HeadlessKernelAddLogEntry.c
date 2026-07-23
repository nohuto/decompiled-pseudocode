/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x14032287C
 * Callers:
 *     PnpBootDeviceWait @ 0x140374CEC (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x140AEAA40 (HdlspKernelAddLogEntry.c)
 */

PKSPIN_LOCK HeadlessKernelAddLogEntry()
{
  PKSPIN_LOCK result; // rax

  result = HeadlessGlobals;
  if ( HeadlessGlobals )
  {
    if ( HeadlessGlobals[1] )
      return (PKSPIN_LOCK)HdlspKernelAddLogEntry();
  }
  return result;
}
