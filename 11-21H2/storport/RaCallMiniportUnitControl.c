/*
 * XREFs of RaCallMiniportUnitControl @ 0x1C001C0A8
 * Callers:
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C001703C (RaidUnitSendPowerToMiniport.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017AEC (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C001B258 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001E9DC (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001ED90 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C0022470 (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0022760 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0022AAC (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0024F72 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C004A258 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C004A334 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaUnitAdapterRemove @ 0x1C0050920 (RaUnitAdapterRemove.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0087538 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C0087C34 (RaUnitStartDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0088388 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1C008F530 (RaUnitStorageGetInternalDataIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportUnitControl(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 200LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
