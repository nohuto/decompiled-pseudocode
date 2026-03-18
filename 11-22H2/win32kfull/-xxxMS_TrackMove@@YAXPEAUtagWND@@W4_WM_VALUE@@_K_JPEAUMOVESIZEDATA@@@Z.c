/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000AE0C (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x1C000C65C (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     xxxReleaseCapture @ 0x1C0011688 (xxxReleaseCapture.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C005B484 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C005DC44 (zzzLockWindowUpdate2.c)
 *     bSetDevDragRect @ 0x1C006EAD0 (bSetDevDragRect.c)
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     _GetMessagePos @ 0x1C00AE3A4 (_GetMessagePos.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     SetMinimize @ 0x1C00C4434 (SetMinimize.c)
 *     GetMonitorWorkRect @ 0x1C00C46A8 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00C46EC (GetMonitorRect.c)
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A6410 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     TransformVector @ 0x1C01E6D28 (TransformVector.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C01EA2CC (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01EB140 (-UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EBC7C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C01EC5E0 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C01F15CC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DE9C (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C023A408 (-PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x1C023A7F4 (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 */

void __fastcall xxxMS_TrackMove(ULONG_PTR a1, int a2, unsigned __int64 a3, __int64 a4, MOVESIZEDATA *a5)
{
  unsigned int v5; // r14d
  int v6; // r13d
  unsigned __int64 v8; // r12
  int v10; // esi
  char v11; // dl
  char v12; // r8
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  PDEVICE_OBJECT *v16; // rdx
  char v17; // dl
  int *v18; // r14
  __int128 v19; // xmm1
  char v20; // dl
  int v21; // edx
  int v22; // r8d
  unsigned int v23; // edx
  _BOOL8 v24; // rcx
  bool v25; // zf
  int v26; // eax
  __int64 v27; // rcx
  int DpiForSystem; // eax
  int *v29; // r14
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  int v34; // ebx
  int v35; // r9d
  unsigned __int64 v36; // rbx
  unsigned int MessagePos; // eax
  __int64 v38; // r8
  int v39; // r14d
  __int64 v40; // rdx
  PDEVICE_OBJECT v41; // rcx
  char v42; // dl
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v44; // ecx
  LONG y; // edx
  int v46; // r8d
  int v47; // eax
  __int64 DesktopWindow; // rax
  __int64 v49; // rdx
  int v50; // r14d
  int v51; // r13d
  __int64 v52; // rax
  _OWORD *v53; // rbx
  __int64 v54; // rcx
  char v55; // cl
  __int64 v56; // rcx
  int v57; // eax
  int v58; // ecx
  _DWORD *v59; // rax
  __int128 v60; // xmm0
  const struct tagWND *v61; // rdx
  int v62; // r13d
  bool IsSupported; // al
  __int64 v64; // rcx
  int v65; // r14d
  int v66; // eax
  int DpiDependentMetric; // r12d
  int v68; // eax
  __int64 v69; // r14
  __int128 v70; // xmm0
  float *v71; // r11
  int v72; // ecx
  int *v73; // r9
  float *v74; // r11
  int *v75; // r9
  float *v76; // r11
  __int64 v77; // rax
  __int64 v78; // r13
  unsigned __int64 v79; // r14
  int v80; // eax
  const struct tagWND *v81; // rdx
  _UNKNOWN **v82; // r8
  __int64 v83; // rcx
  int v84; // eax
  _OWORD *MonitorWorkRect; // rax
  int v86; // ecx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int128 *v89; // rsi
  int v90; // ecx
  int v91; // eax
  _QWORD *MonitorRect; // rax
  int v93; // ecx
  __int64 v94; // rax
  int v95; // eax
  __int64 v96; // [rsp+40h] [rbp-61h]
  __int64 v97; // [rsp+48h] [rbp-59h]
  __int64 v98; // [rsp+50h] [rbp-51h]
  __int64 v99; // [rsp+58h] [rbp-49h]
  __int64 v100; // [rsp+60h] [rbp-41h]
  __int64 v101; // [rsp+68h] [rbp-39h]
  __int64 v102; // [rsp+70h] [rbp-31h] BYREF
  __int128 v103; // [rsp+78h] [rbp-29h] BYREF
  struct tagPOINT v104; // [rsp+88h] [rbp-19h] BYREF
  __int64 v105; // [rsp+90h] [rbp-11h]
  __int128 v106; // [rsp+98h] [rbp-9h] BYREF
  __int128 v107; // [rsp+A8h] [rbp+7h] BYREF

  v5 = a4;
  v6 = 0;
  *(_QWORD *)&v103 = a4;
  v8 = a3;
  v104.y = SWORD1(a4);
  *(_QWORD *)&v106 = a3;
  v105 = gptiCurrent;
  v107 = 0LL;
  v104.x = (__int16)a4;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v11 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v12 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
    WPP_RECORDER_AND_TRACE_SF_Ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      5u,
      1u,
      0x3Du,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      a2,
      (__int16)a4,
      SWORD1(a4));
  v13 = a2 - 256;
  if ( v13 )
  {
    v14 = v13 - 4;
    if ( v14 )
    {
      v15 = v14 - 252;
      if ( v15 )
      {
        if ( v15 != 2 )
          return;
        v16 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v16) = 0;
        }
        if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v16,
            a3,
            (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            4,
            1,
            62,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
        }
        xxxTM_MoveDragRect(a5, v5);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v17 = 0;
        }
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v98) = *((_DWORD *)a5 + 8);
          LODWORD(v97) = *((_DWORD *)a5 + 7);
          LODWORD(v96) = *((_DWORD *)a5 + 6);
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v17,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            1u,
            0x3Fu,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            v96,
            v97,
            v98,
            *((_DWORD *)a5 + 9),
            v98 - v96,
            *((_DWORD *)a5 + 9) - v97);
        }
        v18 = (int *)((char *)a5 + 200);
        if ( (*((_DWORD *)a5 + 50) & 0x1000000) != 0 )
        {
          v19 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v19;
          v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v101) = *((_DWORD *)a5 + 9) - *((_DWORD *)a5 + 7);
            LODWORD(v100) = *((_DWORD *)a5 + 8) - *((_DWORD *)a5 + 6);
            LODWORD(v99) = *((_DWORD *)a5 + 9);
            LODWORD(v98) = *((_DWORD *)a5 + 8);
            LODWORD(v97) = *((_DWORD *)a5 + 7);
            LODWORD(v96) = *((_DWORD *)a5 + 6);
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v20,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              4u,
              1u,
              0x40u,
              (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
              v96,
              v97,
              v98,
              v99,
              v100,
              v101);
          }
        }
        else if ( *((_DWORD *)a5 + 74) == 2 )
        {
          UpdateMoveSizeDataForCancelation(a5);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v21) = 0;
          }
          if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v21,
              v22,
              (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
              4,
              1,
              65,
              (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
          }
        }
        *v18 &= ~2u;
        goto LABEL_110;
      }
      v23 = v5;
LABEL_48:
      xxxTM_MoveDragRect(a5, v23);
      return;
    }
  }
  LODWORD(v102) = 0;
  v24 = (_GetKeyState(17LL) & 0x8000u) != 0LL;
  if ( v8 > 0x28 )
    return;
  if ( (_DWORD)v8 == 13 )
  {
    GetMessagePos();
    v18 = (int *)((char *)a5 + 200);
LABEL_110:
    bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
    if ( (*(_DWORD *)(v105 + 488) & 0x10) != 0 )
    {
      v46 = *v18;
      if ( (*v18 & 0x800) == 0 || (((v46 & 0x20) != 0) & *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL)) == 0 )
        xxxDrawDragRect(a5, 0LL, ((v46 & 0xFF000000) << 7) | 1);
      *(_DWORD *)(v105 + 488) &= ~0x10u;
    }
    goto LABEL_115;
  }
  if ( (_DWORD)v8 != 27 )
  {
    if ( (_DWORD)v8 != 37 )
    {
      if ( (_DWORD)v8 == 38 )
      {
LABEL_56:
        if ( *((_DWORD *)a5 + 46) )
        {
          if ( v24 || (v26 = GetDpiForSystem(v24), (int)GetDpiDependentMetric(13, v26) / 2 <= 1) )
          {
            v6 = 1;
          }
          else
          {
            DpiForSystem = GetDpiForSystem(v27);
            v6 = (int)GetDpiDependentMetric(13, DpiForSystem) / 2;
          }
          if ( v8 == 38 )
            v6 = -v6;
          goto LABEL_69;
        }
        v25 = *((_DWORD *)a5 + 45) == 0;
        *((_DWORD *)a5 + 46) = dword_1C0320DE4[v8];
LABEL_66:
        if ( !v25 )
        {
          v30 = *((_DWORD *)a5 + 50) & 0xFFFFFBFF;
          *((_DWORD *)a5 + 60) = 4;
          *((_DWORD *)a5 + 50) = v30 & 0xFFFFFCFF;
          MOVESIZEDATA::SHData_ResetRuntimeState(a5);
          MakeArrangedStateObservable(a5);
        }
        *((_QWORD *)a5 + 21) = 0LL;
LABEL_69:
        v29 = (int *)((char *)a5 + 180);
LABEL_76:
        if ( *((_DWORD *)a5 + 44) == 9 )
        {
          v35 = 9;
          v36 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
        }
        else
        {
          MessagePos = GetMessagePos();
          v35 = *((_DWORD *)a5 + 44);
          v36 = MessagePos;
        }
        v38 = *v29;
        v39 = v102;
        *(_QWORD *)&v103 = v36;
        if ( (_DWORD)v38 )
        {
          LOWORD(v103) = *((_WORD *)a5 + 2 * dword_1C0320E18[v38] + 20) + v102;
          LODWORD(v36) = v103;
        }
        LOWORD(v105) = v103;
        v40 = *((int *)a5 + 46);
        if ( (_DWORD)v40 )
        {
          WORD1(v103) = *((_WORD *)a5 + 2 * dword_1C0320E48[v40] + 20) + v6;
          LODWORD(v36) = v103;
        }
        if ( v35 != 9 )
        {
          *((_DWORD *)a5 + 44) = v38 + v40;
          xxxSendMessage(a1);
        }
        v104.x = (__int16)v105 - *((_DWORD *)a5 + 42);
        v104.y = SWORD1(v36) - *((_DWORD *)a5 + 43);
        if ( MOVESIZEDATA::PtInClipRegion(a5, &v104) )
        {
          v41 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v42 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v42 = 0;
          }
          if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v97) = v104.y;
            LODWORD(v96) = v104.x;
            WPP_RECORDER_AND_TRACE_SF_dd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v42,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              4u,
              1u,
              0x43u,
              (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
              v96,
              v97);
          }
          v102 = *((_QWORD *)a5 + 26);
          *(struct tagPOINT *)&v103 = v104;
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v41);
          LogicalToPhysicalDPIPoint(&v103, &v104, CurrentThreadDpiAwarenessContext, &v102);
          if ( (((_QWORD)v106 - 38LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
          {
            v44 = v103;
            if ( (((_QWORD)v106 - 37LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              y = DWORD1(v103);
            }
            else
            {
              y = gptCursorAsync->y;
              DWORD1(v103) = y;
              if ( (_DWORD)v103 == (_DWORD)gptCursorAsync )
              {
                if ( v39 <= 0 )
                  v10 = -1;
                v44 = v10 + v103;
                LODWORD(v103) = v10 + v103;
              }
            }
          }
          else
          {
            y = DWORD1(v103);
            v44 = (unsigned int)gptCursorAsync;
            LODWORD(v103) = (_DWORD)gptCursorAsync;
            if ( DWORD1(v103) == gptCursorAsync->y )
            {
              if ( v6 <= 0 )
                v10 = -1;
              y = v10 + DWORD1(v103);
              DWORD1(v103) += v10;
            }
          }
          zzzInternalSetCursorPos(v44, y, 2, 0);
        }
        v23 = v36;
        goto LABEL_48;
      }
      if ( (_DWORD)v8 != 39 )
      {
        if ( (_DWORD)v8 != 40 )
          return;
        goto LABEL_56;
      }
    }
    v29 = (int *)((char *)a5 + 180);
    if ( *((_DWORD *)a5 + 45) )
    {
      if ( v24 || (v31 = GetDpiForSystem(v24), (int)GetDpiDependentMetric(12, v31) / 2 <= 1) )
      {
        v34 = 1;
        LODWORD(v102) = 1;
      }
      else
      {
        v33 = GetDpiForSystem(v32);
        v34 = (int)GetDpiDependentMetric(12, v33) / 2;
        LODWORD(v102) = v34;
      }
      if ( v8 == 37 )
        LODWORD(v102) = -v34;
      goto LABEL_76;
    }
    v25 = *((_DWORD *)a5 + 46) == 0;
    *v29 = dword_1C0320DE4[v8];
    goto LABEL_66;
  }
  bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(v105 + 488) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2u);
    *(_DWORD *)(v105 + 488) &= ~0x10u;
  }
  UpdateMoveSizeDataForCancelation(a5);
  v18 = (int *)((char *)a5 + 200);
LABEL_115:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1);
  xxxReleaseCapture();
  v47 = *v18 | 8;
  *v18 = v47;
  if ( (v47 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v49 == DesktopWindow )
  {
    v50 = 0;
    v51 = 0;
  }
  else
  {
    v52 = *(_QWORD *)(v49 + 40);
    v51 = *(_DWORD *)(v52 + 104);
    v50 = *(_DWORD *)(v52 + 108);
  }
  v53 = (_OWORD *)((char *)a5 + 24);
  v54 = *((_QWORD *)a5 + 3) - *((_QWORD *)a5 + 17);
  if ( !v54 )
    v54 = *((_QWORD *)a5 + 4) - *((_QWORD *)a5 + 18);
  if ( v54 )
  {
    if ( (unsigned int)xxxCallHook(0LL, *(_QWORD *)a1, (__int64)a5 + 24, 5LL) )
    {
      v60 = *(_OWORD *)((char *)a5 + 136);
      *((_QWORD *)a5 + 26) = *((_QWORD *)a5 + 27);
      *v53 = v60;
    }
    else
    {
      v55 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( (v55 & 0x20) != 0 )
        {
          LODWORD(v106) = *((_DWORD *)a5 + 34) - v51;
          DWORD2(v106) = *((_DWORD *)a5 + 36) - v51;
          DWORD1(v106) = *((_DWORD *)a5 + 35) - v50;
          HIDWORD(v106) = *((_DWORD *)a5 + 37) - v50;
          v59 = CkptRestore((struct tagWND *)a1, &v106);
          if ( v59 )
            v59[12] |= 1u;
        }
      }
      else if ( (v55 & 0x20) != 0 )
      {
        LODWORD(v106) = *((_DWORD *)a5 + 34) - v51;
        DWORD2(v106) = *((_DWORD *)a5 + 36) - v51;
        DWORD1(v106) = *((_DWORD *)a5 + 35) - v50;
        HIDWORD(v106) = *((_DWORD *)a5 + 37) - v50;
        CkptRestore((struct tagWND *)a1, &v106);
        SetMinimize((struct tagWND *)a1, 0);
      }
      else if ( (v55 & 1) != 0 )
      {
        SetOrClrWF(0, (struct tagWND *)a1, 0xF01u, 1);
      }
    }
  }
  v56 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
  if ( (*(_BYTE *)(v56 + 26) & 0x40) != 0 )
  {
    v57 = *(_DWORD *)(v56 + 112);
    *(_DWORD *)v53 -= v57;
    *((_DWORD *)a5 + 8) -= v57;
    *((_DWORD *)a5 + 9) -= v50;
    *((_DWORD *)a5 + 7) -= v50;
    v58 = -*(_DWORD *)v53;
    *(_DWORD *)v53 = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 8) = v58;
  }
  else
  {
    *(_DWORD *)v53 -= v51;
    *((_DWORD *)a5 + 8) -= v51;
    *((_DWORD *)a5 + 9) -= v50;
    *((_DWORD *)a5 + 7) -= v50;
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) )
  {
    v62 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 24LL) & 0x88;
    LODWORD(v105) = v62;
    IsSupported = WindowArrangement::IsSupported((WindowArrangement *)a1, v61);
    v64 = *(_QWORD *)(a1 + 40);
    v65 = *(char *)(v64 + 24);
    if ( IsSupported )
    {
      if ( (v65 & 0x80u) == 0 )
      {
        DpiDependentMetric = 0;
      }
      else
      {
        v68 = GetDpiForSystem(v64);
        DpiDependentMetric = GetDpiDependentMetric(22, v68);
      }
    }
    else
    {
      v66 = GetDpiForSystem(v64);
      DpiDependentMetric = GetDpiDependentMetric(((v65 >> 7) & 0x14u) + 2, v66) - 1;
    }
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v70 = *v53;
      v71 = *(float **)(a1 + 216);
      v72 = DpiDependentMetric + *((_DWORD *)a5 + 7);
      LODWORD(v102) = v72;
      v106 = v70;
      if ( v71 )
      {
        LODWORD(v103) = 0;
        TransformVector(v71, (int *)&v103, (int *)&v102, 0LL, 0);
        TransformVector(v74, (int *)&v106, (int *)&v106 + 1, v73, 0);
        TransformVector(v76, (int *)&v106 + 2, (int *)&v106 + 3, v75, 0);
        v72 = v102;
      }
      v77 = *(_QWORD *)(gpDispInfo + 104LL);
      *(_QWORD *)&v103 = v77;
      if ( v77 )
      {
        while ( 1 )
        {
          v78 = *(_QWORD *)(v77 + 40);
          if ( (*(_DWORD *)(v78 + 24) & 1) != 0 )
          {
            v79 = -(__int64)((_DWORD)v105 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v72 >= *(_DWORD *)(v79 + v78 + 48) && v72 < *(_DWORD *)(v79 + v78 + 56) )
            {
              if ( !WindowArrangement::IsSupported((WindowArrangement *)a1, 0LL) )
                goto LABEL_183;
              v80 = *(_DWORD *)(v79 + v78 + 44);
              if ( SDWORD2(v106) >= v80 && SDWORD2(v106) < *(_DWORD *)(v79 + v78 + 52) )
                goto LABEL_183;
              if ( (int)v106 >= v80 && (int)v106 < *(_DWORD *)(v79 + v78 + 52) )
                goto LABEL_183;
            }
          }
          v72 = v102;
          v77 = *(_QWORD *)(v103 + 56);
          *(_QWORD *)&v103 = v77;
          if ( !v77 )
          {
            v62 = v105;
            break;
          }
        }
      }
      v69 = MonitorFromRect((__int64)a5 + 24, 2u, 0);
    }
    else
    {
      v69 = *(_QWORD *)(GetDispInfo(v64) + 96);
    }
    v81 = (const struct tagWND *)&WPP_GLOBAL_Control;
    LOBYTE(v81) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v82 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v81 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v82) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v81,
        (_DWORD)v82,
        (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
        4,
        1,
        66,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    }
    if ( WindowArrangement::IsSupported((WindowArrangement *)a1, v81) )
    {
      v87 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 168LL);
      if ( v87 && (unsigned int)GreGetRgnBox(v87, &v107) )
      {
        v88 = *(_QWORD *)(a1 + 40);
        v89 = &v107;
        v90 = *((_DWORD *)a5 + 7);
        LODWORD(v107) = *(_DWORD *)v53;
        v91 = *((_DWORD *)a5 + 8);
        DWORD1(v107) += v90 - *(_DWORD *)(v88 + 92);
        DWORD2(v107) = v91;
        HIDWORD(v107) = *((_DWORD *)a5 + 9) + *(_DWORD *)(v88 + 100) - HIDWORD(v107);
      }
      else
      {
        v89 = (__int128 *)((char *)a5 + 24);
      }
      if ( v62 )
        MonitorRect = (_QWORD *)GetMonitorRect((__int64)&v106, v69);
      else
        MonitorRect = GetMonitorWorkRect(&v106, v69);
      v93 = *((_DWORD *)v89 + 1);
      v94 = HIDWORD(*MonitorRect);
      if ( v93 < (int)v94 )
      {
        v95 = v94 - v93;
        *((_DWORD *)a5 + 7) += v95;
        *((_DWORD *)a5 + 9) += v95;
      }
    }
    else if ( v62 )
    {
      v83 = *(_QWORD *)GetMonitorRect((__int64)&v106, v69);
      v84 = *((_DWORD *)a5 + 7);
      if ( v84 <= HIDWORD(v83) - DpiDependentMetric )
        v84 = HIDWORD(v83) - DpiDependentMetric;
      *((_DWORD *)a5 + 7) = v84;
    }
    else
    {
      MonitorWorkRect = GetMonitorWorkRect(&v106, v69);
      v86 = *((_DWORD *)a5 + 7);
      if ( v86 <= (int)(HIDWORD(*(_QWORD *)MonitorWorkRect) - DpiDependentMetric) )
        v86 = HIDWORD(*(_QWORD *)GetMonitorWorkRect(&v103, v69)) - DpiDependentMetric;
      *((_DWORD *)a5 + 7) = v86;
    }
  }
LABEL_183:
  xxxCommitMoveSize((struct tagWND *)a1, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)a1) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(a1 + 320) &= ~0x20000u;
    RecreateRedirectionBitmap((struct tagWND *)a1, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
