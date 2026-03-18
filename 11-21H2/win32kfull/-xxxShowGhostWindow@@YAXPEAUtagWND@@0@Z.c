/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0144D6C
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C0144AD4 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C0211880 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00CA760 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00CBC78 (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C010CC94 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0145450 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01454C0 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C01455D8 (DwmAsyncGhostChange.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *this, struct tagWND *a2)
{
  BOOL v2; // ebx
  __int64 v5; // rcx
  int v6; // r12d
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r13d
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  void *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  void *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rbx
  void *v28; // rax
  int v29; // [rsp+40h] [rbp-30h]
  int v30; // [rsp+40h] [rbp-30h]
  __int64 v31; // [rsp+48h] [rbp-28h] BYREF
  __int128 v32; // [rsp+50h] [rbp-20h] BYREF

  v29 = 0;
  v2 = 0;
  v5 = *((_QWORD *)a2 + 5);
  v6 = 99;
  v7 = *(_BYTE *)(v5 + 31);
  if ( (v7 & 0x20) != 0 )
    v29 = 1;
  else
    v2 = (v7 & 1) != 0;
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 432), v9 == gpqForeground) && *(struct tagWND **)(v9 + 120) == a2 )
  {
    v10 = 96;
    *(_DWORD *)(*((_QWORD *)this + 2) + 488LL) |= 0x20u;
    v5 = *((_QWORD *)a2 + 5);
  }
  else
  {
    v10 = 112;
    v6 = 115;
  }
  if ( *(char *)(v5 + 26) < 0 )
  {
    SetOrClrWF(1, this, 0xA80u, 1);
    v5 = *((_QWORD *)a2 + 5);
  }
  v32 = *(_OWORD *)(v5 + 88);
  xxxEnableChildWindowDpiMessageX(this);
  v12 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v12 + 288) & 0xF) != 2 )
  {
    v31 = ValidateHmonitor(*(_QWORD *)(v12 + 256), v11);
    LogicalToPhysicalDPIRect(&v32, &v32, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL), &v31);
    if ( v2 )
      xxxSetWindowPos(this, 0LL, (unsigned int)v32, DWORD1(v32), DWORD2(v32) - v32, HIDWORD(v32) - DWORD1(v32), 20);
    else
      v6 = v10;
  }
  v13 = 3;
  if ( v29 )
  {
    v14 = 1LL;
    v15 = 7LL;
  }
  else
  {
    if ( !v2 )
      goto LABEL_16;
    v14 = 17LL;
    v15 = 3LL;
  }
  xxxMinMaximize((__int64)this, v15, v14);
  _CopyWindowCheckpoint(a2, this);
  v6 |= 2u;
LABEL_16:
  v30 = IsWindowDesktopComposed(a2);
  v17 = v30;
  if ( v30 )
  {
    v18 = (void *)ReferenceDwmApiPort(v16);
    DwmAsyncGhostChange(v18);
    v19 = *(_QWORD *)a2;
    v21 = (void *)ReferenceDwmApiPort(v20);
    DwmAsyncNotifyAnimationChange(v21, 0, v19);
    v22 = *(_QWORD *)this;
    v24 = (void *)ReferenceDwmApiPort(v23);
    DwmAsyncNotifyAnimationChange(v24, 0, v22);
    v17 = v30;
  }
  SetOrClrWF(0, this, 0xE01u, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x20) != 0 )
  {
    SetOrClrWF(0, a2, 0x420u, 1);
    SetOrClrWF(1, this, 0x420u, 1);
    v25 = 1LL;
  }
  else
  {
    v25 = (__int64)a2;
  }
  SetVisible(a2, 0x10u);
  if ( !gdwDeferWinEvent )
    v13 = 1;
  xxxWindowEvent(0x8003u, a2, 0, 0, v13);
  xxxSetWindowPos(this, v25, (unsigned int)v32, DWORD1(v32), DWORD2(v32) - v32, HIDWORD(v32) - DWORD1(v32), v6);
  xxxNotifyShellOfWindowSwap(a2, this);
  if ( v17 )
  {
    v27 = *(_QWORD *)this;
    v28 = (void *)ReferenceDwmApiPort(v26);
    DwmAsyncNotifyAnimationChange(v28, 1, v27);
  }
}
