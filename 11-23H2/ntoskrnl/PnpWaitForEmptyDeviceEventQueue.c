/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x1408110B8
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140B3C748 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
