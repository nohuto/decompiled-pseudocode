/*
 * XREFs of NtUserGetDC @ 0x1C00295D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0029830 (EtwTraceAcquiredSharedUserCrit.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IsEtwUserCritEnabled @ 0x1C002A200 (IsEtwUserCritEnabled.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1C002CB00 (ValidateHwndEx.c)
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C002FA90 (GreSelectVisRgnShared.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HDC __fastcall NtUserGetDC(__int64 a1)
{
  int v2; // esi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 *ThreadWin32Thread; // rax
  HDC DCEx; // rdi
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int Count; // eax
  LARGE_INTEGER *v19; // rbx
  __int64 *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  BOOL v25; // [rsp+58h] [rbp-39h] BYREF
  __int64 v26; // [rsp+60h] [rbp-31h] BYREF
  int v27; // [rsp+68h] [rbp-29h]
  GUID ActivityId; // [rsp+6Ch] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+80h] [rbp-11h] BYREF
  BOOL *v30; // [rsp+A0h] [rbp+Fh]
  __int64 v31; // [rsp+A8h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+B0h] [rbp+1Fh] BYREF

  v2 = 1;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  else
    CurrentThreadWin32Thread = 0LL;
  v26 = CurrentThreadWin32Thread;
  v27 = 0;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v26 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
      {
        v31 = 4LL;
        v25 = v27 == 1;
        v30 = &v25;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v29);
      }
    }
  }
  if ( (unsigned int)IsEtwUserCritEnabled() )
  {
    v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v19 )
      v19[1] = KeQueryPerformanceCounter(0LL);
  }
  ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
  EtwTraceAcquiredSharedUserCrit();
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v26);
  if ( a1 )
  {
    v6 = ValidateHwndEx(a1, 1LL, 0LL);
    if ( !v6 )
    {
      DCEx = 0LL;
      goto LABEL_18;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v8 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v8 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v8 + 488) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 768LL) + 24LL) & 1) != 0 )
  {
    if ( !v6 )
    {
      v20 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 24LL);
      if ( v20 )
        v21 = *v20;
      else
        v21 = 0LL;
      if ( !ValidateHwndEx(v21, 1LL, 0LL) )
        v2 = 0;
      goto LABEL_12;
    }
LABEL_11:
    DCEx = (HDC)GetDCEx(v6, 0LL, 0x10000LL);
    goto LABEL_18;
  }
  if ( v6 )
    goto LABEL_11;
LABEL_12:
  v11 = 0LL;
  v12 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v12 )
    v11 = *v12;
  v5 = *(_QWORD *)(v11 + 456);
  if ( v5 )
    DCEx = (HDC)GetDCEx(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL), 0LL, 3LL);
  else
    DCEx = 0LL;
  if ( !v2 )
  {
    GreCreateRectRgnIndirect((struct _SLIST_ENTRY *)&gZero);
    GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
    GreSelectVisRgnShared(DCEx);
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
  }
LABEL_18:
  v13 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C029C988 )
    qword_1C029C988(v5, v4, v13, v7);
  if ( (unsigned int)UserIsUserCritSecInExclusive(v5, v4, v13, v7) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1508) = 0;
  gptiCurrent = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v22 = PsGetCurrentThreadWin32Thread();
    v23 = v22;
    if ( v22 )
    {
      v24 = *(_DWORD *)(v22 + 24);
      if ( (*(_DWORD *)(v23 + 44) || *(_DWORD *)(v23 + 48) || v24 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD03, v23 + 28, 0, 2u, &v32);
      }
      *(_DWORD *)(v23 + 44) = 0;
      *(_OWORD *)(v23 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
