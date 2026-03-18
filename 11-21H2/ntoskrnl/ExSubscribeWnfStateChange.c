/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1406D1FA0
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x1405CFCA4 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x1406D1E90 (PopEsWorker.c)
 *     PnpBootPhaseComplete @ 0x140827E8C (PnpBootPhaseComplete.c)
 *     PoInitHiberServices @ 0x1408288D4 (PoInitHiberServices.c)
 *     EtwpInitializeSiloState @ 0x140851114 (EtwpInitializeSiloState.c)
 *     IopInitializeDumpPolicySettings @ 0x140860A10 (IopInitializeDumpPolicySettings.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x140860B90 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     TtmInit @ 0x1408633F0 (TtmInit.c)
 *     PopSetupMixedRealitytNotification @ 0x140863F58 (PopSetupMixedRealitytNotification.c)
 *     WheapInitWnfCallbacks @ 0x140863FD4 (WheapInitWnfCallbacks.c)
 *     PopSetupMobileHotspotNotification @ 0x140864DD4 (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140864E10 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140864E4C (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140864E88 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140864EC4 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140864F00 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupAudioEventNotification @ 0x140864F3C (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x1409BE9D8 (RtlpCtContextInit.c)
 *     PopInitializeAdpm @ 0x140AF33B0 (PopInitializeAdpm.c)
 *     SshpSubscribeCallbacks @ 0x140B019D0 (SshpSubscribeCallbacks.c)
 *     PopBatteryInitPhaseTwo @ 0x140B01A8C (PopBatteryInitPhaseTwo.c)
 *     PopNetInitialize @ 0x140B02560 (PopNetInitialize.c)
 *     PopEsInit @ 0x140B03434 (PopEsInit.c)
 *     PiUEventInit @ 0x140B1BA48 (PiUEventInit.c)
 *     VslRegisterIumPowerCallbacks @ 0x140B31688 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14079982C (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
