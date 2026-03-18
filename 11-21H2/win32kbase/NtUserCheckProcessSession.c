/*
 * XREFs of NtUserCheckProcessSession @ 0x1C009DA90
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _DwmCheckProcessSession @ 0x1C009DB00 (_DwmCheckProcessSession.c)
 */

__int64 __fastcall NtUserCheckProcessSession(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  PVOID CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v17; // eax

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  CurrentProcess = (PVOID)PsGetCurrentProcess(v3, v2, v4, v5);
  v10 = 0LL;
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
    v17 = DwmCheckProcessSession(a1);
    if ( v17 >= 0 )
    {
      v10 = 1LL;
      goto LABEL_5;
    }
    v11 = RtlNtStatusToDosError(v17);
  }
  else
  {
    v11 = 5LL;
  }
  UserSetLastError(v11, v7, v8, v9);
LABEL_5:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v10;
}
