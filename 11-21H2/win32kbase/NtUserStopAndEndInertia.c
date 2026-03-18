/*
 * XREFs of NtUserStopAndEndInertia @ 0x1C0162C20
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C01D7A9C (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserStopAndEndInertia(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  LARGE_INTEGER *v8; // rdi
  struct tagTHREADINFO **v9; // rdi
  __int64 v10; // rdx
  struct tagTHREADINFO *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *v14; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rdi
  PVOID CurrentProcess; // rax
  __int64 v20; // rdx
  CTouchProcessor *v21; // rcx
  void *v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  BOOL v29; // [rsp+38h] [rbp-79h] BYREF
  __int64 v30; // [rsp+40h] [rbp-71h] BYREF
  int v31; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v34; // [rsp+80h] [rbp-31h]
  __int64 v35; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v37; // [rsp+B0h] [rbp-1h]
  __int64 v38; // [rsp+B8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v40; // [rsp+E0h] [rbp+2Fh]
  __int64 v41; // [rsp+E8h] [rbp+37h]

  v3 = 0;
  v4 = a2;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
    v30 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v30 = 0LL;
  }
  v31 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v30 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v35 = 4LL;
      v29 = v31 == 1;
      v34 = &v29;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v33);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v6 = W32kEtwEnabledKeyword, v7 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v7 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v8 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v6, v7);
    if ( v8 )
      v8[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v9 )
  {
    v14 = *v9;
    if ( v30 )
    {
      v11 = (struct tagTHREADINFO *)*(unsigned int *)(v30 + 24);
      if ( *(_DWORD *)(v30 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v30 + 44) = 1;
        *(GUID *)(v30 + 28) = ActivityId;
        v12 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v38 = 4LL;
            v29 = v31 == 1;
            v37 = &v29;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v36);
            v12 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v12 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v41 = 4LL;
            v29 = v31 == 1;
            v40 = &v29;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v39);
          }
        }
      }
    }
    gptiCurrent = v14;
    if ( v14 )
    {
      *((_DWORD *)v14 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v11 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v18 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v16 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v17 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v16;
              if ( !*(_DWORD *)(v17 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v10, v12);
                v17 = *v18;
              }
              HMUnlockObject(v17);
            }
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v30);
    gptiCurrent = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10, v12, v13);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
    v3 = CTouchProcessor::StopAndEndInertia(v21, v4, v22);
  else
    UserSetLastError(5LL, v20, (__int64)v22, v23);
  UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  return v3;
}
