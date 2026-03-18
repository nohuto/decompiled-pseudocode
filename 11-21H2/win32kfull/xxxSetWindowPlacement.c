/*
 * XREFs of xxxSetWindowPlacement @ 0x1C01045D8
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C0104480 (NtUserSetWindowPlacement.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     UpdateCheckpoint @ 0x1C007C924 (UpdateCheckpoint.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C0104924 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C0104AE0 (WPUpdateCheckPointSettings.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C011A14C (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  struct tagMONITOR *v2; // r12
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  BOOL v9; // r14d
  __int64 DesktopWindow; // rax
  __int64 v11; // rdx
  struct tagPOINT v12; // rcx
  struct tagPOINT v13; // rax
  int v14; // ebx
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 updated; // rax
  __int64 v20; // r8
  unsigned int v21; // edx
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // ebx
  char v26; // al
  int v27; // ebx
  struct tagPOINT v29; // [rsp+40h] [rbp-29h] BYREF
  struct tagPOINT v30; // [rsp+48h] [rbp-21h] BYREF
  __int128 v31; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v32[16]; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v33; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v5 = 1;
  v9 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
    {
      v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v7 + 224) & 0x20) == 0 )
      {
        v8 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (((unsigned __int16)(v8 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                v7,
                                                                                v6) >> 8)) & 0x1FF) != 0 )
          v9 = 1;
      }
    }
  }
  v33 = *(struct tagRECT *)(a2 + 28);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v11 == DesktopWindow )
  {
    v2 = (struct tagMONITOR *)MonitorFromRect(&v33, 1u, 0);
    v31 = *(_OWORD *)GetMonitorWorkRect((__int64)&v31, (__int64)v2);
  }
  v12 = *(struct tagPOINT *)(a2 + 12);
  v29 = v12;
  if ( v12.x == -1 || v12.y == -1 )
    v5 = 0;
  v13 = *(struct tagPOINT *)(a2 + 20);
  v30 = v13;
  if ( v13.x == -1 || v13.y == -1 )
    v14 = 0;
  else
    v14 = 64;
  v15 = GetDesktopWindow((__int64)a1);
  v16 = DWORD1(v31);
  if ( v17 == v15 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v18 = *(_QWORD *)GetMonitorRect((__int64)v32, (__int64)v2);
    v33.bottom += v16 - HIDWORD(v18);
    v33.left += v31 - v18;
    v33.right += v31 - v18;
    v33.top += v16 - HIDWORD(v18);
    if ( v5 )
    {
      v29.x += v31 - v18;
      v29.y += v16 - HIDWORD(v18);
    }
    CheckPlacementBounds(&v33, &v29, &v30, v2);
  }
  if ( v9 )
    TransformRectBetweenCoordinateSpaces(&v33, &v33, a1, 0LL);
  updated = UpdateCheckpoint(a1);
  v20 = updated;
  if ( updated )
  {
    v21 = *(_DWORD *)(updated + 48) & 0xFFFFFFDF;
    *(struct tagRECT *)updated = v33;
    *(struct tagPOINT *)(updated + 32) = v29;
    v22 = (32 * v5) | v21;
    *(_DWORD *)(updated + 48) = v22;
    v23 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 1;
    *(_DWORD *)(updated + 48) = v23;
    *(struct tagPOINT *)(updated + 40) = v30;
    *(_DWORD *)(updated + 48) = v14 & 0xFFFFFFFD | v23 & 0xFFFFFFBD;
  }
  v24 = *((_QWORD *)a1 + 5);
  v25 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
  v26 = *(_BYTE *)(v24 + 31);
  if ( (v26 & 0x20) != 0 )
  {
    if ( (!v20 || (*(_DWORD *)(v20 + 48) & 1) != 0) && v5 )
    {
      if ( v9 )
        TransformPointBetweenCoordinateSpaces(&v29, &v29, a1, 0LL);
      xxxSetWindowPos(a1, 0LL, (unsigned int)v29.x, (unsigned int)v29.y, 0, 0, v25 | 1);
    }
  }
  else if ( (v26 & 1) != 0 )
  {
    if ( v20 )
    {
      if ( (*(_BYTE *)(v24 + 19) & 0x40) != 0 )
        *(_DWORD *)(v20 + 48) &= ~0x40u;
      if ( (*(_DWORD *)(v20 + 48) & 0x40) != 0 )
      {
        if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
        {
          v30.x += v31;
          v30.y += v16;
        }
        if ( v9 )
          TransformPointBetweenCoordinateSpaces(&v30, &v30, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v30.x, (unsigned int)v30.y, 0, 0, v25 | 1);
      }
    }
  }
  else
  {
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v33.left,
      (unsigned int)v33.top,
      v33.right - v33.left,
      v33.bottom - v33.top,
      v25);
  }
  if ( (*(_DWORD *)(a2 + 4) & 4) == 0 || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == *(_QWORD *)(gptiCurrent + 432LL) )
  {
    v27 = 0;
    xxxShowWindowEx((ULONG_PTR)a1, *(_WORD *)(a2 + 8), 0);
  }
  else
  {
    v27 = 1;
    _ShowWindowAsync(a1, 0LL, *(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 4));
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v27 )
    WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  return 1LL;
}
