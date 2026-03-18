/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x140683BA8 (PspAddSchedulingGroupToJobChain.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     PspEstablishJobHierarchy @ 0x14069F8F4 (PspEstablishJobHierarchy.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406A0E9C (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406A2AC0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimits @ 0x1406A3240 (PspEnforceLimits.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1407D02DC (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetJobIoAttribution @ 0x1407D82E4 (PspSetJobIoAttribution.c)
 *     PspIsSetJobIoAttribution @ 0x1407D84D8 (PspIsSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x1407D85E0 (PspRemoveIoAttribution.c)
 *     PspFreezeJobTree @ 0x1407DA0C8 (PspFreezeJobTree.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1407DD334 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSetBackgroundJobTree @ 0x1407E5838 (PspSetBackgroundJobTree.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADAC0 (PspTerminateSiloSubsystemProcesses.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1409B21B8 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409B2630 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x1409B285C (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1409B28F4 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1409B2A04 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobRateControl @ 0x1409B2DDC (PspSetJobRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1409B32C0 (PspSetPagePriorityLimitJobTree.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     PspGetNextChildJob @ 0x1406A35B8 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406A3CD4 (PspCallJobHierarchyCallbacks.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(_QWORD *Object, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // edi
  unsigned int v8; // r12d
  int v9; // r14d
  int v10; // r15d
  _QWORD *v12; // rbx
  int v13; // ebp
  __int64 NextChildJob; // rax
  _QWORD *v15; // r14

  v6 = a6;
  v8 = a6 & 0xFFFFFFFE;
  v9 = a3;
  v10 = a2;
  if ( (a6 & 8) != 0 )
    v8 = a6 | 1;
  v12 = Object;
  v13 = 0;
  if ( (a6 & 8) != 0 )
    v6 = a6 | 1;
  while ( 1 )
  {
    if ( (v6 & 2) == 0 )
    {
      v13 = PspCallJobHierarchyCallbacks((_DWORD)v12, v10, v9, a4, a5, v6);
      if ( v13 < 0 )
        goto LABEL_20;
      v6 = v8;
    }
    NextChildJob = PspGetNextChildJob(v12, 0LL);
    if ( !NextChildJob )
      break;
LABEL_14:
    v12 = (_QWORD *)NextChildJob;
    if ( !NextChildJob )
    {
      if ( (v6 & 2) != 0 )
        return (unsigned int)PspCallJobHierarchyCallbacks((_DWORD)Object, v10, v9, a4, a5, v6);
      return (unsigned int)v13;
    }
  }
  v15 = (_QWORD *)v12[161];
  if ( v12 == Object )
  {
LABEL_13:
    v9 = a3;
    goto LABEL_14;
  }
  while ( 1 )
  {
    if ( (v6 & 2) != 0 )
    {
      v13 = PspCallJobHierarchyCallbacks((_DWORD)v12, a2, a3, a4, a5, v8);
      if ( v13 < 0 )
        break;
    }
    NextChildJob = PspGetNextChildJob(v15, v12);
    if ( !NextChildJob )
    {
      v12 = v15;
      v15 = (_QWORD *)v15[161];
      if ( v12 != Object )
        continue;
    }
    v10 = a2;
    goto LABEL_13;
  }
LABEL_20:
  if ( v12 )
  {
    while ( v12 != Object )
    {
      ObfDereferenceObjectWithTag(v12, 0x6E457350u);
      v12 = (_QWORD *)v12[161];
    }
  }
  return (unsigned int)v13;
}
