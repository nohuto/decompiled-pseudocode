/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180040AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18000CDF0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180010BE4 (-RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAG.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x1800116E8 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18002B070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18002D614 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18004051C (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z @ 0x180040900 (-RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180040EE4 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180040F38 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x180056508 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008C95C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(PVOID Parameter)
{
  __int64 v2; // r12
  DWORD TickCount; // eax
  __int64 v4; // rdx
  char v5; // r15
  int v6; // edx
  int v7; // ebp
  int i; // eax
  int v9; // ebx
  int v10; // ebx
  DWORD v11; // edi
  __int64 v12; // rbx
  DWORD v13; // esi
  _QWORD *Value; // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rcx
  bool v19; // zf
  DWORD v20; // edi
  _QWORD *v21; // rbx
  int v22; // eax
  int v23; // edx
  __int64 *v24; // rax
  __int64 v25; // rcx
  struct _RM_PARTITION *v26; // rbx
  int v28; // ebx
  DWORD v29; // edi
  unsigned int *v30; // [rsp+30h] [rbp-188h] BYREF
  unsigned __int8 v31; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int8 v32; // [rsp+39h] [rbp-17Fh]
  _QWORD v33[16]; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v34[144]; // [rsp+D0h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+160h] [rbp-58h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v34);
  v2 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
  TickCount = GetTickCount();
  *((_DWORD *)Parameter + 20) = TickCount;
  *((_DWORD *)Parameter + 22) = TickCount;
  RmpAcquireGlobalLock();
  LOBYTE(v4) = 4;
  RmpMemoryMonitorSetTimerIfEnabled(Parameter, v4);
  RmpReleaseGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    *(struct _RM_PARTITION **)Parameter,
    (struct _RM_POLICY *)(v2 + 400),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v33,
    0LL);
  v5 = 0;
  while ( 1 )
  {
    v6 = 7;
    if ( (unsigned __int8)v5 >= 4u )
      v6 = 39;
    RmpMemoryMonitorWaitForEvents((HANDLE *)Parameter, v6, 0xFFFFFFFF, (DWORD *)&v30);
    v7 = (int)v30;
    if ( (_DWORD)v30 == 2 )
      break;
    for ( i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep((__int64 *)Parameter, v33, &v31);
          i != 4;
          i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep((__int64 *)Parameter, v33, &v31) )
    {
      if ( i == 3 )
        break;
      v9 = 0;
      if ( i == 2 )
        goto LABEL_8;
    }
    v9 = i;
LABEL_8:
    RmpMemoryMonitorUpdateMemoryUsageMetrics(
      (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
      (struct _RM_RESOURCE_USAGE_STATS *)&v31);
    v5 = v32;
    if ( v32 <= v31 )
      v5 = v31;
    if ( v9 == 4 )
      break;
    if ( v7 != 1 && v9 == 3 && (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DB1E0,
        (unsigned __int8 *)dword_1800C61A3,
        0LL,
        0LL,
        2u,
        &v35);
    if ( *(_DWORD *)(v2 + 496) )
    {
      v28 = *((_DWORD *)Parameter + 20);
      v29 = *((_DWORD *)Parameter + 19);
      if ( GetTickCount() - v28 >= v29 )
      {
        RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
          (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v33);
        *((_DWORD *)Parameter + 20) = GetTickCount();
      }
    }
    if ( *(_DWORD *)(v2 + 500) )
    {
      v10 = *((_DWORD *)Parameter + 22);
      v11 = *((_DWORD *)Parameter + 21);
      if ( GetTickCount() - v10 >= v11
        && !(unsigned int)RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy((__int64 *)Parameter, v33) )
      {
        *((_DWORD *)Parameter + 22) = GetTickCount();
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 3536LL);
    if ( v12 )
    {
      v13 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v13) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800DC590 = GetCurrentThreadId();
      v15 = *(_DWORD *)(v12 + 160);
      if ( (v15 & 3) == 0 )
      {
        v16 = *(_QWORD *)(v12 + 144);
        *(_DWORD *)(v12 + 160) = v15 | 1;
        TpPostWork(v16);
      }
      dword_1800DC590 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v17 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v18 = *v17;
        if ( (*v17 & 1) == 0 )
          __int2c();
        v19 = v17[1]-- == 1;
        if ( v19 )
          *v17 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
      }
    }
    if ( v7 == 1 || RmpMemoryMonitorCheckEvent(*((void **)Parameter + 2)) )
    {
      v20 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v21 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v20) )
          __int2c();
        *v21 |= 1uLL;
        ++v21[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800DC590 = GetCurrentThreadId();
      v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 656LL);
      if ( (v22 & 1) == 0 )
      {
        v23 = 2;
        if ( (v22 & 2) == 0 )
          v23 = 1;
        RmpMemoryMonitorSetTimer((__int64 *)Parameter, v23, v5);
      }
      dword_1800DC590 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v24 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v25 = *v24;
        if ( (*v24 & 1) == 0 )
          __int2c();
        v19 = v24[1]-- == 1;
        if ( v19 )
          *v24 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
      }
    }
  }
  TpSetTimer(*((_QWORD *)Parameter + 8), 0LL, 0LL, 0LL);
  TpWaitForTimer(*((_QWORD *)Parameter + 8), 1LL);
  v26 = *(struct _RM_PARTITION **)Parameter;
  RmpPartitionTableRemovePartition(
    (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 312LL),
    *(HANDLE **)Parameter,
    &v30);
  RmpPartitionCleanup(v26);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v26);
  CempLockTrackerClearForThread(HampLockTrackerId);
  _InterlockedDecrement((volatile signed __int32 *)v30);
  RtlWakeAddressAll(v30);
  return 0LL;
}
