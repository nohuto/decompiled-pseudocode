/*
 * XREFs of NtUserSetForegroundRedirectionForActivationObject @ 0x1C0161760
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C0142DB0 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetForegroundRedirectionForActivationObject(struct _LUID *a1, struct _LUID *a2)
{
  int v4; // edi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v11; // rcx
  struct tagKERNELHANDLETABLEENTRY *v12; // rbx
  CActivationObjectManager *v13; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _LUID v24; // [rsp+70h] [rbp+18h] BYREF
  struct _LUID v25; // [rsp+78h] [rbp+20h] BYREF

  v4 = 1;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v12 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          *((_QWORD *)v12 + 2) = 0LL;
          v11 = *(_QWORD *)v12;
          if ( !*(_DWORD *)(*(_QWORD *)v12 + 8LL) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, v9);
            v11 = *(_QWORD *)v12;
          }
          HMUnlockObject(v11);
        }
      }
    }
  }
  v25 = 0LL;
  v24 = 0LL;
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v25 = *a1;
  v13 = (CActivationObjectManager *)&a2[1];
  if ( &a2[1] < a2 || (unsigned __int64)v13 > MmUserProbeAddress )
    a2 = (struct _LUID *)MmUserProbeAddress;
  v24 = *a2;
  v14 = CActivationObjectManager::SetForegroundRedirectionLuid(v13, &v25, &v24);
  if ( v14 < 0 )
  {
    v4 = 0;
    v19 = RtlNtStatusToDosError(v14);
    UserSetLastError(v19, v20, v21, v22);
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v4;
}
