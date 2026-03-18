/*
 * XREFs of HalpPostPnpInitialize @ 0x140837440
 * Callers:
 *     HalpAddDevice @ 0x140836770 (HalpAddDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     HalpInitializeSecondaryInterruptServices @ 0x140B608B8 (HalpInitializeSecondaryInterruptServices.c)
 */

NTSTATUS HalpPostPnpInitialize()
{
  NTSTATUS result; // eax
  PVOID NotificationEntry; // [rsp+50h] [rbp+8h] BYREF

  NotificationEntry = 0LL;
  HalpInitializeSecondaryInterruptServices();
  KeInitializeEvent(&HalpDynamicDeviceInterfaceLock, SynchronizationEvent, 1u);
  result = IoRegisterPlugPlayNotification(
             EventCategoryDeviceInterfaceChange,
             1u,
             HalpDynamicDeviceInterfaces,
             HalpDriverObject,
             HalpDynamicDeviceInterfaceNotification,
             0LL,
             &NotificationEntry);
  HalpDynamicDevicesReady = 1;
  return result;
}
