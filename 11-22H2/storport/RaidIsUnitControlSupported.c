/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C00046D0
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C00011C0 (StorPortUnitIdleCondition.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C00013E0 (StorPortUnitActiveConditionStep1.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012048 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0012154 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C00165A8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001D0FC (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021794 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0021E18 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0021FB0 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0024ED0 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0024F60 (StorPortUnitIdleState.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C004D5CC (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C004D6A8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C004E820 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C004ECF0 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C004F350 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C004F6F0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C005CEC0 (RaUnitAdapterRemove.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00A1444 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C00A15D8 (RaUnitStartDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00A2EDC (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1C00A9E70 (RaUnitStorageGetInternalDataIoctl.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C0017914 (RaCallMiniportUnitControl.c)
 *     RaMiniportIsFeatureSupported @ 0x1C0022074 (RaMiniportIsFeatureSupported.c)
 */

char __fastcall RaidIsUnitControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rsi
  __int64 v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // rcx
  _DWORD *v9; // r9
  __int64 v10; // rcx
  _DWORD *v11; // r9

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = a2;
  if ( **(_DWORD **)(v2 + 568) == 208 )
  {
    if ( (*(_BYTE *)(v2 + 584) & 8) != 0 )
      return *(_BYTE *)(v4 + v2 + 592);
    *(_QWORD *)(v2 + 592) = 0LL;
    *(_QWORD *)(v2 + 600) = 0LL;
    *(_DWORD *)(v2 + 588) = 12;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v2 + 336, 0LL) )
      *v7 = 13;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v6, 1LL) )
      *v9 = 14;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v8, 4LL) )
      *v11 = 15;
    if ( (int)RaCallMiniportUnitControl(v10, 0LL, v11) >= 0 )
    {
      *(_BYTE *)(v2 + 584) |= 8u;
      return *(_BYTE *)(v4 + v2 + 592);
    }
  }
  return v3;
}
