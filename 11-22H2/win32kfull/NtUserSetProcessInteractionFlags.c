/*
 * XREFs of NtUserSetProcessInteractionFlags @ 0x1C01DC750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetProcessInteractionFlags(char a1, char a2, char a3)
{
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  EnterCrit(0LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
  {
    v11 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  *(_BYTE *)(CurrentProcessWin32Process + 1041) = a1;
  *(_BYTE *)(CurrentProcessWin32Process + 1040) = a2;
  *(_BYTE *)(CurrentProcessWin32Process + 1042) = a3;
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return 1LL;
}
