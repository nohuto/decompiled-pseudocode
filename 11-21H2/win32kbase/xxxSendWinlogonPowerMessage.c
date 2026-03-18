/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C00D0BF0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00D0788 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     WmsgpSendPSPMessage @ 0x1C02C8C94 (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  unsigned int v5; // ebx
  int v6; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  struct tagTHREADINFO **v15; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 *v21; // rbx
  LARGE_INTEGER *v22; // rbx
  unsigned int v23; // r8d
  struct tagKERNELHANDLETABLEENTRY *v24; // rax
  __int64 v25; // rcx
  BOOL v26; // [rsp+30h] [rbp-99h] BYREF
  _DWORD v27[3]; // [rsp+34h] [rbp-95h] BYREF
  _BYTE ActivityId[28]; // [rsp+40h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+60h] [rbp-69h] BYREF
  BOOL *v30; // [rsp+80h] [rbp-49h]
  __int64 v31; // [rsp+88h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+90h] [rbp-39h] BYREF
  BOOL *v33; // [rsp+B0h] [rbp-19h]
  __int64 v34; // [rsp+B8h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+C0h] [rbp-9h] BYREF
  BOOL *v36; // [rsp+E0h] [rbp+17h]
  __int64 v37; // [rsp+E8h] [rbp+1Fh]

  v5 = a2;
  v27[0] = 0;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  if ( (_BYTE)a1 )
  {
    UserSessionSwitchLeaveCrit(a1, a2, (__int64)a3, a4);
    *(_OWORD *)ActivityId = *a3;
    v6 = WmsgpSendPSPMessage(v8, v5, ActivityId, v27);
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v10, v9, v11);
    else
      CurrentThreadWin32Thread = 0LL;
    *(_QWORD *)ActivityId = CurrentThreadWin32Thread;
    *(_DWORD *)&ActivityId[8] = 1;
    if ( CurrentThreadWin32Thread
      && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(*(_QWORD *)ActivityId + 48LL)) )
    {
      EtwActivityIdControl(3u, (LPGUID)&ActivityId[12]);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v31 = 4LL;
        v26 = *(_DWORD *)&ActivityId[8] == 1;
        v30 = &v26;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          (const GUID *)&ActivityId[12],
          0LL,
          3u,
          &v29);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v13 = W32kEtwEnabledKeyword, v14 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v14 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v22 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, v13, v14);
      if ( v22 )
        v22[1] = KeQueryPerformanceCounter(0LL);
    }
    v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v15 )
    {
      v16 = *v15;
      if ( IsThreadCrossSessionAttached() )
        v16 = 0LL;
      if ( *(_QWORD *)ActivityId )
      {
        v17 = *(unsigned int *)(*(_QWORD *)ActivityId + 24LL);
        if ( *(_DWORD *)(*(_QWORD *)ActivityId + 48LL) || (int)v17 > 0 )
        {
          *(_DWORD *)(*(_QWORD *)ActivityId + 44LL) = 1;
          *(_OWORD *)(*(_QWORD *)ActivityId + 28LL) = *(_OWORD *)&ActivityId[12];
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v34 = 4LL;
              v26 = *(_DWORD *)&ActivityId[8] == 1;
              v33 = &v26;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                (const GUID *)&ActivityId[12],
                0LL,
                3u,
                &v32);
              v23 = dword_1C028EE70;
            }
            if ( v23 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v37 = 4LL;
              v26 = *(_DWORD *)&ActivityId[8] == 1;
              v36 = &v26;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                (const GUID *)&ActivityId[12],
                0LL,
                3u,
                &v35);
            }
          }
        }
      }
      gptiCurrent = v16;
      if ( v16 )
      {
        *((_DWORD *)v16 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v21 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v24 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v25 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v24;
              if ( !*(_DWORD *)(v25 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v19, v20);
                v25 = *v21;
              }
              HMUnlockObject(v25);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)ActivityId);
      gptiCurrent = 0LL;
    }
  }
  else
  {
    *(_OWORD *)ActivityId = *a3;
    v6 = WmsgpSendPSPMessage(a1, a2, ActivityId, v27);
  }
  if ( v6 >= 0 )
    return (unsigned int)v27[0];
  return (unsigned int)v6;
}
