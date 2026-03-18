/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x140302A88
 * Callers:
 *     PopAllocateIrp @ 0x14028F434 (PopAllocateIrp.c)
 *     FsRtlReleaseFileForModWrite @ 0x1402F4A7C (FsRtlReleaseFileForModWrite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140302AF0 (IoGetDeviceAttachmentBaseRef.c)
 *     PoStoreRequester @ 0x14032CF44 (PoStoreRequester.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14034A0A4 (FsRtlAcquireFileForModWriteEx.c)
 *     HalpIommuGetDeviceId @ 0x140390C8C (HalpIommuGetDeviceId.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403A1854 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403A197C (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140560F08 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x140583B30 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x14059296C (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalStateChange @ 0x140594C24 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x140594D4C (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140594F44 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140595078 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1405957D8 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1405959F8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140595D4C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140595F20 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405960A8 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405961D0 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x1405CB214 (SmKmEtwAppendObjectName.c)
 *     IopQueryInterfaceRecurseUp @ 0x1408287D0 (IopQueryInterfaceRecurseUp.c)
 *     PopFxRegisterDevice @ 0x14083651C (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140847F48 (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1408480CC (PopDiagTraceThermalCoolingMode.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x140853DE0 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PiControlGetDeviceStack @ 0x140855A60 (PiControlGetDeviceStack.c)
 *     PopDiagTraceThermalRequest @ 0x140860AF4 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1408615EC (PopDiagTraceCoolingExtension.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x140983AFC (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x14098ABE0 (PoThermalCounterSetCallback.c)
 *     PopDiagTraceActiveCooling @ 0x14098C298 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x14098FF00 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1409921D8 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1409922CC (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1409A0C48 (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x140AA72CC (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140B39DF0 (IopMarkBootPartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0760 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140302A1C (IopGetDeviceAttachmentBase.c)
 */

void *__fastcall IoGetDeviceAttachmentBaseRefWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // di
  void *DeviceAttachmentBase; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (void *)IopGetDeviceAttachmentBase(a1);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, a2);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return DeviceAttachmentBase;
}
