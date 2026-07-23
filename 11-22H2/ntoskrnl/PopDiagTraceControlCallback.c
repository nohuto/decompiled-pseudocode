/*
 * XREFs of PopDiagTraceControlCallback @ 0x140862C00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14032C2CC (PopDiagTraceSystemLatencyUpdate.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PopDiagTraceFxRundown @ 0x140588968 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x140590104 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140592754 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopPlTraceLogPowerPlane @ 0x1405A1AD0 (PopPlTraceLogPowerPlane.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1407A7E10 (PopDiagTracePowerRequestCreate.c)
 *     PopDiagTracePowerSetting @ 0x1407DECB0 (PopDiagTracePowerSetting.c)
 *     PopTransitionTelemetryOsState @ 0x1408037CC (PopTransitionTelemetryOsState.c)
 *     PopLoggingInformation @ 0x140980E94 (PopLoggingInformation.c)
 *     PopRundownThermalRequests @ 0x1409834A0 (PopRundownThermalRequests.c)
 *     PopDiagTraceDeviceComplianceRundown @ 0x14098E3D8 (PopDiagTraceDeviceComplianceRundown.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14098EC38 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopDiagTracePlatformRoleRundown @ 0x14099083C (PopDiagTracePlatformRoleRundown.c)
 *     PopDiagTracePowerStateEventRundown @ 0x140990EFC (PopDiagTracePowerStateEventRundown.c)
 *     PopDiagTraceSystemIdleRundown @ 0x140991D80 (PopDiagTraceSystemIdleRundown.c)
 *     PopTraceStandbyConnectivityRundown @ 0x140992C34 (PopTraceStandbyConnectivityRundown.c)
 *     ExTraceTimerResolution @ 0x1409F7C58 (ExTraceTimerResolution.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceControlCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        int *CallbackContext)
{
  PVOID *i; // rbx
  PVOID *v8; // rbx
  __int64 v9; // rsi
  _DWORD *v10; // rax
  int v11; // ecx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID v17; // rsi
  unsigned int v18; // r15d
  char *v19; // r14
  unsigned int v20; // r12d
  char *v21; // r13
  ULONG v22; // ebx
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-40h]
  PEVENT_DATA_DESCRIPTOR UserDataa; // [rsp+20h] [rbp-40h]
  __int64 v30; // [rsp+28h] [rbp-38h]
  __int64 v31; // [rsp+28h] [rbp-38h]
  unsigned int v32; // [rsp+30h] [rbp-30h] BYREF
  BOOL v33; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+40h] [rbp-20h] BYREF

  if ( (_DWORD)ControlCode == 2 )
  {
    v32 = 0;
    if ( CallbackContext == &dword_140C03950 )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
        PopTransitionTelemetryOsState(5, 1);
      if ( PopPowerPlane )
        PopPlTraceLogPowerPlane((unsigned __int16 *)PopPowerPlane, ControlCode, Level);
    }
    else
    {
      ExTraceTimerResolution(SourceId, ControlCode, Level, MatchAnyKeyword);
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquirePowerRequestPushLock(0);
      for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
        PopDiagTracePowerRequestCreate(1, (__int64)i);
      PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
      v35.Size = 4;
      v35.Reserved = 0;
      v33 = dword_140C3D90C == 0;
      v35.Ptr = (ULONGLONG)&v33;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &v35);
      ExAcquireFastMutex(&PopSettingLock);
      v8 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v9 = dword_140C3D90C;
        do
        {
          v10 = v8[v9 + 8];
          if ( v10 )
            PopDiagTracePowerSetting(1, (ULONGLONG)(v8 + 4), v10[1], (__int64)(v10 + 3));
          v8 = (PVOID *)*v8;
        }
        while ( v8 != &PopPowerSettings );
      }
      ExReleaseFastMutex(&PopSettingLock);
      PopThermalTraceRundownEvents();
      P = 0LL;
      PopAcquirePolicyLock(v11);
      v12 = PopLoggingInformation(&P, &v32);
      PopReleasePolicyLock(v14, v13, v15, v16, UserData, v30);
      v17 = P;
      if ( v12 >= 0 )
      {
        v18 = *(_DWORD *)P;
        v19 = (char *)P + 4;
        v20 = 0;
        if ( *(_DWORD *)P )
        {
          v21 = (char *)P + v32;
          do
          {
            if ( v19 >= v21 )
              break;
            v22 = *((_DWORD *)v19 + 3);
            v35.Reserved = 0;
            v22 += 16;
            v35.Size = v22;
            v35.Ptr = (ULONGLONG)v19;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &v35);
            ++v20;
            v19 += v22;
          }
          while ( v20 < v18 );
        }
      }
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      if ( !_InterlockedCompareExchange(&PopDiagDeviceRundownRequests, 1, 0) )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      if ( CallbackContext == (int *)&PopDiagHandle )
        PopDiagTraceFxRundown(0LL);
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopAcquirePolicyLock(v23);
      PopTraceStandbyConnectivityRundown();
      PopDiagTraceDeviceComplianceRundown();
      PopReleasePolicyLock(v25, v24, v26, v27, UserDataa, v31);
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerEventLock);
      PopDiagTracePowerStateEventRundown();
      PopReleaseRwLock(&PopPowerEventLock);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
      PopDiagTraceSystemIdleRundown();
      PopReleaseRwLock(&PopSystemIdleLock);
    }
  }
}
