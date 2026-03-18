/*
 * XREFs of NtUserAllowSetForegroundWindow @ 0x1C004B190
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C004C34C (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserAllowSetForegroundWindow(unsigned int a1)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v10; // rcx

  EnterCrit(0LL, 0LL);
  LOBYTE(v2) = IAMThreadAccessGranted(gptiCurrent);
  v3 = _AllowSetForegroundWindow(a1, v2 != 0 ? 3 : 0) - 2;
  if ( !v3 )
  {
    v10 = 5LL;
LABEL_6:
    UserSetLastError(v10);
    v8 = 0LL;
    goto LABEL_4;
  }
  if ( v3 == 1 )
  {
    v10 = 87LL;
    goto LABEL_6;
  }
  v8 = 1LL;
LABEL_4:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
