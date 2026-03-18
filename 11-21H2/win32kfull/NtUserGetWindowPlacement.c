/*
 * XREFs of NtUserGetWindowPlacement @ 0x1C007C550
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _GetWindowPlacement @ 0x1C007C658 (_GetWindowPlacement.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // r9
  _BYTE *v6; // rdx
  unsigned int WindowPlacement; // ebx
  __int128 v9; // [rsp+48h] [rbp-40h]

  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
  {
    v6 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v6 = (_BYTE *)MmUserProbeAddress;
    *v6 = *v6;
    v6[43] = v6[43];
    LODWORD(v9) = *(_DWORD *)a2;
    WindowPlacement = GetWindowPlacement(v5);
    if ( WindowPlacement )
    {
      *(_OWORD *)a2 = v9;
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_DWORD *)(a2 + 40) = 0;
    }
  }
  else
  {
    WindowPlacement = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return WindowPlacement;
}
