/*
 * XREFs of NtUserUnloadKeyboardLayout @ 0x1C01642C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C004FF1C (ApiSetEditionGetProcessWindowStation.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     xxxUnloadKeyboardLayout @ 0x1C01E4660 (xxxUnloadKeyboardLayout.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserUnloadKeyboardLayout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  LARGE_INTEGER *v6; // rbx
  struct tagTHREADINFO **v7; // rbx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rbx
  unsigned int v10; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  struct tagKERNELHANDLETABLEENTRY *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rbx
  struct tagWINDOWSTATION *ProcessWindowStation; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  BOOL v24; // [rsp+38h] [rbp-79h] BYREF
  __int64 v25; // [rsp+40h] [rbp-71h] BYREF
  int v26; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v29; // [rsp+80h] [rbp-31h]
  int v30; // [rsp+88h] [rbp-29h]
  int v31; // [rsp+8Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v33; // [rsp+B0h] [rbp-1h]
  int v34; // [rsp+B8h] [rbp+7h]
  int v35; // [rsp+BCh] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v37; // [rsp+E0h] [rbp+2Fh]
  int v38; // [rsp+E8h] [rbp+37h]
  int v39; // [rsp+ECh] [rbp+3Bh]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v25 = CurrentThreadWin32Thread;
  v26 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v25 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v30 = 4;
      v31 = 0;
      v24 = v26 == 1;
      v29 = &v24;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v28);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v4 = W32kEtwEnabledKeyword, v5 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v5 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v6 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v4, v5);
    if ( v6 )
      v6[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v7 )
  {
    v9 = *v7;
    if ( v25 )
    {
      v8 = *(unsigned int *)(v25 + 24);
      if ( *(_DWORD *)(v25 + 48) || (int)v8 > 0 )
      {
        *(_DWORD *)(v25 + 44) = 1;
        *(GUID *)(v25 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v34 = 4;
            v35 = 0;
            v24 = v26 == 1;
            v33 = &v24;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v32);
            v10 = dword_1C028EE70;
          }
          if ( v10 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v38 = 4;
            v39 = 0;
            v24 = v26 == 1;
            v37 = &v24;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v36);
          }
        }
      }
    }
    gptiCurrent = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v16 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v14 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v15 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v14;
            if ( !*(_DWORD *)(v15 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v13);
              v15 = *v16;
            }
            HMUnlockObject(v15);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v25);
    gptiCurrent = 0LL;
  }
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
  v18 = (int)xxxUnloadKeyboardLayout(ProcessWindowStation);
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v18;
}
