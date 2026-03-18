/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C01FBDE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C0211BD4 (RemoteRedrawRectangle.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF

  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  v11 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    *(_QWORD *)&v14 = __PAIR64__(a2, a1);
    *((_QWORD *)&v14 + 1) = __PAIR64__(a4, a3);
    RemoteRedrawRectangle(&v14);
    v12 = 0;
  }
  else
  {
    v12 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
