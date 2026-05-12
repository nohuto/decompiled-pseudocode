/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C000C930
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C000C2D0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C000C470 (StorPortUnitIdleCondition.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0016C00 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C001703C (RaidUnitSendPowerToMiniport.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017AEC (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C001B258 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001E9DC (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001ED90 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C0022470 (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0022760 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0022AAC (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0024F72 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0025000 (StorPortUnitIdleState.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C004A258 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C004A334 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C004AE40 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C004B300 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C004B990 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C004BD30 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C0050920 (RaUnitAdapterRemove.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0087538 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C0087C34 (RaUnitStartDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0088388 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1C008F530 (RaUnitStorageGetInternalDataIoctl.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C001C0A8 (RaCallMiniportUnitControl.c)
 *     RaMiniportIsFeatureSupported @ 0x1C0022BC8 (RaMiniportIsFeatureSupported.c)
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
