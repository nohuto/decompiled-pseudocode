/*
 * XREFs of PnpSynchronizeDeviceEventQueue @ 0x1406EA5EC
 * Callers:
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140808CB4 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PnpInsertNoopEvent @ 0x140768194 (PnpInsertNoopEvent.c)
 */

NTSTATUS PnpSynchronizeDeviceEventQueue()
{
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = PnpInsertNoopEvent(&Event, &v2);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return result;
}
