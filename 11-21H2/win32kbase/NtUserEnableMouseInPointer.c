/*
 * XREFs of NtUserEnableMouseInPointer @ 0x1C00BAEA0
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
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnableMouseInPointer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  struct tagTHREADINFO **v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // rcx
  LARGE_INTEGER *v19; // rsi
  struct tagKERNELHANDLETABLEENTRY *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  BOOL v23; // [rsp+38h] [rbp-79h] BYREF
  __int64 v24; // [rsp+40h] [rbp-71h] BYREF
  int v25; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v28; // [rsp+80h] [rbp-31h]
  __int64 v29; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v31; // [rsp+B0h] [rbp-1h]
  __int64 v32; // [rsp+B8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v34; // [rsp+E0h] [rbp+2Fh]
  __int64 v35; // [rsp+E8h] [rbp+37h]

  v3 = 0LL;
  v4 = a1;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
    v24 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v24 = 0LL;
  }
  v25 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v24 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v29 = 4LL;
      v23 = v25 == 1;
      v28 = &v23;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v27);
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
    v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v6, v7);
    if ( v19 )
      v19[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v13 = *v8;
    if ( v24 )
    {
      v10 = *(unsigned int *)(v24 + 24);
      if ( *(_DWORD *)(v24 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v24 + 44) = 1;
        *(GUID *)(v24 + 28) = ActivityId;
        v11 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v32 = 4LL;
            v23 = v25 == 1;
            v31 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v30);
            v11 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v11 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v35 = 4LL;
            v23 = v25 == 1;
            v34 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v33);
          }
        }
      }
    }
    gptiCurrent = v13;
    if ( v13 )
    {
      *((_DWORD *)v13 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v15 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v20 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v21 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v20;
            if ( !*(_DWORD *)(v21 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v9, v11);
              v21 = *v15;
            }
            HMUnlockObject(v21);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v24);
    gptiCurrent = 0LL;
  }
  if ( (v4 != 0) != v4 )
  {
    v22 = 87LL;
LABEL_55:
    UserSetLastError(v22, v9, v11, v12);
    goto LABEL_22;
  }
  if ( v4 && qword_1C029C780 && (qword_1C029C780(gptiCurrent) & 0x80000000000LL) != 0
    || (v9 = *((_QWORD *)gptiCurrent + 53), v16 = *(_DWORD *)(v9 + 820), v4 != ((v16 >> 2) & 1)) && (v16 & 8) != 0 )
  {
    v22 = 5LL;
    goto LABEL_55;
  }
  v17 = v16 & 0xFFFFFFFB;
  v3 = 1LL;
  *(_DWORD *)(v9 + 820) = v17 | (4 * (v4 & 1 | 2));
LABEL_22:
  UserSessionSwitchLeaveCrit(v17, v9, v11, v12);
  return v3;
}
