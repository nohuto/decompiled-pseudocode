/*
 * XREFs of ExQueryWnfStateData @ 0x1407E2490
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1403B5410 (PopWnfAirplaneModeCallback.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x14041A200 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x140587770 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x140587870 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x14058DFF0 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1407E2400 (PopWnfMixedRealityCallback.c)
 *     PopWnfAudioCallback @ 0x1408556A0 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140863000 (PopWnfSprActiveSessionChangeCallback.c)
 *     SshpWnfCallback @ 0x140878AE0 (SshpWnfCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x1409438C0 (VslpConnectedStandbyWnfCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x140952370 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140984810 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1409848B0 (PopWnfUserAwayPredictionCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x140996310 (PopUsbErrorWNFNotificationCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140996C30 (PopNetWnfLowPowerEpochCallback.c)
 *     PopEsInStandbyEvaluate @ 0x1409985B0 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140998740 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopAdaptiveWnfCallback @ 0x14099BC20 (PopAdaptiveWnfCallback.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1409AC050 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExpWnfReadStateData @ 0x140713AE8 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1407E2538 (ExpWnfAcquireSubscriptionNameInstance.c)
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
