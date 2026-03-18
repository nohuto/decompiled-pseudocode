/*
 * XREFs of xxxActiveWindowTracking @ 0x1C01DD47C
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00692F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00F1A94 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     IsForegroundLocked @ 0x1C00A6740 (IsForegroundLocked.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01CEC88 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01DCBDC (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(const struct tagWND *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  const struct tagWND *ActiveTrackPwnd; // rax
  struct tagWND *v5; // rdi
  __int64 ThreadWin32Thread; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL);
  v3 = *(_DWORD *)(v2 + 388);
  if ( (v3 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v2 + 388) = v3 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = GetActiveTrackPwnd(a1);
  v5 = ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( a1 != ActiveTrackPwnd )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v13 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v13;
    *((_QWORD *)&v13 + 1) = v5;
    HMLockObject(v5);
  }
  v7 = xxxSendMessage((ULONG_PTR)v5);
  v11 = v7;
  if ( v7 <= 0 )
    goto LABEL_9;
  if ( v7 > 2 )
  {
    if ( v7 != 4 )
    {
LABEL_9:
      v11 = 0;
      goto LABEL_10;
    }
LABEL_15:
    v11 = 1;
    goto LABEL_10;
  }
  if ( !xxxTrackingActivateWindow(v5) || v11 == 2 )
    goto LABEL_15;
LABEL_10:
  if ( a1 != v5 )
    ThreadUnlock1(v9, v8, v10);
  return v11;
}
