/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1C01F21C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GreConfirmWindowResizeCommit @ 0x1C026CFAC (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  HWND *v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  v4 = 0;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v7 = (HWND *)v5;
  if ( v5 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v16 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v16;
      *((_QWORD *)&v16 + 1) = v7;
      HMLockObject(v7);
      CurrentProcess = PsGetCurrentProcess(v10, v9);
      if ( (unsigned int)IsProcessDwm(CurrentProcess) )
        v4 = GreConfirmWindowResizeCommit(*v7);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
