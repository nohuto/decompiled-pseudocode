/*
 * XREFs of UserEnterUserCritSec @ 0x1C00BD1F0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UserEnterUserCritSec(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  struct tagTHREADINFO **v6; // rbx
  struct tagTHREADINFO *v7; // rbx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // rbx
  LARGE_INTEGER *v13; // rbx
  unsigned int v14; // r8d
  struct tagKERNELHANDLETABLEENTRY *v15; // rax
  __int64 v16; // rcx
  BOOL v17; // [rsp+38h] [rbp-79h] BYREF
  __int64 v18; // [rsp+40h] [rbp-71h] BYREF
  int v19; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v22; // [rsp+80h] [rbp-31h]
  __int64 v23; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v25; // [rsp+B0h] [rbp-1h]
  __int64 v26; // [rsp+B8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v28; // [rsp+E0h] [rbp+2Fh]
  __int64 v29; // [rsp+E8h] [rbp+37h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v18 = CurrentThreadWin32Thread;
  v19 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v18 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v23 = 4LL;
      v17 = v19 == 1;
      v22 = &v17;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v21);
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
    v13 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v4, v5);
    if ( v13 )
      v13[1] = KeQueryPerformanceCounter(0LL);
  }
  v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v6 )
  {
    v7 = *v6;
    if ( IsThreadCrossSessionAttached() )
      v7 = 0LL;
    if ( v18 )
    {
      v8 = *(unsigned int *)(v18 + 24);
      if ( *(_DWORD *)(v18 + 48) || (int)v8 > 0 )
      {
        *(_DWORD *)(v18 + 44) = 1;
        *(GUID *)(v18 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v26 = 4LL;
            v17 = v19 == 1;
            v25 = &v17;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v24);
            v14 = dword_1C028EE70;
          }
          if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v29 = 4LL;
            v17 = v19 == 1;
            v28 = &v17;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v27);
          }
        }
      }
    }
    gptiCurrent = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v15 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v16 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v15;
            if ( !*(_DWORD *)(v16 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v10, v11);
              v16 = *v12;
            }
            HMUnlockObject(v16);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v18);
    gptiCurrent = 0LL;
  }
}
