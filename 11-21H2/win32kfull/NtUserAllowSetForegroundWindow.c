/*
 * XREFs of NtUserAllowSetForegroundWindow @ 0x1C0106750
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C01067C8 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 */

__int64 __fastcall NtUserAllowSetForegroundWindow(unsigned int a1)
{
  BOOL v2; // eax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rcx

  EnterCrit(0LL, 0LL);
  v2 = IAMThreadAccessGranted(gptiCurrent);
  v3 = _AllowSetForegroundWindow(a1, v2 ? 3 : 0) - 2;
  if ( !v3 )
  {
    v8 = 5LL;
    goto LABEL_6;
  }
  if ( v3 == 1 )
  {
    v8 = 87LL;
LABEL_6:
    UserSetLastError(v8, v4);
    v6 = 0LL;
    goto LABEL_4;
  }
  v6 = 1LL;
LABEL_4:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
