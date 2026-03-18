/*
 * XREFs of NtUserCreateActivationObject @ 0x1C00B80C0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C00917C4 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserCreateActivationObject(HWND a1, unsigned __int64 *a2, struct _LUID *a3)
{
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _OBJECT_ATTRIBUTES *v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 CurrentProcessWin32Process; // rax
  char v13; // al
  struct tagKERNELHANDLETABLEENTRY *v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  char v23; // [rsp+20h] [rbp-68h]
  struct _LUID v24; // [rsp+90h] [rbp+8h] BYREF

  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v6;
  v11 = 0;
  if ( v6 )
  {
    *((_DWORD *)v6 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v13 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v13 = 0;
        }
        if ( v13 )
        {
          while ( 1 )
          {
            v14 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v14 + 2) = 0LL;
            v21 = *(_QWORD *)v14;
            if ( !*(_DWORD *)(*(_QWORD *)v14 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v7, v9);
              v21 = *(_QWORD *)v14;
            }
            HMUnlockObject(v21);
          }
        }
      }
    }
  }
  v24 = 0LL;
  if ( !a1 )
  {
    v22 = 87LL;
LABEL_23:
    UserSetLastError(v22, v7, (__int64)v9, v10);
    goto LABEL_16;
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (unsigned __int64 *)MmUserProbeAddress;
  v15 = CActivationObjectManager::CreateActivationObject(
          (CActivationObjectManager *)&v24,
          v7,
          v9,
          v10,
          v23,
          a1,
          *a2,
          &v24);
  if ( v15 < 0 )
  {
    v22 = RtlNtStatusToDosError(v15);
    goto LABEL_23;
  }
  v11 = 1;
  v19 = MmUserProbeAddress;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct _LUID *)MmUserProbeAddress;
  *a3 = v24;
LABEL_16:
  UserSessionSwitchLeaveCrit(v19, v16, v17, v18);
  return v11;
}
