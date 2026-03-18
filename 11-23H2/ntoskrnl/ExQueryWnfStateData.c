/*
 * XREFs of ExQueryWnfStateData @ 0x1407E21C0
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1403B5230 (PopWnfAirplaneModeCallback.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x140419E70 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x140587280 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x140587380 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x14058DB00 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1407E2130 (PopWnfMixedRealityCallback.c)
 *     PopWnfAudioCallback @ 0x1408553A0 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140862DC0 (PopWnfSprActiveSessionChangeCallback.c)
 *     SshpWnfCallback @ 0x1408788A0 (SshpWnfCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x1409436C0 (VslpConnectedStandbyWnfCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x140952170 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140984610 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1409846B0 (PopWnfUserAwayPredictionCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x140996110 (PopUsbErrorWNFNotificationCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140996A30 (PopNetWnfLowPowerEpochCallback.c)
 *     PopEsInStandbyEvaluate @ 0x1409983B0 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140998540 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopAdaptiveWnfCallback @ 0x14099BA20 (PopAdaptiveWnfCallback.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1409ABE50 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     ExpWnfReadStateData @ 0x1407138D8 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1407E2268 (ExpWnfAcquireSubscriptionNameInstance.c)
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
