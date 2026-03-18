/*
 * XREFs of CalcWindowFullScreen @ 0x1C006C0E8
 * Callers:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0090220 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     CalcWindowsFullScreen @ 0x1C01127D0 (CalcWindowsFullScreen.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     UnionRect @ 0x1C00C1640 (UnionRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

char __fastcall CalcWindowFullScreen(struct tagWND *a1)
{
  unsigned __int8 v2; // di
  int v3; // eax
  struct tagMONITOR *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF

  v12 = 0LL;
  v2 = 0;
  if ( !(unsigned int)IsTopLevelWindow(a1) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
  {
    v3 = *((_DWORD *)a1 + 80);
    if ( (v3 & 0x400) == 0 )
      return v3;
    v8 = 54LL;
    *((_DWORD *)a1 + 80) = v3 & 0xFFFFFBFF;
    goto LABEL_15;
  }
  v4 = _MonitorFromWindowInternal(a1, 2u, 0);
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v5 + 30) & 0xC4) == 0xC4 )
      v6 = *(_OWORD *)(v5 + 104);
    else
      v6 = *(_OWORD *)(v5 + 88);
    v11 = v6;
    v10 = *(_OWORD *)GetMonitorRectForWindow((__int64)&v10, (__int64)v4, a1);
    UnionRect(&v12, &v11, &v10);
    v7 = v12 - v11;
    if ( (_QWORD)v12 == (_QWORD)v11 )
      v7 = *((_QWORD *)&v12 + 1) - *((_QWORD *)&v11 + 1);
    v2 = v7 == 0;
  }
  LOBYTE(v3) = (*((_DWORD *)a1 + 80) & 0x400) != 0;
  if ( v2 != (_BYTE)v3 )
  {
    *((_DWORD *)a1 + 80) ^= 0x400u;
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 120LL) == a1 )
    {
      if ( v2 )
        EtwTraceForegroundWindowFullScreenStart(0LL);
      else
        EtwTraceForegroundWindowFullScreenStop(0LL);
    }
    v8 = (v2 ^ 1u) + 53;
LABEL_15:
    LOBYTE(v3) = PostShellHookMessages(v8, *(_QWORD *)a1);
  }
  return v3;
}
