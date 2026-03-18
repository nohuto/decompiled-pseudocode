/*
 * XREFs of NtMITActivateInputProcessing @ 0x1C00B5940
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     UserActivateMITInputProcessing @ 0x1C00B5A44 (UserActivateMITInputProcessing.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITActivateInputProcessing(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // al
  struct tagKERNELHANDLETABLEENTRY *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rcx
  __int64 v20; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v10 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v10 = 0;
        }
        if ( v10 )
        {
          while ( 1 )
          {
            v11 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v11 + 2) = 0LL;
            v19 = *(_QWORD *)v11;
            if ( !*(_DWORD *)(*(_QWORD *)v11 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v8, v9);
              v19 = *(_QWORD *)v11;
            }
            HMUnlockObject(v19);
          }
        }
      }
    }
  }
  if ( CInputThreadBase::IsInputThread(gpInputThread) )
  {
    v15 = UserActivateMITInputProcessing(a1, &v20);
    v4 = v20;
  }
  else
  {
    v15 = 0;
    UserSetLastError(5LL, v12, v13, v14);
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *a2 = v4;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress, MmUserProbeAddress, v16, v17);
  return v15;
}
