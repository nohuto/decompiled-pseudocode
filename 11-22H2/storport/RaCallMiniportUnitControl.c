/*
 * XREFs of RaCallMiniportUnitControl @ 0x1C0017914
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C00011C0 (StorPortUnitIdleCondition.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C00013E0 (StorPortUnitActiveConditionStep1.c)
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0012154 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C00165A8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001D0FC (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021794 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0021E18 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0021FB0 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0024ED0 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C004D5CC (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C004D6A8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaUnitAdapterRemove @ 0x1C005CEC0 (RaUnitAdapterRemove.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00A1444 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C00A15D8 (RaUnitStartDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00A2EDC (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1C00A9E70 (RaUnitStorageGetInternalDataIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
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
