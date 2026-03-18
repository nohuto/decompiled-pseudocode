/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C0162240
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     CheckAccessEx @ 0x1C002FB20 (CheckAccessEx.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C0040CB0 (EtwTraceUIPISystemError.c)
 *     UserSetLastStatus @ 0x1C00D5824 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0148CEC (_SetPrecisionTouchPadConfiguration.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01DEE38 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  struct tagKERNELHANDLETABLEENTRY *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE v24[4]; // [rsp+20h] [rbp-58h] BYREF
  int v25; // [rsp+24h] [rbp-54h]
  int v26[6]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v27; // [rsp+48h] [rbp-30h] BYREF
  __int64 v28; // [rsp+58h] [rbp-20h]

  v26[0] = 0x2000;
  v26[1] = -1;
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v9 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          *((_QWORD *)v9 + 2) = 0LL;
          v8 = *(_QWORD *)v9;
          if ( !*(_DWORD *)(*(_QWORD *)v9 + 8LL) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v3, v5);
            v8 = *(_QWORD *)v9;
          }
          HMUnlockObject(v8);
        }
      }
    }
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24, v3, v5);
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v26, 0) )
  {
    if ( ((PsGetCurrentProcessWow64Process(v11, v10, v12) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = a1 + 4;
    if ( a1 + 4 > MmUserProbeAddress || v18 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( *(_DWORD *)a1 )
    {
      v13 = 0;
      v25 = 0;
      UserSetLastStatus(-1073741822);
    }
    else
    {
      if ( ((PsGetCurrentProcessWow64Process(v18, MmUserProbeAddress, v17) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 24 > MmUserProbeAddress || a1 + 24 < a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v27 = *(_OWORD *)a1;
      v28 = *(_QWORD *)(a1 + 16);
      LODWORD(v27) = 0;
      v13 = SetPrecisionTouchPadConfiguration((__int64)&v27);
      v25 = v13;
      if ( v13 )
        PTPTelemetry::PTPConfigUpdateEx(0LL);
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((PEPROCESS **)gptiCurrent + 53), 0LL);
    v13 = 0;
    UserSetLastError(5LL, v14, v15, v16);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v24);
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v13;
}
