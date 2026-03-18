/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C01F3EA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // r8d
  _DWORD *v5; // rdx

  EnterSharedCrit(a1, a2, a3);
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 920LL);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_DWORD *)MmUserProbeAddress;
  *v5 = *v5;
  *a1 = v4;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return 1LL;
}
