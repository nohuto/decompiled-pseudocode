/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1407DB000
 * Callers:
 *     CmFcpSubscribeScmWnfStateChange @ 0x14041A1AC (CmFcpSubscribeScmWnfStateChange.c)
 *     PopEnsureErratumSubscribed @ 0x14058DF24 (PopEnsureErratumSubscribed.c)
 *     PoInitHiberServices @ 0x140801DB8 (PoInitHiberServices.c)
 *     PnpBootPhaseComplete @ 0x1408113E0 (PnpBootPhaseComplete.c)
 *     TtmInit @ 0x140821184 (TtmInit.c)
 *     EtwpInitializeSiloState @ 0x14083B664 (EtwpInitializeSiloState.c)
 *     IopInitializeDumpPolicySettings @ 0x140861584 (IopInitializeDumpPolicySettings.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x1408616E4 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     PopSetupMixedRealitytNotification @ 0x1408646A8 (PopSetupMixedRealitytNotification.c)
 *     WheapInitWnfCallbacks @ 0x140864724 (WheapInitWnfCallbacks.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140865AF8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140865B34 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x140865B70 (PopSetupMobileHotspotNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140865BAC (PopSetupFullScrenVideoNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140865BE8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAudioEventNotification @ 0x140865C24 (PopSetupAudioEventNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140865C60 (PopSetupAirplaneModeNotification.c)
 *     PopEsWorker @ 0x1408738D0 (PopEsWorker.c)
 *     RtlpCtContextInit @ 0x1409C2318 (RtlpCtContextInit.c)
 *     PopInitializeAdpm @ 0x140B35EB4 (PopInitializeAdpm.c)
 *     PiUEventInit @ 0x140B3F6C4 (PiUEventInit.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     PopNetInitialize @ 0x140B51D9C (PopNetInitialize.c)
 *     PopEsInit @ 0x140B51F88 (PopEsInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140B5226C (PopBatteryInitPhaseTwo.c)
 *     SshpSubscribeCallbacks @ 0x140B55460 (SshpSubscribeCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140712AD4 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0LL, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
