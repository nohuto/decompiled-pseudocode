/*
 * XREFs of ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000F42C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C005B484 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x1C00A2C00 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C00C3000 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C00C3038 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00C39DC (GetMonitorWorkRectForWindow.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E24 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E40 (-IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E5C (-IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     _MonitorFromPoint @ 0x1C00D03B0 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     GetCaptionHeight @ 0x1C00ECE00 (GetCaptionHeight.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00F178C (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetScreenRectForWindow @ 0x1C0157A74 (GetScreenRectForWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A6410 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E9ED8 (-HitTargetAndMonitorFromPoint@@YA_NUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRE.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1C01ED7EC (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01EE980 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ss @ 0x1C01F297C (WPP_RECORDER_AND_TRACE_SF_ss.c)
 *     ?AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ @ 0x1C022DE54 (-AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DE9C (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DED8 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DF04 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct MOVESIZEDATA *a2, int a3, int a4)
{
  char v8; // dl
  int HasForeground; // eax
  int v10; // ecx
  char v11; // dl
  char v12; // r11
  char v13; // r8
  int WindowState; // eax
  const char *StateString; // rax
  __int64 v16; // r10
  char v17; // r8
  char v18; // r11
  __int64 DesktopWindow; // rax
  __int64 v20; // rdx
  __int64 DispInfo; // rax
  int *v22; // rdi
  __int64 v23; // rcx
  struct tagRECT v24; // xmm0
  __int64 TopLevelWindow; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r12d
  __int64 v29; // r15
  __int128 v30; // xmm0
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // edx
  unsigned int v37; // r8d
  BOOL v38; // eax
  int v39; // r8d
  char v40; // dl
  char v41; // r8
  const struct tagWND *v42; // rdx
  int v43; // ecx
  int v44; // ecx
  char v45; // r8
  __int128 v46; // xmm0
  _DWORD *v47; // r15
  int v48; // edi
  unsigned int v49; // eax
  bool v50; // al
  const struct tagWND *v51; // rdx
  WindowArrangement *v52; // rcx
  int v53; // r8d
  _BYTE *v54; // rcx
  int v55; // ecx
  bool v56; // al
  WindowArrangement *v57; // rcx
  int v58; // r8d
  int v59; // r10d
  _BYTE *v60; // rcx
  int v61; // eax
  unsigned int v62; // edx
  const struct tagWND *v63; // rdx
  WindowArrangement *v64; // rcx
  int v65; // r10d
  int v66; // r9d
  int v67; // edx
  __int64 v68; // rcx
  int v69; // r8d
  __int64 v70; // r9
  int v71; // eax
  __int128 *Prop; // rdi
  int v73; // edx
  int v74; // r8d
  unsigned int v75; // edx
  __int128 v76; // xmm0
  __int64 v77; // rcx
  bool v78; // al
  int v79; // edx
  int v80; // r10d
  int v81; // r9d
  const struct tagWND *v82; // rcx
  int v83; // edx
  const struct tagWND *v84; // rcx
  int v85; // r10d
  int v86; // r11d
  int v87; // edx
  int v88; // edx
  int v89; // r10d
  int v90; // r11d
  int v91; // edx
  char v92; // dl
  char v93; // r8
  int v94; // eax
  unsigned int v95; // edi
  int v96; // ecx
  int v97; // ecx
  char v98; // dl
  char v99; // r8
  const char *v100; // rdi
  const char *v101; // rax
  int v102; // eax
  __int64 v103; // rax
  int v104; // ecx
  int v105; // r9d
  int v106; // ecx
  int v107; // eax
  unsigned int v108; // edx
  unsigned int v109; // edx
  unsigned int v110; // edx
  int v111; // r8d
  char v112; // dl
  const char *v113; // rax
  bool v114; // cf
  int v115; // eax
  int v116; // eax
  char v117; // dl
  char v118; // r8
  int v119; // [rsp+20h] [rbp-89h]
  int v120; // [rsp+28h] [rbp-81h]
  int v121; // [rsp+30h] [rbp-79h]
  int v122; // [rsp+38h] [rbp-71h]
  __int64 v123; // [rsp+40h] [rbp-69h]
  __int64 v124; // [rsp+48h] [rbp-61h]
  unsigned __int64 v125; // [rsp+70h] [rbp-39h]
  __int128 v126; // [rsp+80h] [rbp-29h] BYREF
  struct tagRECT v127; // [rsp+90h] [rbp-19h] BYREF
  struct tagRECT v128; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v129; // [rsp+B0h] [rbp+7h] BYREF

  v128 = 0LL;
  v126 = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v123 = *(_QWORD *)a1;
    WPP_RECORDER_AND_TRACE_SF_qddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control,
      v119,
      1u,
      0x4Au,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
  }
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground
    || (HasForeground = CoreWindowProp::CompositeAppHasForeground(a1), v10 = 0, HasForeground) )
  {
    v10 = 16;
  }
  *((_DWORD *)a2 + 50) = v10 | *((_DWORD *)a2 + 50) & 0xFFFFFFEF;
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0x4Bu,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v12 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v13 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v13 = 0;
  }
  if ( v12 || v13 )
  {
    WindowState = AdvancedWindowPos::GetWindowState(a1);
    StateString = AdvancedWindowPos::GetStateString(WindowState);
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(v16 + 24),
      v18,
      v17,
      (__int64)gFullLog,
      5u,
      1u,
      0x4Cu,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      StateString);
  }
  *((_DWORD *)a2 + 72) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v20 == DesktopWindow )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x88) != 0 || *(_DWORD *)*gpDispInfo > 1u )
    {
      v22 = (int *)((char *)a2 + 88);
      *(__m128i *)((char *)a2 + 88) = *GetScreenRectForWindow((__m128i *)&v127, a1);
      v24 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    }
    else
    {
      DispInfo = GetDispInfo(gpDispInfo);
      v22 = (int *)((char *)a2 + 88);
      *(_OWORD *)((char *)a2 + 88) = *GetMonitorWorkRectForWindow(&v127, *(_QWORD *)(DispInfo + 96), a1);
      v24 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v23) + 96) + 40LL) + 44LL);
    }
    v128 = v24;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)(*(_QWORD *)(v20 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)a2 + 88, (char *)a2 + 88, a1, *((_QWORD *)a1 + 13));
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v26 )
      {
        v129 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v26, &v129) )
          IntersectRect((_DWORD *)a2 + 22, (int *)a2 + 22, (int *)&v129);
      }
    }
    v22 = (int *)((char *)a2 + 88);
    v128 = *(struct tagRECT *)((char *)a2 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v128, &v128, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
  }
  v27 = *((_QWORD *)a1 + 13);
  v28 = SHIWORD(a4);
  LODWORD(v125) = (__int16)a4;
  HIDWORD(v125) = SHIWORD(a4);
  v29 = *(_QWORD *)(*(_QWORD *)(v27 + 40) + 168LL);
  if ( v29 )
  {
    v30 = *(_OWORD *)((char *)a2 + 120);
    v31 = v125;
    *(_QWORD *)&v126 = v125;
    v129 = v30;
    TransformRectBetweenCoordinateSpaces(&v129, &v129, v27, a1);
    TransformPointBetweenCoordinateSpaces(&v126, &v126, *((_QWORD *)a1 + 13), a1);
    v32 = GreRectInRegion(v29, &v129);
    v33 = DWORD1(v126);
    v34 = (unsigned int)v126;
    *((_DWORD *)a2 + 50) = (v32 != 0 ? 0 : 0x40) | *((_DWORD *)a2 + 50) & 0xFFFFFFBF;
    v35 = ((unsigned int)GrePtInRegion(v29, v34, v33) != 0 ? 0 : 0x100000) | *((_DWORD *)a2 + 50) & 0xFFEFFFFF;
  }
  else
  {
    v31 = v125;
    *((_DWORD *)a2 + 50) = ((unsigned int)IntersectRect(&v126, (int *)a2 + 30, v22) == 0 ? 0x40 : 0) | *((_DWORD *)a2 + 50) & 0xFFFFFFBF;
    v38 = PtInRect(v22, v125);
    v37 = v39 & 0xFFEFFFFF;
    v35 = v37 | (!v38 ? 0x100000 : 0);
  }
  *((_DWORD *)a2 + 50) = v35;
  if ( (v35 & 0x40) != 0 )
  {
    LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        v37,
        (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
        3,
        1,
        77,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x100000) != 0 )
  {
    LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        v37,
        (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
        3,
        1,
        78,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x80000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v40 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v41 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v41 = 0;
    }
    if ( v40 || v41 )
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v40,
        v41,
        (__int64)gFullLog,
        5u,
        1u,
        0x4Fu,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    v127 = v128;
    CCursorClip::SetClip(gpCursorClip, &v127);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
  {
    v42 = (const struct tagWND *)gpsi;
    v43 = *(_DWORD *)(gpsi + 2124LL);
    *((_DWORD *)a2 + 28) = v43;
    *((_DWORD *)a2 + 26) = v43;
    v44 = *(_DWORD *)(gpsi + 2128LL);
    *((_DWORD *)a2 + 29) = v44;
    *((_DWORD *)a2 + 27) = v44;
  }
  else
  {
    xxxGetMinMaxTrackInfo(a2);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v42) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v45 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v45 = 0;
    }
    if ( (_BYTE)v42 || v45 )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        (char)v42,
        v45,
        (__int64)gFullLog,
        5u,
        1u,
        0x50u,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
  }
  v46 = *(_OWORD *)((char *)a2 + 120);
  v47 = (_DWORD *)((char *)a2 + 240);
  v48 = v125;
  v49 = *((_DWORD *)a2 + 50) & 0xDE7FFF7C;
  *((_DWORD *)a2 + 60) = 4;
  *((_DWORD *)a2 + 50) = v49;
  *(_OWORD *)((char *)a2 + 24) = v46;
  *((_DWORD *)a2 + 61) = v125;
  *(_OWORD *)((char *)a2 + 40) = v46;
  *((_DWORD *)a2 + 62) = v28;
  *(_OWORD *)((char *)a2 + 56) = v46;
  *((_DWORD *)a2 + 63) = v125;
  *(_OWORD *)((char *)a2 + 72) = v46;
  *((_DWORD *)a2 + 64) = v28;
  v50 = WindowArrangement::SizeWithSnapAllowed(a1, v42);
  v53 = 0;
  if ( !v50
    || (*((_DWORD *)a2 + 50) & 0x80000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v52)
    || (v54 = (_BYTE *)*((_QWORD *)a1 + 5), (v54[30] & 4) == 0)
    || (v54[24] & 0x40) != 0
    || (v54[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v51 = *(const struct tagWND **)(*((_QWORD *)a1 + 17) + 8LL),
        v55 = 1024,
        *(_WORD *)v51 == *(_WORD *)(gpsi + 900LL)) )
  {
    v55 = v53;
  }
  *((_DWORD *)a2 + 50) = v55 | *((_DWORD *)a2 + 50) & 0xFFFFFBFF;
  v56 = WindowArrangement::MoveWithArrangementAllowed(a1, v51);
  v58 = 0;
  if ( !v56
    || (*((_DWORD *)a2 + 50) & 0x80000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v57)
    || (v60 = (_BYTE *)*((_QWORD *)a1 + 5), (v60[30] & 4) == 0)
    || (v60[24] & 0x40) != 0
    || (v60[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v61 = v59, **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == *(_WORD *)(gpsi + 900LL)) )
  {
    v61 = v58;
  }
  v62 = v61 | *((_DWORD *)a2 + 50) & 0xFFFFF7FF;
  *((_DWORD *)a2 + 50) = v62;
  if ( (v62 & 0xC00) != 0xC00 )
  {
    if ( !IsSemiMaximized(a1) )
    {
      if ( !WindowArrangement::IsSupported(v64, v63) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 )
        goto LABEL_113;
      LODWORD(v63) = *((_DWORD *)a2 + 50);
      v65 = 2048;
    }
    if ( ((unsigned int)v63 & v65) == 0 )
    {
      LODWORD(v63) = v65 | (unsigned int)v63 | 0x400000;
      *((_DWORD *)a2 + 50) = (_DWORD)v63;
    }
    if ( ((unsigned __int16)v63 & 0x400) == 0 )
      *((_DWORD *)a2 + 50) = (unsigned int)v63 | 0x200400;
  }
LABEL_113:
  if ( (*((_DWORD *)a2 + 50) & 0xC00) != 0 )
  {
    if ( IsSemiMaximized(a1) || (v71 = v69, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0) )
      v71 = 4096;
    *((_DWORD *)a2 + 50) = v71 | v67 & 0xFFFFEFFF;
    Prop = (__int128 *)GetProp(v68, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL, v70);
    if ( !Prop )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5751);
      Prop = (__int128 *)CkptRestore(*((struct tagWND **)a2 + 2), (struct MOVESIZEDATA *)((char *)a2 + 120));
      if ( !Prop )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v73) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v73) = 0;
        }
        if ( (_BYTE)v73 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v74) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v73,
            v74,
            (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            2,
            1,
            81,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
        }
      }
    }
    v75 = *((_DWORD *)a2 + 50) | 0x800000;
    *((_DWORD *)a2 + 50) = v75;
    if ( Prop && (v75 & 0x1000) != 0 )
      v76 = *Prop;
    else
      v76 = *(_OWORD *)((char *)a2 + 120);
    v77 = *(_QWORD *)((char *)a2 + 268);
    *(_OWORD *)((char *)a2 + 152) = v76;
    HitTargetAndMonitorFromPoint(v77, (v75 >> 15) & 7, (__int64 *)a2 + 29, (_DWORD *)a2 + 60);
    if ( (*((_DWORD *)a2 + 50) & 0x38000) != 0 )
    {
      v81 = 0;
    }
    else
    {
      v78 = IsSemiMaximized(a1);
      v81 = 0;
      if ( v78 && a3 == 9 )
        *((_DWORD *)a2 + 50) = v80 | v79 & 0xFFFE7FFF;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 || IsVerticallyMaximized(a1) )
    {
      *v47 = v81;
      if ( !IsVerticallyMaximized(a1) || (unsigned int)(a3 - 6) > 2 )
        goto LABEL_157;
      goto LABEL_156;
    }
    if ( IsLeftSemiMaximized(v82) )
    {
      v87 = v86 & v83;
      if ( v87 == v85 )
        goto LABEL_146;
      if ( v87 )
      {
LABEL_145:
        *v47 = 1;
LABEL_157:
        v48 = v125;
        *((_DWORD *)a2 + 50) ^= ((unsigned __int8)*((_DWORD *)a2 + 50) ^ (unsigned __int8)(*((_DWORD *)a2 + 50) >> 5)) & 0x80;
        goto LABEL_158;
      }
      if ( (unsigned int)(a3 - 6) > 2 )
      {
        if ( (unsigned int)(a3 - 3) > 2 )
          goto LABEL_145;
LABEL_146:
        *v47 = v66;
        goto LABEL_157;
      }
LABEL_156:
      *v47 = 3;
      goto LABEL_157;
    }
    if ( !IsRightSemiMaximized(v84) )
    {
      *v47 = 4;
      goto LABEL_157;
    }
    v91 = v90 & v88;
    if ( v91 == v89 )
      goto LABEL_146;
    if ( !v91 )
    {
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_156;
      if ( (unsigned int)(a3 - 3) <= 2 )
        goto LABEL_146;
    }
    *v47 = 2;
    goto LABEL_157;
  }
  *((_QWORD *)a2 + 29) = MonitorFromPoint(v31, 2u, 0);
  LOWORD(v66) = 0;
LABEL_158:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v92 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v92 = v66;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v93 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v66) )
  {
    v93 = v66;
  }
  if ( v92 || v93 )
  {
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v92,
      v93,
      (__int64)gFullLog,
      5u,
      1u,
      0x52u,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    LOWORD(v66) = 0;
  }
  *((_DWORD *)a2 + 51) &= ~1u;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_180;
    a3 = 9;
  }
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL));
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    *((_DWORD *)a2 + 50) |= 1u;
  v94 = *((_DWORD *)a2 + 6) + *((_DWORD *)a2 + 8);
  *((_DWORD *)a2 + 50) |= 2u;
  *((_DWORD *)a2 + 47) = v48;
  *((_DWORD *)a2 + 48) = v28;
  v95 = v94 / 2;
  LODWORD(v125) = v94 / 2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || a3 != 9 )
  {
    v28 = (*((_DWORD *)a2 + 7) + *((_DWORD *)a2 + 9)) / 2;
    HIDWORD(v125) = v28;
  }
  else
  {
    v28 = (int)GetCaptionHeight((__int64)a1) / 2 + *((_DWORD *)a2 + 7) + 3;
    HIDWORD(v125) = v28;
  }
  v31 = v125;
  zzzInternalSetCursorPos(v95, HIDWORD(v125), 1, 0);
  xxxMS_FlushWigglies();
  v96 = *((_DWORD *)a2 + 50);
  if ( (v96 & 0x400) == 0 )
    *v47 = 4;
  *((_DWORD *)a2 + 61) = v95;
  *((_DWORD *)a2 + 50) = v96 & 0xFFFFFF7F;
  LOWORD(v66) = 0;
  *((_DWORD *)a2 + 62) = v28;
  *((_DWORD *)a2 + 63) = v95;
  *((_DWORD *)a2 + 64) = v28;
LABEL_180:
  v97 = *((_DWORD *)a2 + 50) ^ (*((_DWORD *)a2 + 50) ^ (gdwPUDFlags >> 15)) & 0x20;
  *((_DWORD *)a2 + 50) = v97;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v98 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v98 = v66;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v99 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v66) )
  {
    v99 = v66;
  }
  v100 = "yes";
  if ( v98 || v99 )
  {
    v101 = "yes";
    if ( (v97 & 0x20) == 0 )
      v101 = "no";
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v98,
      v99,
      (__int64)gFullLog,
      5u,
      1u,
      0x53u,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      v101);
  }
  v102 = *((_DWORD *)a2 + 31);
  *((_DWORD *)a2 + 62) -= v102;
  *((_DWORD *)a2 + 64) -= v102;
  v103 = *((_QWORD *)a2 + 29);
  v104 = *((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 61) -= v104;
  *((_DWORD *)a2 + 63) -= v104;
  *((_QWORD *)a2 + 27) = v103;
  *((_DWORD *)a2 + 56) = *v47;
  *((_QWORD *)a2 + 26) = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v106 = *((_DWORD *)a2 + 50) ^ (*((_DWORD *)a2 + 50) ^ ~(*((_DWORD *)a2 + 50) << 21)) & 0x4000000;
  *((_DWORD *)a2 + 50) = v106;
  v107 = v106 ^ ((unsigned __int16)v106 ^ (unsigned __int16)(*((_DWORD *)a1 + 80) >> 13)) & 0x2000;
  *((_DWORD *)a2 + 50) = v107;
  v108 = v107 ^ ((unsigned __int16)v107 ^ (unsigned __int16)(*((_DWORD *)a1 + 80) >> 13)) & 0x4000;
  v109 = ((unsigned __int16)v108 ^ (unsigned __int16)(v108 >> 5)) & 0x100 ^ v108;
  v110 = (((unsigned __int16)v109 ^ (unsigned __int16)(v109 >> 5)) & 0x200 ^ v109) & 0xF7FBFFFF;
  *((_DWORD *)a2 + 50) = v110;
  v111 = v110;
  if ( (v110 & 2) != 0 )
  {
    *((_DWORD *)a2 + 50) = v110 & 0xFFFFF3FF;
    if ( IsSemiMaximized(a1) )
    {
      v110 |= 0x600800u;
      v111 = v110 | 0x400;
      *((_DWORD *)a2 + 50) = v110 | 0x400;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v105) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v105) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v112 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v112 = 0;
  }
  if ( (_BYTE)v105 || v112 )
  {
    v113 = "yes";
    if ( (v111 & 0x800) == 0 )
      v113 = "no";
    v114 = (v111 & 0x400) != 0;
    LOBYTE(v111) = v112;
    if ( !v114 )
      v100 = "no";
    LOBYTE(v110) = v105;
    WPP_RECORDER_AND_TRACE_SF_ss(
      WPP_GLOBAL_Control->AttachedDevice,
      v110,
      v111,
      v105,
      v119,
      v120,
      v121,
      v122,
      (__int64)v100,
      (__int64)v113);
  }
  *((_DWORD *)a2 + 45) = dword_1C0320DB8[a3];
  *((_DWORD *)a2 + 46) = dword_1C0320DE8[a3];
  v115 = dword_1C0320E18[a3];
  if ( v115 != -1 )
    *((_DWORD *)a2 + 42) = *((_DWORD *)a2 + (__int16)v115 + 30) - v125;
  v116 = dword_1C0320E48[a3];
  if ( v116 != -1 )
    *((_DWORD *)a2 + 43) = *((_DWORD *)a2 + (__int16)v116 + 30) - v28;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v117 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v117 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v118 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v118 = 0;
  }
  if ( v117 || v118 )
  {
    LODWORD(v124) = *((_DWORD *)a2 + 43);
    LODWORD(v123) = *((_DWORD *)a2 + 42);
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v117,
      v118,
      (__int64)gFullLog,
      5u,
      1u,
      0x55u,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      v123,
      v124);
  }
  *(_QWORD *)((char *)a2 + 260) = v31;
  *((_DWORD *)a2 + 44) = a3;
  *(_OWORD *)((char *)a2 + 300) = 0LL;
  *((_QWORD *)a2 + 40) = 0LL;
  *((_WORD *)a2 + 158) = 0;
  *((_DWORD *)a2 + 74) = 0;
  *((_BYTE *)a2 + 336) = 0;
  *((_DWORD *)a2 + 86) = 0;
  *((_QWORD *)a2 + 44) = 0LL;
}
