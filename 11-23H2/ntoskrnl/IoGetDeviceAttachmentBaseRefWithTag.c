/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x140302D18
 * Callers:
 *     PopAllocateIrp @ 0x14028F6C4 (PopAllocateIrp.c)
 *     FsRtlReleaseFileForModWrite @ 0x1402F4D0C (FsRtlReleaseFileForModWrite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140302D80 (IoGetDeviceAttachmentBaseRef.c)
 *     PoStoreRequester @ 0x14032D1D4 (PoStoreRequester.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14034A23C (FsRtlAcquireFileForModWriteEx.c)
 *     HalpIommuGetDeviceId @ 0x140390E6C (HalpIommuGetDeviceId.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403A1A34 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403A1B5C (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1405615C8 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x140584020 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x140592E5C (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalStateChange @ 0x140595114 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x14059523C (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140595434 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140595568 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140595CC8 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140595EE8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14059623C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140596410 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140596598 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405966C0 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x1405CB784 (SmKmEtwAppendObjectName.c)
 *     IopQueryInterfaceRecurseUp @ 0x140828AD0 (IopQueryInterfaceRecurseUp.c)
 *     PopFxRegisterDevice @ 0x14083681C (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140848248 (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1408483CC (PopDiagTraceThermalCoolingMode.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x1408540E0 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PiControlGetDeviceStack @ 0x140855D60 (PiControlGetDeviceStack.c)
 *     PopDiagTraceThermalRequest @ 0x140860D34 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14086182C (PopDiagTraceCoolingExtension.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x140983CFC (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x14098ADE0 (PoThermalCounterSetCallback.c)
 *     PopDiagTraceActiveCooling @ 0x14098C498 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x140990100 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1409923D8 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1409924CC (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1409A0E48 (PopSqmThermalCriticalEvent.c)
 *     PopNotifyDevice @ 0x140AA713C (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140B39DF0 (IopMarkBootPartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140302CAC (IopGetDeviceAttachmentBase.c)
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
