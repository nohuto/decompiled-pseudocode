/*
 * XREFs of ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDBE0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C01EC3B4 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardStatesPacket(__int64 a1, _OWORD **a2, __int64 a3)
{
  _OWORD **v3; // rdi
  PDEVICE_OBJECT v4; // rcx
  unsigned __int64 v5; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  LARGE_INTEGER *v9; // rbx
  struct tagTHREADINFO **v10; // rbx
  struct tagTHREADINFO *v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagKERNELHANDLETABLEENTRY *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  BOOL v25; // [rsp+48h] [rbp-79h] BYREF
  __int64 v26; // [rsp+50h] [rbp-71h] BYREF
  int v27; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+70h] [rbp-51h] BYREF
  BOOL *v30; // [rsp+90h] [rbp-31h]
  __int64 v31; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A0h] [rbp-21h] BYREF
  BOOL *v33; // [rsp+C0h] [rbp-1h]
  __int64 v34; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+D0h] [rbp+Fh] BYREF
  BOOL *v36; // [rsp+F0h] [rbp+2Fh]
  __int64 v37; // [rsp+F8h] [rbp+37h]

  v3 = a2;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      46,
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
  if ( *v3 )
    *v3 = (_OWORD *)((char *)v3 + ((unsigned __int64)*v3 & 0xFFFFFFFFFFFFFFFEuLL));
  v5 = (unsigned __int64)v3[1];
  if ( v5 )
    v3[1] = (_OWORD *)((char *)v3 + (v5 & 0xFFFFFFFFFFFFFFFEuLL));
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v4, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v26 = CurrentThreadWin32Thread;
  v27 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v26 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v31 = 4LL;
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
    || (v7 = W32kEtwEnabledKeyword, v8 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v8 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v9 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4, v7, v8);
    if ( v9 )
      v9[1] = KeQueryPerformanceCounter(0LL);
  }
  v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v10 )
  {
    v11 = *v10;
    if ( IsThreadCrossSessionAttached() )
      v11 = 0LL;
    if ( v26 )
    {
      v12 = *(unsigned int *)(v26 + 24);
      if ( *(_DWORD *)(v26 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v26 + 44) = 1;
        *(GUID *)(v26 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v34 = 4LL;
            v25 = v27 == 1;
            v33 = &v25;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v32);
            v13 = dword_1C028EE70;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v37 = 4LL;
            v25 = v27 == 1;
            v36 = &v25;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v35);
          }
        }
      }
    }
    gptiCurrent = v11;
    if ( v11 )
    {
      *((_DWORD *)v11 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v19 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v17 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v18 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v17;
            if ( !*(_DWORD *)(v18 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v15, v16);
              v18 = *v19;
            }
            HMUnlockObject(v18);
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
  ApplyFullKeyboardStates(*v3, v3[1]);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return 1LL;
}
