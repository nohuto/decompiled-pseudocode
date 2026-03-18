/*
 * XREFs of PspUnlockJob @ 0x1406A3BFC
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     PspJobNotificationWorker @ 0x1406821C0 (PspJobNotificationWorker.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     PspSendProcessNotificationToJobChain @ 0x14069F410 (PspSendProcessNotificationToJobChain.c)
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406A07B4 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspGetNextJobProcess @ 0x1406A0D90 (PspGetNextJobProcess.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406A0E9C (PspQueryJobHierarchyProcessIdList.c)
 *     PspLockRootJobFromProcess @ 0x1406A109C (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406A2AC0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     PspGetNextChildJob @ 0x1406A35B8 (PspGetNextChildJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406A3680 (PspEnforceLimitsJobPostCallback.c)
 *     PspChargeJobWakeCounter @ 0x1406A3A44 (PspChargeJobWakeCounter.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406A3CD4 (PspCallJobHierarchyCallbacks.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PsInsertPermanentSiloContextEx @ 0x14077CA5C (PsInsertPermanentSiloContextEx.c)
 *     PspSetJobIoRateControl @ 0x1407D809C (PspSetJobIoRateControl.c)
 *     PspJobClose @ 0x1407DD250 (PspJobClose.c)
 *     PspCreateSilo @ 0x1407E6408 (PspCreateSilo.c)
 *     PspNotificationPacketCallback @ 0x1407E6BA0 (PspNotificationPacketCallback.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ACAF0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACBE4 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409B2630 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x1409B27DC (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x1409B2FF4 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery();
  }
}
