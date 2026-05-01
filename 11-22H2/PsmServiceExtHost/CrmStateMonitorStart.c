/*
 * XREFs of CrmStateMonitorStart @ 0x1800095D8
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180009414 (CrmRegisterToStateMonitor.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 * Callees:
 *     CrmStateMonitorAcDcDisplayStart @ 0x180008950 (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x1800089C0 (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmStateMonitorStateSizeGet @ 0x18000A5A4 (CrmStateMonitorStateSizeGet.c)
 *     CrmStateMonitorGPUUsageStart @ 0x18000A6D8 (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorNetworkStart @ 0x18000A9FC (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorWNFStart @ 0x18000AABC (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorFanNoiseHysteresisStart @ 0x18000B29C (CrmStateMonitorFanNoiseHysteresisStart.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180047750 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180047C4C (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180047FF4 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x1800481BC (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180048344 (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x1800484BC (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180048534 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x1800485D0 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180048638 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x1800486F4 (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180048764 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180048834 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800536E2 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     CrmStateMonitorCompositeTestStart @ 0x18006DF00 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x18006E250 (CrmStateMonitorDelayedInternetLossStart.c)
 *     CrmStateMonitorTestStart @ 0x18006E798 (CrmStateMonitorTestStart.c)
 */

__int64 __fastcall CrmStateMonitorStart(char *CallerContext, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  GUID *v9; // rdx
  int ready; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // eax
  const void *v16; // r9
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  unsigned int v36; // ebx
  _QWORD *v37; // rcx
  PVOID *v38; // rdx
  unsigned int v39; // r8d
  __int64 v40; // r9
  unsigned __int16 v41; // ax
  unsigned int v43; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v44; // [rsp+34h] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+6Ch] [rbp-94h]
  int *v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+78h] [rbp-88h]
  int v51; // [rsp+7Ch] [rbp-84h]
  _DWORD *v52; // [rsp+80h] [rbp-80h]
  int v53; // [rsp+88h] [rbp-78h]
  int v54; // [rsp+8Ch] [rbp-74h]
  _BYTE *v55; // [rsp+90h] [rbp-70h]
  _DWORD v56[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v57; // [rsp+A0h] [rbp-60h]
  int v58; // [rsp+A8h] [rbp-58h]
  int v59; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+B0h] [rbp-50h] BYREF
  UUID *v61; // [rsp+D0h] [rbp-30h]
  int v62; // [rsp+D8h] [rbp-28h]
  int v63; // [rsp+DCh] [rbp-24h]
  int *v64; // [rsp+E0h] [rbp-20h]
  int v65; // [rsp+E8h] [rbp-18h]
  int v66; // [rsp+ECh] [rbp-14h]
  _BYTE v67[40]; // [rsp+F0h] [rbp-10h] BYREF

  *((_QWORD *)CallerContext + 6) = MEMORY[0x7FFE0008];
  v5 = *(unsigned int *)CallerContext;
  if ( (int)v5 > 21 )
  {
    if ( (int)v5 > 32 )
    {
      v28 = v5 - 33;
      if ( !v28 )
      {
        ready = CrmStateMonitorDelayedCsStart(CallerContext, v67, a3, &Uuid);
        goto LABEL_91;
      }
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( !v30 )
        {
          ready = CrmStateMonitorAcDcDisplayStart((unsigned int *)CallerContext);
          goto LABEL_91;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          ready = CrmStateMonitorAcDcBatteryStart((unsigned int *)CallerContext);
          goto LABEL_91;
        }
        v32 = v31 - 1;
        if ( !v32 )
        {
          ready = CrmStateMonitorDelayedInternetLossStart(CallerContext, v67, a3, &Uuid);
          goto LABEL_91;
        }
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( !v34 )
          {
            ready = CrmStateMonitorFanNoiseHysteresisStart(CallerContext, v67, a3, &Uuid);
            goto LABEL_91;
          }
          v35 = v34 - 1;
          if ( v35 )
          {
            if ( v35 != 1 )
              goto LABEL_81;
            v14 = WNF_RM_MEMORY_MONITOR_USAGE_METRICS;
          }
          else
          {
            v14 = WNF_PO_FAN_NOISE_CHANGE;
          }
        }
        else
        {
          v14 = WNF_SHEL_SUSPEND_APP_BACKGROUND_ACTIVITY;
        }
      }
      else
      {
        v14 = WNF_SEB_SYSTEM_IDLE;
      }
      goto LABEL_23;
    }
    if ( (_DWORD)v5 == 32 )
    {
      v14 = WNF_SEB_AUDIO_ACTIVITY;
      goto LABEL_23;
    }
    if ( (int)v5 <= 27 )
    {
      if ( (_DWORD)v5 == 27 )
      {
        ready = CrmStateMonitorDelayedAcStart(CallerContext, v67, a3, &Uuid);
        goto LABEL_91;
      }
      v24 = v5 - 22;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              if ( v27 != 1 )
                goto LABEL_81;
              ready = CrmStateMonitorCsAcDcStart(CallerContext, v67, a3, &Uuid);
            }
            else
            {
              ready = CrmStateMonitorSystemDiskUsageStart(CallerContext, v67, a3, &Uuid);
            }
          }
          else
          {
            ready = CrmStateMonitorCPUUsageStart(CallerContext, v67, a3, &Uuid);
          }
          goto LABEL_91;
        }
        v14 = WNF_SHEL_LOCKSTATE;
      }
      else
      {
        v14 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
      }
      goto LABEL_23;
    }
    if ( (_DWORD)v5 != 28 )
    {
      if ( (_DWORD)v5 == 29 )
      {
        ready = CrmStateMonitorGPUUsageStart(CallerContext, v67, a3, &Uuid);
        goto LABEL_91;
      }
      if ( (_DWORD)v5 != 30 )
      {
        ready = CrmStateMonitorDisconnectedStandbyStart(CallerContext, v67, a3, &Uuid);
        goto LABEL_91;
      }
      v14 = WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY;
      goto LABEL_23;
    }
  }
  else
  {
    if ( (_DWORD)v5 == 21 )
    {
      ready = CrmStateMonitorPowerConstrainedStart(CallerContext, v67, a3, &Uuid);
      goto LABEL_91;
    }
    if ( (int)v5 > 10 )
    {
      if ( (int)v5 > 16 )
      {
        v21 = v5 - 17;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 )
                goto LABEL_81;
              ready = CrmStateMonitorPostResumeStart(CallerContext, v67, a3, &Uuid);
            }
            else
            {
              ready = CrmStateMonitorPostShellReadyStart(CallerContext, v67, a3, &Uuid);
            }
          }
          else
          {
            ready = CrmStateMonitorNetworkStart(CallerContext, v67);
          }
          goto LABEL_91;
        }
        v14 = WNF_CNET_NON_CELLULAR_CONNECTED;
      }
      else if ( (_DWORD)v5 == 16 )
      {
        v14 = WNF_XBOX_SYSTEM_CONSTRAINED_MODE_STATUS_CHANGED;
      }
      else
      {
        v17 = v5 - 11;
        if ( !v17 )
        {
          ready = CrmStateMonitorTimeSinceBootStart(CallerContext, v67, a3, &Uuid);
          goto LABEL_91;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          ready = CrmStateMonitorTimeSinceLogonStart(CallerContext, v67, a3, &Uuid);
          goto LABEL_91;
        }
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 != 1 )
              goto LABEL_81;
            v14 = WNF_SEB_IP_ADDRESS_AVAILABLE;
          }
          else
          {
            v14 = WNF_SEB_FREE_NETWORK_PRESENT;
          }
        }
        else
        {
          v14 = WNF_SEB_INTERNET_PRESENT;
        }
      }
LABEL_23:
      ready = CrmStateMonitorWNFStart(CallerContext, v14, v67, &Uuid);
      goto LABEL_91;
    }
    if ( (_DWORD)v5 != 10 )
    {
      if ( (int)v5 <= 5 )
      {
        if ( (_DWORD)v5 == 5 )
        {
          v9 = &GUID_BATTERY_PERCENTAGE_REMAINING;
          goto LABEL_13;
        }
        if ( (_DWORD)v5 && (v6 = v5 - 1) != 0 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( !v8 )
            {
              v9 = &GUID_GLOBAL_USER_PRESENCE;
              goto LABEL_13;
            }
            if ( v8 == 1 )
            {
              v9 = &GUID_ACDC_POWER_SOURCE;
LABEL_13:
              ready = CrmStateMonitorPowerSettingsStart(CallerContext, v9, a3, v67);
              goto LABEL_91;
            }
LABEL_81:
            v36 = -1073741822;
            goto LABEL_98;
          }
          ready = CrmStateMonitorCompositeTestStart(CallerContext, v67, a3, &Uuid);
        }
        else
        {
          ready = CrmStateMonitorTestStart(CallerContext);
        }
LABEL_91:
        v36 = ready;
        if ( ready < 0 )
          goto LABEL_98;
        goto LABEL_92;
      }
      v11 = v5 - 6;
      if ( !v11 )
      {
        v9 = &GUID_CONSOLE_DISPLAY_STATE;
        goto LABEL_13;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v9 = &GUID_POWER_SAVING_STATUS;
        goto LABEL_13;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v9 = &GUID_LOW_POWER_EPOCH;
        goto LABEL_13;
      }
      if ( v13 != 1 )
        goto LABEL_81;
      v14 = WNF_RM_GAME_MODE_ACTIVE;
      goto LABEL_23;
    }
  }
  *((_DWORD *)CallerContext + 14) = 0;
  *((_QWORD *)CallerContext + 5) = CallerContext + 56;
  v15 = CrmStateMonitorStateSizeGet(v5);
  memcpy_0(v67, v16, v15);
LABEL_92:
  RtlAcquireSRWLockExclusive(CallerContext + 8);
  *((_DWORD *)CallerContext + 4) = GetCurrentThreadId();
  v37 = (_QWORD *)(a2 + 8);
  v38 = (PVOID *)*((_QWORD *)CallerContext + 4);
  if ( *v38 != CallerContext + 24 )
    __fastfail(3u);
  *v37 = CallerContext + 24;
  *(_QWORD *)(a2 + 16) = v38;
  *v38 = v37;
  *((_QWORD *)CallerContext + 4) = v37;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a2)(
    a2,
    *(unsigned int *)CallerContext,
    *((_QWORD *)CallerContext + 5));
  *((_DWORD *)CallerContext + 4) = 0;
  RtlReleaseSRWLockExclusive(CallerContext + 8);
  if ( (unsigned int)dword_1800DB250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800DB250, 8LL) )
  {
    v63 = 0;
    v66 = 0;
    v61 = &Uuid;
    v43 = *(_DWORD *)CallerContext;
    v62 = 16;
    v64 = (int *)&v43;
    v65 = 4;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BF008, 0, 0, 4u, &v60);
  }
  v36 = 0;
LABEL_98:
  if ( (unsigned int)dword_1800DB250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800DB250, 8LL) )
  {
    v48 = 0;
    v51 = 0;
    v54 = 0;
    v49 = (int *)&v43;
    v52 = v56;
    v55 = v67;
    v46 = v40;
    v47 = 16;
    v43 = v39;
    v50 = 4;
    v53 = 2;
    v41 = CrmStateMonitorStateSizeGet(v39);
    v56[1] = 0;
    v59 = 0;
    v56[0] = v41;
    v57 = &v44;
    v44 = v36;
    v58 = 4;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BEE57, 0, 0, 7u, &v45);
  }
  return v36;
}
