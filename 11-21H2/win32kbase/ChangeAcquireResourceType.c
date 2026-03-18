/*
 * XREFs of ChangeAcquireResourceType @ 0x1C00B4B70
 * Callers:
 *     NtUserGetKeyState @ 0x1C002CDC0 (NtUserGetKeyState.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ChangeAcquireResourceType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int Count; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  struct tagTHREADINFO **v18; // rdi
  struct tagTHREADINFO *v19; // rdi
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 *v24; // rbx
  LARGE_INTEGER *v25; // rbx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v27; // rbx
  int v28; // eax
  unsigned int v29; // r8d
  struct tagKERNELHANDLETABLEENTRY *v30; // rax
  __int64 v31; // rcx
  BOOL v32; // [rsp+58h] [rbp-B0h] BYREF
  BOOL v33; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  int ActivityId_4; // [rsp+70h] [rbp-98h]
  GUID ActivityId_8; // [rsp+74h] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+88h] [rbp-80h] BYREF
  BOOL *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+B8h] [rbp-50h] BYREF
  BOOL *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+118h] [rbp+10h] BYREF

  if ( qword_1C029C988 )
    qword_1C029C988(a1, a2, a3, a4);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v5, v4, v6, v7);
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
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v10, v9, v11);
    v27 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v28 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v27 + 44) || *(_DWORD *)(v27 + 48) || v28 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v27 + 28),
          0LL,
          2u,
          &v47);
      }
      *(_DWORD *)(v27 + 44) = 0;
      *(_OWORD *)(v27 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    v15 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  else
    v15 = 0LL;
  v35 = v15;
  ActivityId_4 = 1;
  if ( v15 && (*(int *)(v15 + 24) > 0 || *(_DWORD *)(v35 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId_8);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v40 = 4LL;
      v32 = ActivityId_4 == 1;
      v39 = &v32;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId_8,
        0LL,
        3u,
        &v38);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v16 = W32kEtwEnabledKeyword, v17 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v17 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v25 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13, v16, v17);
    if ( v25 )
      v25[1] = KeQueryPerformanceCounter(0LL);
  }
  v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v18 )
  {
    v19 = *v18;
    if ( IsThreadCrossSessionAttached() )
      v19 = 0LL;
    if ( v35 )
    {
      v20 = *(unsigned int *)(v35 + 24);
      if ( *(_DWORD *)(v35 + 48) || (int)v20 > 0 )
      {
        *(_DWORD *)(v35 + 44) = 1;
        *(GUID *)(v35 + 28) = ActivityId_8;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v43 = 4LL;
            v33 = ActivityId_4 == 1;
            v42 = &v33;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId_8,
              0LL,
              3u,
              &v41);
            v29 = dword_1C028EE70;
          }
          if ( v29 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v46 = 4LL;
            LODWORD(v34) = ActivityId_4 == 1;
            v45 = &v34;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId_8,
              0LL,
              3u,
              &v44);
          }
        }
      }
    }
    gptiCurrent = v19;
    if ( v19 )
    {
      *((_DWORD *)v19 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v24 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v30 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v31 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v30;
            if ( !*(_DWORD *)(v31 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v22, v23);
              v31 = *v24;
            }
            HMUnlockObject(v31);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v35);
    v19 = 0LL;
  }
  gptiCurrent = v19;
}
