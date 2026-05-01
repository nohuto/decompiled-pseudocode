/*
 * XREFs of CrmStateMonitorStart @ 0x18002F304
 * Callers:
 *     CrmActivityStart @ 0x180030D90 (CrmActivityStart.c)
 *     CrmRegisterToStateMonitor @ 0x18003C628 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002F078 (CrmStateMonitorStateSizeGet.c)
 *     CrmStateMonitorGPUUsageStart @ 0x18003C5C0 (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorWNFStart @ 0x18004295C (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x180042FF0 (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x18004305C (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x18004C3B4 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x18004C9AC (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x18004CE38 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorNetworkStart @ 0x18004D088 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x18004D2DC (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x18004D42C (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x18004D62C (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x18004D6A0 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x18004D714 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x18004D778 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x18004D830 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x18004D89C (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x18004D908 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     CrmStateMonitorCompositeTestStart @ 0x18006DEE0 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x18006E1E8 (CrmStateMonitorDelayedInternetLossStart.c)
 *     CrmStateMonitorTestStart @ 0x18006E504 (CrmStateMonitorTestStart.c)
 */

__int64 __fastcall CrmStateMonitorStart(_QWORD *CallerContext, __int64 a2, __int64 a3)
{
  int ready; // eax
  unsigned int v6; // edi
  _QWORD *v7; // rdx
  PVOID *v8; // rcx
  int v9; // r9d
  __int64 v11; // rdx
  GUID *v12; // rdx
  int v13; // ecx
  unsigned int v14; // eax
  const void *v15; // rdx
  int v16; // eax
  unsigned __int16 v17; // ax
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-C0h] BYREF
  UUID *v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+6Ch] [rbp-94h]
  int *v24; // [rsp+70h] [rbp-90h]
  int v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+7Ch] [rbp-84h]
  _DWORD *v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+8Ch] [rbp-74h]
  _BYTE *v30; // [rsp+90h] [rbp-70h]
  _DWORD v31[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+B0h] [rbp-50h] BYREF
  UUID *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  int *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  _BYTE v42[16]; // [rsp+F0h] [rbp-10h] BYREF

  CallerContext[6] = MEMORY[0x7FFE0008];
  switch ( *(_DWORD *)CallerContext )
  {
    case 0:
    case 1:
      ready = CrmStateMonitorTestStart(CallerContext);
      goto LABEL_3;
    case 2:
      ready = CrmStateMonitorCompositeTestStart(CallerContext, v42);
      goto LABEL_3;
    case 3:
      v12 = &GUID_GLOBAL_USER_PRESENCE;
      goto LABEL_17;
    case 4:
      v12 = &GUID_ACDC_POWER_SOURCE;
      goto LABEL_17;
    case 5:
      v12 = &GUID_BATTERY_PERCENTAGE_REMAINING;
      goto LABEL_17;
    case 6:
      v12 = &GUID_CONSOLE_DISPLAY_STATE;
      goto LABEL_17;
    case 7:
      v12 = &GUID_POWER_SAVING_STATUS;
      goto LABEL_17;
    case 8:
      v12 = &GUID_LOW_POWER_EPOCH;
LABEL_17:
      ready = CrmStateMonitorPowerSettingsStart(CallerContext, v12, a3, v42);
      goto LABEL_3;
    case 9:
      v11 = WNF_RM_GAME_MODE_ACTIVE;
      goto LABEL_13;
    case 0xA:
      v13 = 10;
      goto LABEL_19;
    case 0xB:
      ready = CrmStateMonitorTimeSinceBootStart(CallerContext, v42);
      goto LABEL_3;
    case 0xC:
      ready = CrmStateMonitorTimeSinceLogonStart(CallerContext, v42);
      goto LABEL_3;
    case 0xD:
      v11 = WNF_SEB_INTERNET_PRESENT;
      goto LABEL_13;
    case 0xE:
      v11 = WNF_SEB_FREE_NETWORK_PRESENT;
      goto LABEL_13;
    case 0xF:
      v11 = WNF_SEB_IP_ADDRESS_AVAILABLE;
      goto LABEL_13;
    case 0x10:
      v11 = WNF_XBOX_SYSTEM_CONSTRAINED_MODE_STATUS_CHANGED;
      goto LABEL_13;
    case 0x11:
      v11 = WNF_CNET_NON_CELLULAR_CONNECTED;
      goto LABEL_13;
    case 0x12:
      ready = CrmStateMonitorNetworkStart(CallerContext, v42);
      goto LABEL_3;
    case 0x13:
      ready = CrmStateMonitorPostShellReadyStart(CallerContext, v42);
      goto LABEL_3;
    case 0x14:
      ready = CrmStateMonitorPostResumeStart(CallerContext, v42);
      goto LABEL_3;
    case 0x15:
      ready = CrmStateMonitorPowerConstrainedStart(CallerContext, v42);
      goto LABEL_3;
    case 0x16:
      v11 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
      goto LABEL_13;
    case 0x17:
      v11 = WNF_SHEL_LOCKSTATE;
      goto LABEL_13;
    case 0x18:
      ready = CrmStateMonitorCPUUsageStart(CallerContext, v42);
      goto LABEL_3;
    case 0x19:
      ready = CrmStateMonitorSystemDiskUsageStart(CallerContext, v42);
      goto LABEL_3;
    case 0x1A:
      ready = CrmStateMonitorCsAcDcStart(CallerContext, v42);
      goto LABEL_3;
    case 0x1B:
      ready = CrmStateMonitorDelayedAcStart(CallerContext, v42);
      goto LABEL_3;
    case 0x1C:
      v13 = 28;
LABEL_19:
      *((_DWORD *)CallerContext + 14) = 0;
      CallerContext[5] = CallerContext + 7;
      v14 = CrmStateMonitorStateSizeGet(v13);
      memcpy_0(v42, v15, v14);
      goto LABEL_4;
    case 0x1D:
      ready = CrmStateMonitorGPUUsageStart(CallerContext, v42);
      goto LABEL_3;
    case 0x1E:
      v11 = WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY;
      goto LABEL_13;
    case 0x1F:
      ready = CrmStateMonitorDisconnectedStandbyStart(CallerContext, v42);
      goto LABEL_3;
    case 0x20:
      v11 = WNF_SEB_AUDIO_ACTIVITY;
      goto LABEL_13;
    case 0x21:
      ready = CrmStateMonitorDelayedCsStart(CallerContext, v42);
      goto LABEL_3;
    case 0x22:
      v11 = WNF_SEB_SYSTEM_IDLE;
      goto LABEL_13;
    case 0x23:
      ready = CrmStateMonitorAcDcDisplayStart(CallerContext, v42);
      goto LABEL_3;
    case 0x24:
      ready = CrmStateMonitorAcDcBatteryStart(CallerContext, v42);
      goto LABEL_3;
    case 0x25:
      ready = CrmStateMonitorDelayedInternetLossStart(CallerContext, v42);
      goto LABEL_3;
    case 0x26:
      v11 = WNF_SHEL_SUSPEND_APP_BACKGROUND_ACTIVITY;
      goto LABEL_13;
    case 0x27:
      v11 = WNF_PO_FAN_NOISE_CHANGE;
LABEL_13:
      ready = CrmStateMonitorWNFStart(CallerContext, v11, v42);
LABEL_3:
      v6 = ready;
      if ( ready >= 0 )
      {
LABEL_4:
        RtlAcquireSRWLockExclusive(CallerContext + 1);
        *((_DWORD *)CallerContext + 4) = GetCurrentThreadId();
        v7 = (_QWORD *)(a2 + 8);
        v8 = (PVOID *)CallerContext[4];
        if ( *v8 != CallerContext + 3 )
          __fastfail(3u);
        *v7 = CallerContext + 3;
        *(_QWORD *)(a2 + 16) = v8;
        *v8 = v7;
        CallerContext[4] = v7;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a2)(a2, *(unsigned int *)CallerContext, CallerContext[5]);
        *((_DWORD *)CallerContext + 4) = 0;
        RtlReleaseSRWLockExclusive(CallerContext + 1);
        if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 8) != 0 && (qword_1800DC268 & 8) == qword_1800DC268 )
        {
          v16 = *(_DWORD *)CallerContext;
          v38 = 0;
          v41 = 0;
          v18 = v16;
          v36 = &Uuid;
          v39 = &v18;
          v37 = 16;
          v40 = 4;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1800DC250,
            (unsigned __int8 *)dword_1800BE0D4,
            0LL,
            0LL,
            4u,
            &v35);
        }
        v6 = 0;
      }
      break;
    default:
      v6 = -1073741822;
      break;
  }
  if ( (unsigned int)dword_1800DC250 > 5 && tlgKeywordOn((__int64)&dword_1800DC250, 8LL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v24 = &v18;
    v27 = v31;
    v30 = v42;
    v21 = &Uuid;
    v22 = 16;
    v18 = v9;
    v25 = 4;
    v28 = 2;
    v17 = CrmStateMonitorStateSizeGet(v9);
    v31[1] = 0;
    v34 = 0;
    v31[0] = v17;
    v32 = &v19;
    v19 = v6;
    v33 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC250,
      (unsigned __int8 *)dword_1800BDF23,
      0LL,
      0LL,
      7u,
      &v20);
  }
  return v6;
}
