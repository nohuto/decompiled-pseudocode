/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C000C76C
 * Callers:
 *     StorPortAdapterIdleState @ 0x1C000C580 (StorPortAdapterIdleState.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C000C6A0 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0014E10 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterStop @ 0x1C0014FAC (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C0014FFC (RaidAdapterStopAdapter.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0015084 (RaidAdapterSendPowerToMiniport.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C00152F0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     RaidAdapterRescanBus @ 0x1C001A8B0 (RaidAdapterRescanBus.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C001DC30 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterRestartAdapter @ 0x1C001E07C (RaidAdapterRestartAdapter.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C001E3A0 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C00370BC (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C0038F90 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C003B2A0 (RaidPowerSettingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C0048CD8 (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0048D60 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0048EB8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterDirectedPowerDown @ 0x1C004A660 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C004A9D0 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterPowerControl @ 0x1C004AD50 (StorPortAdapterPowerControl.c)
 *     StorAdapterNeedsUpdate @ 0x1C005A2E0 (StorAdapterNeedsUpdate.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x1C005A3A8 (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterHealthEvents @ 0x1C005A4AC (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterOperationalEvents @ 0x1C005A53C (StorEnableAdapterOperationalEvents.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0084E48 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C008C490 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1C008CD90 (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C008CE90 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x1C008D0BC (RaidGetStorageAdapterFruIdProperty.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000C724 (RaCallMiniportAdapterControl.c)
 *     RaMiniportIsFeatureSupported @ 0x1C0022BC8 (RaMiniportIsFeatureSupported.c)
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

  v2 = a1 + 336;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 584) & 0x10) != 0 )
    return *(unsigned __int8 *)(v3 + v2 + 276);
  v4 = 0;
  *(_QWORD *)(a1 + 612) = 0LL;
  *(_QWORD *)(a1 + 620) = 0LL;
  *(_QWORD *)(a1 + 628) = 0LL;
  *(_DWORD *)(a1 + 608) = 19;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(a1 + 336, 2LL) )
    *v7 = 20;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v6, 3LL) )
    *v9 = 21;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v8, 5LL) )
    *v11 = 22;
  if ( (int)RaCallMiniportAdapterControl(v10) >= 0 )
  {
    *(_BYTE *)(v2 + 248) |= 0x10u;
    return *(unsigned __int8 *)(v3 + v2 + 276);
  }
  return v4;
}
