/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x140679034 (PspFreezeJobTree.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140679480 (PspAddSchedulingGroupToJobChain.c)
 *     PspEstablishJobHierarchy @ 0x1406822EC (PspEstablishJobHierarchy.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140685304 (PspQueryJobHierarchyAccountingInformation.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140687654 (PspQueryJobHierarchyProcessIdList.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1406954C8 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetJobIoAttribution @ 0x1406D4A68 (PspSetJobIoAttribution.c)
 *     PspIsSetJobIoAttribution @ 0x1406D4C5C (PspIsSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x1406D4CBC (PspRemoveIoAttribution.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406D78E0 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSetBackgroundJobTree @ 0x1406E0138 (PspSetBackgroundJobTree.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406E6570 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspEnforceLimits @ 0x1407B67A0 (PspEnforceLimits.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ACBA0 (PspTerminateSiloSubsystemProcesses.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409B0400 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x1409B062C (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1409B06C4 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetJobRateControl @ 0x1409B0A5C (PspSetJobRateControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     PspGetNextChildJob @ 0x1406FF7C4 (PspGetNextChildJob.c)
 *     PspUnlockJob @ 0x1406FFE90 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406FFEFC (PspLockJobShared.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406FFF24 (PspCallJobHierarchyCallbacks.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(_QWORD *Object, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // edi
  int v8; // eax
  unsigned int v9; // r13d
  _QWORD *v10; // rbx
  int v11; // r15d
  _QWORD *NextChildJob; // rsi
  _QWORD *v13; // r14
  __int64 v14; // r14
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp+8h]
  int v17; // [rsp+88h] [rbp+10h]
  int v18; // [rsp+90h] [rbp+18h]
  int v19; // [rsp+98h] [rbp+20h]
  int v20; // [rsp+A8h] [rbp+30h]

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v6 = a6;
  v8 = a6 | 1;
  v9 = a6 & 0xFFFFFFFE;
  v10 = Object;
  if ( (a6 & 8) != 0 )
    v9 = a6 | 1;
  v11 = 0;
  v20 = v9;
  if ( (v6 & 8) != 0 )
    v6 = v8;
  while ( 1 )
  {
    if ( (v6 & 2) == 0 )
    {
      v11 = PspCallJobHierarchyCallbacks((_DWORD)v10, a2, a3, a4, a5, v6);
      if ( v11 < 0 )
        goto LABEL_25;
      v6 = v9;
    }
    CurrentThread = KeGetCurrentThread();
    NextChildJob = 0LL;
    PspLockJobShared(v10, CurrentThread);
    v13 = (_QWORD *)v10[156];
    if ( v13 != v10 + 156 )
    {
      while ( !ObReferenceObjectSafeWithTag((__int64)(v13 - 154)) )
      {
        v13 = (_QWORD *)*v13;
        if ( v13 == v10 + 156 )
          goto LABEL_20;
      }
      NextChildJob = v13 - 154;
LABEL_20:
      v9 = v20;
    }
    PspUnlockJob(v10, CurrentThread);
    if ( !NextChildJob )
    {
      v14 = v10[158];
      if ( v10 != Object )
        break;
    }
LABEL_13:
    v10 = NextChildJob;
    if ( !NextChildJob )
    {
      if ( (v6 & 2) != 0 )
        return (unsigned int)PspCallJobHierarchyCallbacks((_DWORD)Object, v17, v18, v19, a5, v6);
      return (unsigned int)v11;
    }
    a4 = v19;
    a3 = v18;
    a2 = v17;
  }
  while ( 1 )
  {
    if ( (v6 & 2) != 0 )
    {
      v11 = PspCallJobHierarchyCallbacks((_DWORD)v10, v17, v18, v19, a5, v9);
      if ( v11 < 0 )
        break;
    }
    NextChildJob = PspGetNextChildJob(v14, v10);
    if ( !NextChildJob )
    {
      v10 = (_QWORD *)v14;
      v14 = *(_QWORD *)(v14 + 1264);
      if ( v10 != Object )
        continue;
    }
    goto LABEL_13;
  }
LABEL_25:
  if ( v10 )
  {
    while ( v10 != Object )
    {
      ObfDereferenceObjectWithTag(v10, 0x6E457350u);
      v10 = (_QWORD *)v10[158];
    }
  }
  return (unsigned int)v11;
}
