/*
 * XREFs of NtUserDestroyActivationObject @ 0x1C0157540
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C01427AC (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserDestroyActivationObject(struct _LUID *a1)
{
  int v2; // edi
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // rcx
  struct tagKERNELHANDLETABLEENTRY *v10; // rbx
  CActivationObjectManager *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _LUID v22; // [rsp+58h] [rbp+10h] BYREF

  v2 = 1;
  v3 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v10 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          *((_QWORD *)v10 + 2) = 0LL;
          v9 = *(_QWORD *)v10;
          if ( !*(_DWORD *)(*(_QWORD *)v10 + 8LL) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v6, v7);
            v9 = *(_QWORD *)v10;
          }
          HMUnlockObject(v9);
        }
      }
    }
  }
  v22 = 0LL;
  v11 = (CActivationObjectManager *)&a1[1];
  if ( &a1[1] < a1 || (unsigned __int64)v11 > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v22 = *a1;
  v12 = CActivationObjectManager::DestroyActivationObject(v11, &v22);
  if ( v12 < 0 )
  {
    v2 = 0;
    v17 = RtlNtStatusToDosError(v12);
    UserSetLastError(v17, v18, v19, v20);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v2;
}
