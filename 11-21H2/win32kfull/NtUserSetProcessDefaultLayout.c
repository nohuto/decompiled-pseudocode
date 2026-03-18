/*
 * XREFs of NtUserSetProcessDefaultLayout @ 0x1C01FDD90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProcessDefaultLayout(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFFFF8) != 0 )
  {
    UserSetLastError(87LL, v2);
    v5 = 0LL;
  }
  else
  {
    *(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 824) = a1;
    v5 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
