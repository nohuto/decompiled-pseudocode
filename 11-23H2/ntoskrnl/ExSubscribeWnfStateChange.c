/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1407DAD30
 * Callers:
 *     CmFcpSubscribeScmWnfStateChange @ 0x140419E1C (CmFcpSubscribeScmWnfStateChange.c)
 *     PopEnsureErratumSubscribed @ 0x14058DA34 (PopEnsureErratumSubscribed.c)
 *     PoInitHiberServices @ 0x140801AE8 (PoInitHiberServices.c)
 *     PnpBootPhaseComplete @ 0x140811110 (PnpBootPhaseComplete.c)
 *     TtmInit @ 0x140820E84 (TtmInit.c)
 *     EtwpInitializeSiloState @ 0x14083B364 (EtwpInitializeSiloState.c)
 *     IopInitializeDumpPolicySettings @ 0x140861344 (IopInitializeDumpPolicySettings.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x1408614A4 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     PopSetupMixedRealitytNotification @ 0x140864468 (PopSetupMixedRealitytNotification.c)
 *     WheapInitWnfCallbacks @ 0x1408644E4 (WheapInitWnfCallbacks.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1408658B8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1408658F4 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x140865930 (PopSetupMobileHotspotNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x14086596C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1408659A8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAudioEventNotification @ 0x1408659E4 (PopSetupAudioEventNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140865A20 (PopSetupAirplaneModeNotification.c)
 *     PopEsWorker @ 0x140873690 (PopEsWorker.c)
 *     RtlpCtContextInit @ 0x1409C2118 (RtlpCtContextInit.c)
 *     PopInitializeAdpm @ 0x140B35EB4 (PopInitializeAdpm.c)
 *     PiUEventInit @ 0x140B3F6C4 (PiUEventInit.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     PopNetInitialize @ 0x140B51D9C (PopNetInitialize.c)
 *     PopEsInit @ 0x140B51F88 (PopEsInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140B5226C (PopBatteryInitPhaseTwo.c)
 *     SshpSubscribeCallbacks @ 0x140B55460 (SshpSubscribeCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1407128C4 (ExpWnfSubscribeWnfStateChange.c)
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
