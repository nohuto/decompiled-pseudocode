/*
 * XREFs of NtUserPostKeyboardInputMessage @ 0x1C015FED0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C003E4F0 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionPostKeyboardInputMessage @ 0x1C020A7D4 (ApiSetEditionPostKeyboardInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserPostKeyboardInputMessage(int a1, ULONG64 a2, __int64 a3)
{
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  struct tagTHREADINFO *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  struct tagKERNELHANDLETABLEENTRY *v14; // rbx
  PVOID CurrentProcess; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _BOOL8 v19; // rdx
  int v21; // edx
  int v22; // r8d
  __int16 v23; // r9
  __int16 v24; // r10
  __int16 v25; // r11
  unsigned int v26; // ebx
  ULONG v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int128 v35; // [rsp+68h] [rbp-40h]
  int v36; // [rsp+78h] [rbp-30h]

  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0);
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        v8 = gptiCurrent;
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v14 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v14 + 2) = 0LL;
            v13 = *(_QWORD *)v14;
            if ( !*(_DWORD *)(*(_QWORD *)v14 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v7, v9);
              v13 = *(_QWORD *)v14;
            }
            HMUnlockObject(v13);
          }
        }
      }
    }
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7, v9, v10);
  v19 = 0LL;
  if ( CurrentProcess )
    v19 = CurrentProcess == g_pepDwm;
  if ( v19 )
  {
    if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v35 = *(_OWORD *)a2;
    v36 = *(_DWORD *)(a2 + 16);
    LOBYTE(v21) = CKeyboardProcessor::HandleLeftRightVKs(*(_QWORD *)(a2 + 8));
    v26 = ApiSetEditionPostKeyboardInputMessage(a1, v21, v22, (unsigned __int16)v35, v25, v23, v36, v22, v24, a3);
    v27 = RtlNtStatusToDosError(v26);
    UserSetLastError(v27, v28, v29, v30);
    UserSessionSwitchLeaveCrit(v32, v31, v33, v34);
    return v26;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v16, v19, v17, v18);
    return 3221225506LL;
  }
}
