/*
 * XREFs of NtUserGetPrecisionTouchPadConfiguration @ 0x1C015A740
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C00D5824 (UserSetLastStatus.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0148BC0 (_GetPrecisionTouchPadConfiguration.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetPrecisionTouchPadConfiguration(char *Address)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  struct tagKERNELHANDLETABLEENTRY *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int PrecisionTouchPadConfiguration; // ebx
  __int64 v16; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int128 v23; // [rsp+40h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp-18h]
  char v25; // [rsp+78h] [rbp+10h] BYREF

  v23 = 0LL;
  v24 = 0LL;
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
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v25, v3, v5);
  if ( ((PsGetCurrentProcessWow64Process(v11, v10, v12) == 0 ? 3 : 0) & (unsigned __int8)Address) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(Address + 4) > MmUserProbeAddress || Address + 4 < Address )
    *(_BYTE *)MmUserProbeAddress = 0;
  LODWORD(v23) = *(_DWORD *)Address;
  if ( (_DWORD)v23 )
  {
    PrecisionTouchPadConfiguration = 0;
    UserSetLastStatus(-1073741822);
  }
  else
  {
    PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration((__int64)&v23);
    if ( PrecisionTouchPadConfiguration )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14, v13, v16);
      ProbeForWrite(Address, 0x18uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      *(_OWORD *)Address = v23;
      *((_QWORD *)Address + 2) = v24;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v25);
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return PrecisionTouchPadConfiguration;
}
