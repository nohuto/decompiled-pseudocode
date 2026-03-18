/*
 * XREFs of NtUserRegisterLogonProcess @ 0x1C00BDCB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _RegisterLogonProcess @ 0x1C00BDE70 (_RegisterLogonProcess.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterLogonProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  struct tagTHREADINFO **v8; // rbx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  LARGE_INTEGER *v21; // rbx
  unsigned int v22; // r8d
  struct tagKERNELHANDLETABLEENTRY *v23; // rax
  __int64 v24; // rcx
  BOOL v25; // [rsp+38h] [rbp-79h] BYREF
  __int64 v26; // [rsp+40h] [rbp-71h] BYREF
  int v27; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v30; // [rsp+80h] [rbp-31h]
  int v31; // [rsp+88h] [rbp-29h]
  int v32; // [rsp+8Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v34; // [rsp+B0h] [rbp-1h]
  int v35; // [rsp+B8h] [rbp+7h]
  int v36; // [rsp+BCh] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v38; // [rsp+E0h] [rbp+2Fh]
  int v39; // [rsp+E8h] [rbp+37h]
  int v40; // [rsp+ECh] [rbp+3Bh]

  v4 = a1;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v26 = CurrentThreadWin32Thread;
  v27 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v26 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v31 = 4;
      v32 = 0;
      v25 = v27 == 1;
      v30 = &v25;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v29);
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
    v21 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v6, v7);
    if ( v21 )
      v21[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v10 = *v8;
    if ( v26 )
    {
      v9 = *(unsigned int *)(v26 + 24);
      if ( *(_DWORD *)(v26 + 48) || (int)v9 > 0 )
      {
        *(_DWORD *)(v26 + 44) = 1;
        *(GUID *)(v26 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v35 = 4;
            v36 = 0;
            v25 = v27 == 1;
            v34 = &v25;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v33);
            v22 = dword_1C028EE70;
          }
          if ( v22 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v39 = 4;
            v40 = 0;
            v25 = v27 == 1;
            v38 = &v25;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v37);
          }
        }
      }
    }
    gptiCurrent = v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v14 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v23 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v24 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v23;
            if ( !*(_DWORD *)(v24 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v12, v13);
              v24 = *v14;
            }
            HMUnlockObject(v24);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v26);
    gptiCurrent = 0LL;
  }
  v15 = (int)RegisterLogonProcess(v4, a2);
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v15;
}
