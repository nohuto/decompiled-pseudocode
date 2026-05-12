/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C00075D8
 * Callers:
 *     RaidAdapterStopOnPowerdown @ 0x1C0010E90 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0010EF0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0010FC0 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterStop @ 0x1C0011178 (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C00111C8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterRestartAdapter @ 0x1C001142C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterRescanBus @ 0x1C0015C98 (RaidAdapterRescanBus.c)
 *     StorPortAdapterActiveCondition @ 0x1C001F5B0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C001F670 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001F708 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterDeviceReset @ 0x1C003525C (RaidAdapterDeviceReset.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C00384E4 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 *     RaidCoalescingCallback @ 0x1C003A560 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C003D090 (RaidPowerSettingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C004BCB4 (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C004BD3C (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C004BDC0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C004BF18 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterDirectedPowerDown @ 0x1C004D9D0 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C004DD30 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterIdleState @ 0x1C004E010 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C004E280 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C004E350 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C004E610 (StorPortAdapterPowerRequiredStep1.c)
 *     StorAdapterNeedsUpdate @ 0x1C0067280 (StorAdapterNeedsUpdate.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x1C006734C (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterHealthEvents @ 0x1C0067450 (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterOperationalEvents @ 0x1C00674E0 (StorEnableAdapterOperationalEvents.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C009FD44 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00A6210 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1C00A72DC (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x1C00A7608 (RaidGetStorageAdapterFruIdProperty.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 *     RaMiniportIsFeatureSupported @ 0x1C0022074 (RaMiniportIsFeatureSupported.c)
 */

__int64 __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // rcx
  _DWORD *v9; // r9
  __int64 v10; // rcx
  _DWORD *v11; // r9
  __int64 v12; // rcx
  _DWORD *v13; // r9
  __int64 v14; // rcx
  _DWORD *v15; // r9

  v2 = a1 + 336;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 584) & 0x10) != 0 )
    return *(unsigned __int8 *)(v3 + v2 + 276);
  *(_OWORD *)(a1 + 608) = 0LL;
  *(_OWORD *)(a1 + 624) = 0LL;
  *(_DWORD *)(a1 + 608) = 19;
  v4 = 0;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(a1 + 336, 2LL) )
    *v7 = 20;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v6, 3LL) )
    *v9 = 21;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v8, 5LL) )
    *v11 = 22;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v10, 6LL) )
    *v13 = 23;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v12, 7LL) )
    *v15 = 24;
  if ( (int)RaCallMiniportAdapterControl(v14, 0LL, v15) >= 0 )
  {
    *(_BYTE *)(v2 + 248) |= 0x10u;
    return *(unsigned __int8 *)(v3 + v2 + 276);
  }
  return v4;
}
