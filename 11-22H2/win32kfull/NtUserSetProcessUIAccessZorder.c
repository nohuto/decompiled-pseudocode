/*
 * XREFs of NtUserSetProcessUIAccessZorder @ 0x1C01DC880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserSetProcessUIAccessZorder()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcessWin32Process; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  EnterCrit(0LL, 0LL);
  if ( (int)RtlQueryElevationFlags(&v6) >= 0 && (v6 & 1) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process )
    {
      v1 = -*(_QWORD *)CurrentProcessWin32Process;
      v0 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v0;
    }
    *(_DWORD *)(CurrentProcessWin32Process + 816) |= 2u;
  }
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  return 1LL;
}
