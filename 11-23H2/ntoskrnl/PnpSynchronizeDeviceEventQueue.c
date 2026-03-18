/*
 * XREFs of PnpSynchronizeDeviceEventQueue @ 0x1408753CC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB690 (PipProcessDevNodeTree.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096B9B0 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     PnpInsertNoopEvent @ 0x140685ED4 (PnpInsertNoopEvent.c)
 */

NTSTATUS PnpSynchronizeDeviceEventQueue()
{
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = PnpInsertNoopEvent((__int64)&Event, (__int64)&v2);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return result;
}
