/*
 * XREFs of NtUserOpenDesktop @ 0x1C00CEEE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _OpenDesktop @ 0x1C00CEF78 (_OpenDesktop.c)
 */

__int64 __fastcall NtUserOpenDesktop(int a1, int a2, int a3)
{
  __int64 v5; // rbp
  int v7; // edx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = OpenDesktop(a1, v7, a2, a3, (__int64)&v13);
  if ( v8 < 0 )
  {
    v11 = RtlNtStatusToDosError(v8);
    UserSetLastError(v11, v12);
  }
  else
  {
    v5 = v13;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v5;
}
