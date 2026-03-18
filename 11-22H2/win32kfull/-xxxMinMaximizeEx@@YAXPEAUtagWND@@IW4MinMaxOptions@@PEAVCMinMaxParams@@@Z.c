/*
 * XREFs of ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00123B4 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00C3EC4 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EBC7C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveDragRectFromMaximize@@YAXPEAUMOVESIZEDATA@@UtagPOINT@@AEBUtagRECT@@W4THRESHOLD_MARGIN_DIRECTION@@PEAU3@PEAI@Z @ 0x1C01EF7DC (-xxxMoveDragRectFromMaximize@@YAXPEAUMOVESIZEDATA@@UtagPOINT@@AEBUtagRECT@@W4THRESHOLD_MARGIN_DI.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x1C023C86C (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 * Callees:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008AF0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C000E188 (xxxSendMinRectMessages.c)
 *     DwmSyncNotifyMinimizing @ 0x1C001383C (DwmSyncNotifyMinimizing.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C0015DA8 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C0016AEC (DwmAsyncNotifyAnimationChange.c)
 *     InternalBeginDeferWindowPos @ 0x1C0028A94 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0029418 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004B2B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ClrFTrueVis @ 0x1C008C27C (ClrFTrueVis.c)
 *     ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C0096E48 (-RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00C39DC (GetMonitorWorkRectForWindow.c)
 *     ParkIcon @ 0x1C00C3A88 (ParkIcon.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E24 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E40 (-IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E5C (-IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C3E78 (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxShowOwnedWindows @ 0x1C00C4208 (xxxShowOwnedWindows.c)
 *     SetMinimize @ 0x1C00C4434 (SetMinimize.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x1C00C4D44 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     IsThreadDesktopComposed @ 0x1C00C4DDC (IsThreadDesktopComposed.c)
 *     IsVisible @ 0x1C00C719C (IsVisible.c)
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     GetRect @ 0x1C00C7BD0 (GetRect.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessage @ 0x1C00D34E8 (PostIAMShellHookMessage.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00D3B08 (IsToplevelWindowDesktopComposed.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00E19D0 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0122FB0 (xxxEndDeferWindowPosEx.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z @ 0x1C01EA664 (-RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z.c)
 *     xxxFlushPalette @ 0x1C0214E20 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C0224A30 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  __int128 *v7; // r12
  __int64 v8; // rax
  char v9; // cl
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // r15d
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rbx
  void *v20; // rax
  struct tagWND *v21; // rdx
  __int64 v22; // rsi
  int v23; // ebx
  __int64 v24; // rdx
  int v25; // edx
  int v26; // eax
  __int128 v27; // xmm6
  __int128 v28; // xmm7
  int v29; // r13d
  __int64 v30; // r15
  int v31; // edx
  char v32; // cl
  struct tagWND *v33; // rcx
  __int64 v34; // rax
  int v35; // edx
  char v36; // dl
  int v37; // ebx
  struct tagWND *v38; // rax
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  void *v45; // r14
  int v46; // eax
  _DWORD *v47; // r14
  struct tagWND *i; // rcx
  struct _DEVICE_OBJECT *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int v58; // edx
  unsigned int v59; // edx
  int v60; // edx
  struct tagWND *v61; // rcx
  unsigned int v62; // edx
  int v63; // edx
  unsigned int v64; // edx
  bool v65; // al
  int v66; // edx
  char v67; // r14
  char v68; // dl
  __int64 v69; // rdx
  __int64 j; // rsi
  __int64 DesktopWindow; // rax
  char v72; // cl
  __int64 v73; // rcx
  char v74; // si
  __int64 v75; // rsi
  char v76; // cl
  __int64 v77; // rax
  __int64 v78; // rcx
  char v79; // r9
  __int64 v80; // r10
  int v81; // r11d
  __int128 v82; // xmm6
  __int64 v83; // rcx
  int v84; // edx
  struct tagWND *v85; // rcx
  __int64 v86; // rsi
  unsigned __int64 v87; // r8
  void *v88; // r15
  __int64 *v89; // r8
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v94; // r11
  unsigned __int64 v95; // xmm0_8
  unsigned __int64 v96; // r8
  unsigned int v97; // edx
  __int64 v98; // rax
  unsigned int v99; // ecx
  __int64 v100; // rcx
  __int64 v101; // rbx
  void *v102; // rax
  bool v103; // [rsp+50h] [rbp-B0h]
  char v104; // [rsp+51h] [rbp-AFh]
  char v106; // [rsp+60h] [rbp-A0h]
  char v107; // [rsp+61h] [rbp-9Fh]
  int v108; // [rsp+64h] [rbp-9Ch]
  char v109; // [rsp+68h] [rbp-98h]
  __int128 v110; // [rsp+70h] [rbp-90h]
  int v111; // [rsp+80h] [rbp-80h]
  int v112; // [rsp+84h] [rbp-7Ch]
  int v113; // [rsp+88h] [rbp-78h]
  unsigned int v114; // [rsp+8Ch] [rbp-74h]
  BOOL v115; // [rsp+90h] [rbp-70h]
  int v116; // [rsp+94h] [rbp-6Ch]
  int v117; // [rsp+98h] [rbp-68h]
  int v118; // [rsp+9Ch] [rbp-64h]
  int v119; // [rsp+A0h] [rbp-60h]
  __int64 v120; // [rsp+A8h] [rbp-58h]
  __int128 v121; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v122; // [rsp+C0h] [rbp-40h]
  __int128 v123; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v124; // [rsp+D8h] [rbp-28h]
  __int128 v125; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v126; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v127; // [rsp+100h] [rbp+0h]
  __int128 v128; // [rsp+110h] [rbp+10h]
  __int64 v129; // [rsp+120h] [rbp+20h]

  v4 = *((_QWORD *)a1 + 13);
  v119 = 0;
  v116 = 0;
  v108 = 0;
  v118 = 0;
  v117 = 0;
  v115 = 0;
  v113 = 0;
  v7 = *(__int128 **)(a4 + 8);
  v112 = 0;
  v124 = 0LL;
  v122 = 0LL;
  v103 = 0;
  v129 = 0LL;
  v114 = 0;
  v8 = *((_QWORD *)a1 + 5);
  v123 = 0LL;
  v109 = a3;
  v121 = 0LL;
  v127 = 0LL;
  v111 = 1;
  v128 = 0LL;
  v9 = *(_BYTE *)(v8 + 31);
  v107 = v9 & 0x20;
  v120 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)&v126.left = *(_QWORD *)a4;
  v106 = v9 & 1;
  v110 = 0LL;
  v125 = 0LL;
  if ( !v7 || (v104 = 1, (a3 & 8) == 0) )
    v104 = 0;
  if ( (a3 & 0x20000) != 0 )
    return PostEventMessageEx(
             *((struct tagTHREADINFO **)a1 + 2),
             *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
             0x17u,
             a1,
             0,
             a2,
             a3 & 0xFFFFFFFFFFFDFFFFuLL,
             0LL);
  v11 = ((a3 & 0x20) << 15) | 0x10;
  if ( (a3 & 0x10) == 0 )
    v11 = (a3 & 0x20) << 15;
  v12 = v11 | 4;
  if ( (a3 & 0x40) == 0 )
    v12 = v11;
  v13 = v12 | 0x80000;
  if ( (a3 & 0x80u) == 0 )
    v13 = v12;
  v14 = v13 | 0x400000;
  if ( (a3 & 0x100) == 0 )
    v14 = v13;
  v15 = v14 | 0x800000;
  if ( (a3 & 0x200) == 0 )
    v15 = v14;
  v16 = v15 | 0x200000;
  if ( (a3 & 0x400) == 0 )
    v16 = v15;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v109 = v17;
    if ( (*((_DWORD *)a1 + 80) & 0x40000000) != 0 )
    {
      v111 = 1;
    }
    else
    {
      v111 = v17 & 0x10000;
      if ( (v17 & 0x10000) == 0 )
      {
        v111 = 0;
        if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
        {
          v19 = *(_QWORD *)a1;
          v20 = (void *)ReferenceDwmApiPort(v18);
          DwmAsyncNotifyAnimationChange(v20, 0, v19);
          v111 = 0;
        }
      }
    }
  }
  GetRect(a1, &v125, 66LL);
  if ( (v109 & 4) != 0 )
    result = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
  else
    result = CkptRestore(a1);
  v22 = result;
  if ( !result )
    goto LABEL_237;
  v23 = v16;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0
    && CRecalcProp::s_xxxOnWindowRestoreFromMinimized(
         a1,
         v104,
         (bool *)(a4 + 28),
         (unsigned int *)(a4 + 24),
         (struct tagRECT *)(a4 + 32)) )
  {
    v23 = v16 | 0x80000;
  }
  WindowMargins::OnBecomingMinMaximized(a1, v21);
  v24 = *(_QWORD *)(v4 + 40);
  if ( (*(_BYTE *)(v24 + 26) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
  {
    v25 = *(_DWORD *)(v24 + 96);
    v26 = v25 - DWORD2(v125);
    DWORD2(v125) = v25 - v125;
    LODWORD(v125) = v26;
    v116 = 1;
  }
  if ( v104 )
  {
    v27 = *v7;
    *(_DWORD *)(v22 + 48) &= 0xFFFFFFE1;
  }
  else
  {
    v27 = *(_OWORD *)v22;
  }
  v28 = *(_OWORD *)(v22 + 16);
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0 )
  {
    v29 = a2;
    result = xxxCallHook(1, *(_QWORD *)a1, a2, 5);
    if ( (_DWORD)result )
      goto LABEL_237;
  }
  else
  {
    v29 = a2;
  }
  if ( v29 == 204 )
  {
    v23 |= 0x14u;
    if ( (*(_DWORD *)(v22 + 48) & 4) != 0 )
    {
      v29 = 2;
      v30 = gptiCurrent;
      goto LABEL_44;
    }
    v29 = 1;
    goto LABEL_48;
  }
  v30 = gptiCurrent;
  if ( v29 == 1 )
    goto LABEL_48;
  if ( v29 != 2 )
  {
    if ( v29 == 3 )
    {
LABEL_50:
      v34 = *((_QWORD *)a1 + 5);
      v35 = v23;
      if ( v29 == 3 )
      {
        result = ValidateHmonitorNoRip(*(_QWORD *)(v34 + 256));
        v36 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v36 & 1) != 0
          && (!*(_QWORD *)&v126.left || result == *(_QWORD *)&v126.left)
          && (v36 & 0x10) != 0
          && (v109 & 2) == 0 )
        {
          goto LABEL_237;
        }
        v37 = v23 | 0x8000;
        v113 = 1;
        if ( (v36 & 0x20) != 0 )
          *(_DWORD *)(v22 + 48) |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1);
      }
      else
      {
        v72 = *(_BYTE *)(v34 + 31);
        v37 = v23 | 0x8000;
        if ( (v72 & 0x21) == 0 )
          v37 = v35;
        if ( (v72 & 1) != 0 )
          v113 = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        result = xxxSendMessage(a1, 19LL, 0LL, 0LL);
        if ( !result )
          goto LABEL_237;
        v112 = 1;
        v117 = 1;
        if ( (v37 & 0x10) == 0 )
        {
          v118 = 1;
          v115 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0;
        }
        v37 |= 0x100u;
      }
      else
      {
        v112 = 3;
      }
      if ( v29 == 3 )
      {
        *(_QWORD *)&v110 = v128;
        DWORD2(v110) = DWORD2(v127) + v128;
        HIDWORD(v110) = DWORD1(v128) + HIDWORD(v127);
        SetOrClrWF(1LL, a1, 3841LL, 1LL);
        RemoveSemiMaximizedState(a1);
      }
      else
      {
        if ( v29 == 12 || (unsigned int)(v29 - 13) < 2 )
        {
          v110 = v28;
          RestoreSemimaximizedState(a1, (const struct tagCHECKPOINT *)v22);
        }
        else
        {
          v110 = v27;
        }
        SetOrClrWF(0LL, a1, 3841LL, 1LL);
      }
      v73 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v73 + 31) & 0x20) != 0 )
      {
        if ( (*(_BYTE *)(v73 + 21) & 2) != 0 )
          v74 = 0;
        else
          v74 = IsTrayWindow(a1, 1LL);
        SetMinimize(a1, 0);
        v114 = 23;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0
          && v74 != (unsigned __int8)IsTrayWindow(a1, 1LL)
          && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
        {
          v75 = *(_QWORD *)a1;
          if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
            xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
            PostShellHookMessagesEx(2uLL, v75, 0LL);
        }
        v103 = 0;
        v76 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v76 & 0xC0) != 0x40 && (v76 & 0x10) != 0 )
        {
          v77 = *((_QWORD *)a1 + 2);
          if ( *(_DWORD *)(v77 + 908) == 1 )
          {
            v78 = *(_QWORD *)(v77 + 432);
            if ( v78 != gpqForeground
              && ((v37 & 0x10) == 0 || *(struct tagWND **)(v78 + 128) == a1)
              && (v109 & 0x40) == 0 )
            {
              xxxSetForegroundWindowWithOptions((__int64)a1, 6u, 4097, 0);
            }
          }
        }
      }
      v23 = v37 | 0x20;
      goto LABEL_167;
    }
    if ( v29 == 4 )
    {
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 128LL) )
        v23 |= 0x10u;
      goto LABEL_78;
    }
    if ( v29 != 6 && v29 != 7 )
    {
      if ( v29 != 9 )
        goto LABEL_167;
LABEL_78:
      v29 = 1;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        v39 = *(_DWORD *)(v22 + 48);
        if ( (v39 & 2) != 0 )
        {
          v29 = 3;
          goto LABEL_50;
        }
        if ( (v39 & 0x18) == 0x18 )
        {
          v29 = 12;
          goto LABEL_50;
        }
        if ( (v39 & 8) != 0 )
        {
          v29 = 14;
          goto LABEL_50;
        }
        if ( (v39 & 0x10) != 0 )
        {
          v29 = 13;
          goto LABEL_50;
        }
      }
LABEL_48:
      if ( IsSemiMaximized(a1) )
        RemoveSemiMaximizedState(v33);
      goto LABEL_50;
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 128LL) )
      v23 |= 0x10u;
    if ( (v109 & 0x40) == 0 )
    {
      v38 = CalcMinZOrder(a1);
      if ( v38 )
      {
        if ( !v120 )
          v120 = *(_QWORD *)v38;
      }
      else
      {
        v23 |= 4u;
      }
    }
  }
LABEL_44:
  v31 = 1;
  v108 = 1;
  result = *((_QWORD *)a1 + 5);
  v32 = *(_BYTE *)(result + 31);
  if ( (v32 & 0x20) == 0 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
    {
      v45 = (void *)ReferenceDwmApiPort(v40);
      if ( v45 )
      {
        UserSessionSwitchLeaveCrit(v42, v41, v43, v44);
        DwmSyncNotifyMinimizing(v45, *(_QWORD *)a1);
        EnterCrit(1LL, 0LL);
      }
    }
    v46 = *(_DWORD *)(v22 + 48);
    v112 = 2;
    if ( (v46 & 1) == 0 )
    {
      v46 &= ~0x20u;
      *(_DWORD *)(v22 + 48) = v46;
    }
    v47 = (_DWORD *)(v22 + 32);
    if ( (v46 & 0x20) == 0 )
    {
      ParkIcon((__int64)a1, (unsigned int *)(v22 + 32));
      *(_DWORD *)(v22 + 48) |= 0x20u;
    }
    LODWORD(v110) = *v47;
    DWORD1(v110) = *(_DWORD *)(v22 + 36);
    DWORD2(v110) = *(_DWORD *)(gpsi + 2124LL) + *v47;
    HIDWORD(v110) = DWORD1(v110) + *(_DWORD *)(gpsi + 2128LL);
    xxxShowOwnedWindows(a1, 1LL, 0LL);
    for ( i = *(struct tagWND **)(*(_QWORD *)(v30 + 432) + 120LL); i; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      if ( i == a1 )
      {
        *(_QWORD *)&v121 = *(_QWORD *)(v30 + 416);
        *(_QWORD *)(v30 + 416) = &v121;
        *((_QWORD *)&v121 + 1) = i;
        HMLockObject(i);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          v51 = *((_QWORD *)a1 + 13);
          *(_QWORD *)&v123 = *(_QWORD *)(v30 + 416);
          *(_QWORD *)(v30 + 416) = &v123;
          *((_QWORD *)&v123 + 1) = v51;
          if ( v51 )
            HMLockObject(v51);
          xxxSetFocus(*((struct tagWND **)a1 + 13), v49, v50);
          ThreadUnlock1(v53, v52, v54);
        }
        else
        {
          xxxSetFocus(0LL, v49, v50);
        }
        ThreadUnlock1(v56, v55, v57);
        break;
      }
    }
    v58 = *(_DWORD *)(v22 + 48) & 0xFFFFFEFF | (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40));
    *(_DWORD *)(v22 + 48) = v58;
    if ( v104 )
      goto LABEL_117;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    {
      v113 = 1;
      v59 = v58 & 0xFFFFFFE5 | 2;
LABEL_116:
      *(_DWORD *)(v22 + 48) = v59;
      goto LABEL_117;
    }
    if ( IsVerticallyMaximized(a1) )
    {
      v62 = v60 | 8;
    }
    else
    {
      if ( IsLeftSemiMaximized(v61) )
      {
        v64 = v63 & 0xFFFFFFE7 | 8;
LABEL_114:
        *(_DWORD *)(v22 + 48) = v64;
        RemoveSemiMaximizedState(v61);
LABEL_117:
        result = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(result + 21) & 2) != 0 )
        {
          v67 = 0;
        }
        else
        {
          result = IsTrayWindow(a1, 1LL);
          v67 = result;
          v103 = result;
        }
        v68 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v68 & 0x20) == 0 )
        {
          SetMinimize(a1, 1);
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          v114 = 22;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
            v103 = v67 != (char)IsTrayWindow(a1, 1LL);
          for ( j = *((_QWORD *)a1 + 14); j; j = *(_QWORD *)(j + 88) )
            ClrFTrueVis(j);
          v23 |= 0x8120u;
          DesktopWindow = GetDesktopWindow(a1, v69);
          v31 = 1;
          if ( *((_QWORD *)a1 + 13) == DesktopWindow )
            v119 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x20;
LABEL_168:
          if ( (v109 & 1) == 0 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
            {
              if ( v31 )
                v23 |= 0x40u;
              if ( !(unsigned int)IsVisible(a1)
                || (v81 & 0x10000) == 0
                || !v112
                || (v79 & 0x40) != 0 && (*(_BYTE *)(v80 + 23) & 0x10) != 0 )
              {
                goto LABEL_188;
              }
              v82 = 0LL;
              if ( v116 )
              {
                v82 = v110;
                v83 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
                v84 = *(_DWORD *)(v83 + 96) - v110;
                LODWORD(v110) = *(_DWORD *)(v83 + 96) - DWORD2(v110);
                DWORD2(v110) = v84;
              }
              if ( v112 == 3 || !(unsigned __int8)IsTrayWindow(a1, 1LL) )
              {
                v85 = a1;
              }
              else
              {
                v126 = 0LL;
                xxxSendMinRectMessages((unsigned __int64 *)a1, (__int64)&v126);
                if ( IsRectEmptyInl(&v126) )
                  goto LABEL_185;
                v85 = a1;
              }
              xxxDrawAnimatedRects(v85);
LABEL_185:
              if ( v116 )
                v110 = v82;
              goto LABEL_188;
            }
            v23 |= 0x40u;
          }
LABEL_188:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 && v103 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
          {
            v86 = *(_QWORD *)a1;
            if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
              xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
            if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
              PostShellHookMessagesEx(1uLL, v86, 0LL);
          }
          v88 = InternalBeginDeferWindowPos(1u);
          if ( v88 )
          {
            v89 = v120 ? (__int64 *)HMValidateHandleNoSecure(v120, 1LL) : 0LL;
            v87 = _DeferWindowPos(
                    (__int64)v88,
                    (__int64)a1,
                    v89,
                    v110,
                    DWORD1(v110),
                    DWORD2(v110) - (int)v110,
                    HIDWORD(v110) - DWORD1(v110),
                    v23,
                    0);
            if ( v87 )
            {
              if ( v113 && (unsigned int)IsTopLevelWindow(a1) )
              {
                v90 = *((_QWORD *)a1 + 5);
                if ( (*(_BYTE *)(v90 + 31) & 1) != 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(v87 + 40) + 112LL) = 2LL;
                }
                else if ( (*(_BYTE *)(v90 + 21) & 8) != 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(v87 + 40) + 112LL) = 1LL;
                }
              }
              xxxEndDeferWindowPosEx((struct tagSMWP *)v87);
            }
          }
          if ( v114 )
            xxxWindowEvent(v114, 1);
          *((_DWORD *)a1 + 80) &= ~0x200000u;
          v91 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v91 + 31) & 1) != 0 )
          {
            v92 = ValidateHmonitorNoRip(*(_QWORD *)(v91 + 256));
            MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v125, v92, a1);
            v91 = *((_QWORD *)a1 + 5);
            v94 = *(_QWORD *)(v91 + 88);
            v87 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
            v95 = _mm_srli_si128(*(__m128i *)(v91 + 88), 8).m128i_u64[0];
            if ( (int)v95 - (int)v94 < (int)(v87 - MonitorWorkRectForWindow->m128i_i64[0]) )
            {
              v87 = (unsigned int)(HIDWORD(v87) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
              if ( HIDWORD(v95) - HIDWORD(v94) < (int)v87 )
                *((_DWORD *)a1 + 80) |= 0x200000u;
            }
          }
          if ( v29 == 2
            && (*(_BYTE *)(v91 + 21) & 2) == 0
            && (*(_BYTE *)(v91 + 31) & 0x10) != 0
            && (*(_BYTE *)(v91 + 30) & 0x40) != 0 )
          {
            if ( *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL) )
            {
              v96 = 1LL;
              v97 = 38;
            }
            else
            {
              v96 = 0LL;
              v97 = 15;
            }
            PostMessage(a1, v97, v96, 0LL);
          }
          if ( v117 )
            xxxShowOwnedWindows(a1, 3LL, 0LL);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0
            && v29 == 6
            && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1, v91)
            && !(unsigned int)xxxActivateOnMinimize(a1) )
          {
            xxxActivateWindowWithOptions(a1, 2LL, 49LL, 1LL);
          }
          if ( v118 )
            xxxSetFocus(a1, (PDEVICE_OBJECT)v91, v87);
          if ( v115 )
            xxxSendMessage(a1, 6LL, 1LL, 0LL);
          if ( v119 )
            xxxFlushPalette(a1, v91, v87);
          v98 = *((_QWORD *)a1 + 5);
          v99 = *(unsigned __int8 *)(v98 + 31);
          if ( v106 != (*(_BYTE *)(v98 + 31) & 1) || (result = v107 != 0, (_DWORD)result != ((v99 >> 5) & 1)) )
            result = PostIAMShellHookMessage(40LL, *(_QWORD *)a1);
          goto LABEL_237;
        }
        if ( (v68 & 0x10) != 0 )
          goto LABEL_237;
        v23 |= 0x17u;
        v110 = 0LL;
LABEL_167:
        v31 = v108;
        goto LABEL_168;
      }
      v65 = IsRightSemiMaximized(v61);
      v62 = v66 & 0xFFFFFFF7;
      if ( !v65 )
      {
        v59 = v62 & 0xFFFFFFEF;
        goto LABEL_116;
      }
    }
    v64 = v62 | 0x10;
    goto LABEL_114;
  }
  if ( (v32 & 0x10) == 0 )
  {
    v23 |= 0x17u;
    goto LABEL_168;
  }
LABEL_237:
  if ( !v111 )
  {
    result = IsToplevelWindowDesktopComposed(a1);
    if ( (_DWORD)result )
    {
      v101 = *(_QWORD *)a1;
      v102 = (void *)ReferenceDwmApiPort(v100);
      return DwmAsyncNotifyAnimationChange(v102, 1, v101);
    }
  }
  return result;
}
