/*
 * XREFs of ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C006A200
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IsUserResetPointerSupported @ 0x1C006A1D0 (IsUserResetPointerSupported.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006A3FC (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DxgkEngSetDisplayModeCallback(struct _LUID a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  struct tagTHREADINFO **v7; // rbx
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  LARGE_INTEGER *v22; // rbx
  struct tagKERNELHANDLETABLEENTRY *v23; // rax
  __int64 v24; // rcx
  BOOL v25; // [rsp+30h] [rbp-99h] BYREF
  struct _LUID v26; // [rsp+38h] [rbp-91h] BYREF
  __int64 v27; // [rsp+40h] [rbp-89h] BYREF
  int v28; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+60h] [rbp-69h] BYREF
  BOOL *v31; // [rsp+80h] [rbp-49h]
  __int64 v32; // [rsp+88h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+90h] [rbp-39h] BYREF
  BOOL *v34; // [rsp+B0h] [rbp-19h]
  __int64 v35; // [rsp+B8h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp-9h] BYREF
  BOOL *v37; // [rsp+E0h] [rbp+17h]
  __int64 v38; // [rsp+E8h] [rbp+1Fh]

  v26 = a1;
  v3 = a2;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PsGetCurrentThreadWin32Thread)(a1, a2, a3);
  else
    v4 = 0LL;
  v27 = v4;
  v28 = 1;
  if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v27 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v32 = 4LL;
      v25 = v28 == 1;
      v31 = &v25;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v30);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v5 = W32kEtwEnabledKeyword, v6 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v6 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v22 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PsGetCurrentThreadWin32Thread)(a1, v5, v6);
    if ( v22 )
      v22[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v7 )
  {
    v8 = *v7;
    if ( IsThreadCrossSessionAttached() )
      v8 = 0LL;
    if ( v27 )
    {
      v10 = *(unsigned int *)(v27 + 24);
      if ( *(_DWORD *)(v27 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v27 + 44) = 1;
        *(GUID *)(v27 + 28) = ActivityId;
        v11 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v35 = 4LL;
            v25 = v28 == 1;
            v34 = &v25;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v33);
            v11 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v11 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v38 = 4LL;
            v25 = v28 == 1;
            v37 = &v25;
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
    gptiCurrent = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v9, v11, v12);
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
            v23 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v24 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v23;
            if ( !*(_DWORD *)(v24 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v14, v15);
              v24 = *v16;
            }
            HMUnlockObject(v24);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v27);
    gptiCurrent = 0LL;
  }
  if ( (int)IsUserResetPointerSupported() >= 0 && qword_1C029ADB8 )
    qword_1C029ADB8();
  DrvUpdatePDevForWDDMVidPnSource(&v26, v3);
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return 0LL;
}
