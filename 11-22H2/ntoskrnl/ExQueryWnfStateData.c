/*
 * XREFs of ExQueryWnfStateData @ 0x1407E2740
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1403B4BA0 (PopWnfAirplaneModeCallback.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x1404197C0 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x140587310 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x140587410 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x14058DB90 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1407E26B0 (PopWnfMixedRealityCallback.c)
 *     PopWnfAudioCallback @ 0x1408562B0 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140862FE0 (PopWnfSprActiveSessionChangeCallback.c)
 *     SshpWnfCallback @ 0x140878D70 (SshpWnfCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140943770 (VslpConnectedStandbyWnfCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x140952220 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1409846C0 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x140984760 (PopWnfUserAwayPredictionCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1409961C0 (PopUsbErrorWNFNotificationCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140996AE0 (PopNetWnfLowPowerEpochCallback.c)
 *     PopEsInStandbyEvaluate @ 0x140998460 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1409985F0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopAdaptiveWnfCallback @ 0x14099BAD0 (PopAdaptiveWnfCallback.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1409ABF00 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ExpWnfReadStateData @ 0x140713988 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1407E27E8 (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  int StateData; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  v9 = (struct _EX_RUNDOWN_REF *)v8;
  if ( v8 )
  {
    StateData = ExpWnfReadStateData(v8, a2, a3, *a4, a4);
    if ( StateData >= 0 )
      StateData = 0;
    ExReleaseRundownProtection_0(v9 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)StateData;
}
