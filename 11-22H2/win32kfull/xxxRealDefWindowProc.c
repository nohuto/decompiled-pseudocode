/*
 * XREFs of xxxRealDefWindowProc @ 0x1C0108B10
 * Callers:
 *     xxxDefWindowProc @ 0x1C0020FF0 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01089D0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxGetTitleBarInfoEx @ 0x1C000C37C (xxxGetTitleBarInfoEx.c)
 *     xxxSendMinRectMessages @ 0x1C000E188 (xxxSendMinRectMessages.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0011604 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxReleaseCapture @ 0x1C0011688 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0011784 (xxxSetCapture.c)
 *     DWP_SetHotKey @ 0x1C0012D74 (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0012E10 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013F78 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C001F89C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRedrawTitle @ 0x1C001F9E4 (xxxRedrawTitle.c)
 *     xxxLoadUserApiHook @ 0x1C0021150 (xxxLoadUserApiHook.c)
 *     GetNonChildAncestor @ 0x1C00255E4 (GetNonChildAncestor.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     GreSetBkColor @ 0x1C0027760 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0027D58 (GreSetTextColor.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0028858 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxClientShutdown @ 0x1C003BB74 (xxxClientShutdown.c)
 *     xxxDWP_UpdateUIState @ 0x1C004AAD8 (xxxDWP_UpdateUIState.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004B2B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C004F0AC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C004FA44 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C0050BB8 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxInternalGetMessage @ 0x1C006A4F0 (xxxInternalGetMessage.c)
 *     _GetProcessWindowStation @ 0x1C006B240 (_GetProcessWindowStation.c)
 *     DefSetText @ 0x1C00955A0 (DefSetText.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0095A30 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C0095A94 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C0095B3C (TextCopy.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     _SetMenuDefaultItem @ 0x1C00A8D1C (_SetMenuDefaultItem.c)
 *     DWP_GetIcon @ 0x1C00ACEC8 (DWP_GetIcon.c)
 *     FindNCHit @ 0x1C00AD74C (FindNCHit.c)
 *     ConstrainWindowSize @ 0x1C00B03C8 (ConstrainWindowSize.c)
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00BAA10 (xxxDrawMenuBarUnderlines.c)
 *     xxxSendSizeMessage @ 0x1C00C3F18 (xxxSendSizeMessage.c)
 *     xxxDWP_EraseBkgnd @ 0x1C00C4090 (xxxDWP_EraseBkgnd.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00C5F30 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00C6FE0 (xxxDrawWindowFrame.c)
 *     _InitPwSB @ 0x1C00C7998 (_InitPwSB.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C9228 (xxxDWP_DoNCActivate.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00CD814 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C00CE0C0 (xxxInternalDoSyncPaint.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CFFEC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessageEx @ 0x1C00D3520 (PostIAMShellHookMessageEx.c)
 *     _IsDescendant @ 0x1C00D3E60 (_IsDescendant.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     GetThreadDesktopWindow @ 0x1C00EC080 (GetThreadDesktopWindow.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00F188C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     xxxCalcClientRect @ 0x1C010ACC0 (xxxCalcClientRect.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121FB0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSleepThread2 @ 0x1C0125E60 (xxxSleepThread2.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage @ 0x1C0139CF4 (Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A2D8 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A34C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessage @ 0x1C013C8C8 (xxxSendTransformableMessage.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C0157404 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01B0580 (_FreeTouchInputInfo.c)
 *     xxxSimulateShiftF10 @ 0x1C01C8DA0 (xxxSimulateShiftF10.c)
 *     xxxMessageBeep @ 0x1C01F6D88 (xxxMessageBeep.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0205F60 (SfnCOPYGLOBALDATA.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0220260 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxGetSysMenu @ 0x1C02221A0 (xxxGetSysMenu.c)
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0222480 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02224C8 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0222580 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0222AD8 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxDefPointerProc @ 0x1C0222CB4 (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C0229F4C (xxxDoScrollMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 *     MNClearCachedPopupSizes @ 0x1C0238548 (MNClearCachedPopupSizes.c)
 *     xxxSendHelpMessage @ 0x1C0239990 (xxxSendHelpMessage.c)
 *     WCSToMBEx @ 0x1C024BFF4 (WCSToMBEx.c)
 *     GetContextHelpId @ 0x1C024EE68 (GetContextHelpId.c)
 */

unsigned __int64 __fastcall xxxRealDefWindowProc(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _DEVICE_OBJECT *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 result; // rax
  __int64 v12; // rbx
  _DWORD *v13; // rax
  _WORD *v14; // rcx
  __int64 v15; // rax
  int v16; // ebx
  int v17; // esi
  int v18; // r14d
  _DWORD *v19; // rax
  int v20; // r8d
  int v21; // ecx
  int v22; // r9d
  int v23; // r15d
  int v24; // r10d
  int v25; // edx
  int v26; // esi
  int v27; // r13d
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rcx
  void *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // ebx
  int v35; // esi
  int v36; // r14d
  _DWORD *v37; // rax
  int v38; // edx
  int v39; // r8d
  int v40; // r12d
  int v41; // r9d
  int v42; // eax
  int v43; // r13d
  int v44; // esi
  int v45; // ecx
  __int64 v46; // rbx
  __int64 v47; // rcx
  void *v48; // rax
  HDC DCEx; // rax
  HDC v50; // rbx
  __int16 v51; // r8
  __int64 v52; // rax
  int v53; // ebx
  int v54; // r15d
  _DWORD *v55; // rax
  int v56; // edx
  int v57; // r8d
  int v58; // r12d
  int v59; // r9d
  ULONG v60; // ecx
  int v61; // r13d
  int v62; // r15d
  int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // rcx
  void *v66; // rax
  HDC v67; // rbx
  unsigned __int64 v68; // rbx
  int v69; // eax
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v71; // r8d
  int v72; // eax
  int v73; // eax
  int v74; // ebx
  struct _LARGE_UNICODE_STRING *v75; // rax
  _WORD *v76; // rcx
  ULONG v77; // ecx
  ULONG v78; // ebx
  __int64 v79; // rbx
  __int64 v80; // r8
  int v81; // eax
  int v82; // eax
  unsigned int v83; // ebx
  int NCHit; // r9d
  __int64 v85; // rdx
  int v86; // r9d
  int ContextHelpId; // eax
  ULONG_PTR v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  struct tagWND *v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  struct tagWND *v97; // rsi
  unsigned __int64 v98; // r9
  __int64 v99; // r8
  __int64 v100; // rdx
  struct tagWND *v101; // rcx
  __int64 ProcessWindowStation; // rax
  struct tagBWL *v103; // rax
  struct tagBWL *v104; // r14
  _QWORD *v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rcx
  __int128 v113; // kr00_16
  int v114; // r9d
  int v115; // edx
  int v116; // edx
  int v117; // r9d
  __int64 v118; // rax
  unsigned __int64 v119; // rcx
  int v120; // edx
  __int64 DesktopWindow; // rax
  int v122; // edx
  int v123; // r8d
  __int64 v124; // r9
  __int64 v125; // rax
  int v126; // eax
  __int64 v127; // rbx
  __int64 v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r14
  __int64 v133; // rdx
  char v134; // cl
  char v135; // cl
  struct tagWND **v136; // rsi
  int v137; // esi
  __int64 v138; // rbx
  __int64 Icon; // rbx
  HICON v140; // rbx
  __int64 v141; // rbx
  char v142; // bl
  struct tagWND *Host; // rax
  struct tagWND *v144; // rax
  __int64 v145; // rax
  __int64 v146; // rdx
  struct tagWND *v147; // rsi
  __int64 v148; // r14
  __int64 v149; // r13
  int v150; // ebx
  void *const *WindowMessageFilter; // rax
  unsigned __int8 v152; // al
  int v153; // ebx
  unsigned __int64 v154; // r12
  __int64 v155; // rax
  int v156; // ecx
  int v157; // ecx
  ULONG_PTR NonChildAncestor; // r12
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // rcx
  __int64 *v163; // r8
  int v164; // r9d
  const struct tagWND *v165; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  struct tagWND *TopLevelWindow; // rbx
  __int64 v168; // r8
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  int v172; // eax
  __int64 v173; // rdx
  __int64 v174; // rbx
  __int64 v175; // rdi
  __int64 v176; // rbx
  __int64 v177; // rbx
  __int64 v178; // r13
  unsigned __int64 v179; // r14
  int v180; // esi
  int v181; // ebx
  int v182; // eax
  int v183; // eax
  __int64 ThreadWin32Thread; // rax
  int v185; // eax
  int v186; // eax
  __int64 v187; // rax
  int v188; // eax
  __int64 v189; // rbx
  unsigned int v190; // ebx
  __int64 updated; // rbx
  __int64 v192; // rsi
  ULONG_PTR v193; // rcx
  unsigned int v194; // ebx
  __int64 v195; // rbx
  __int64 SysMenu; // rax
  __int64 v197; // rcx
  __int64 v198; // rcx
  unsigned int v199; // ebx
  unsigned int v200; // ebx
  unsigned int v201; // ebx
  unsigned int v202; // ebx
  __int64 v203; // rax
  __int64 v204; // rcx
  __int64 TitleBarInfo; // rbx
  __int64 UserApiHook; // rbx
  __int64 v207; // rbx
  BOOL v208; // r8d
  unsigned int v209; // ecx
  int v210; // ebx
  BOOL v211; // eax
  bool v212; // zf
  int v213; // eax
  __int64 v214; // rdx
  __int64 v215; // rdx
  ULONG *v216; // r8
  __int64 v217; // rbx
  _QWORD v218[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v219; // [rsp+60h] [rbp-D8h]
  int v220; // [rsp+68h] [rbp-D0h]
  __int128 v221; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v222; // [rsp+80h] [rbp-B8h]
  __int128 v223; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v224; // [rsp+98h] [rbp-A0h]
  ULONG BytesInMultiByteString[6]; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v226; // [rsp+C0h] [rbp-78h] BYREF
  _OWORD v227[2]; // [rsp+D0h] [rbp-68h] BYREF

  *(_QWORD *)BytesInMultiByteString = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v218);
  v221 = 0LL;
  v222 = 0LL;
  v223 = 0LL;
  v224 = 0LL;
  if ( a1 == (struct tagWND *)-1LL || a2 > 0x400 )
    goto LABEL_214;
  if ( a2 > 0x100 )
  {
    if ( a2 > 0x205 )
    {
      if ( a2 > 0x313 )
      {
        v199 = a2 - 791;
        if ( !v199 )
        {
          v217 = (int)xxxDWPPrint(a1, (HDC)a3, a4);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
          return v217;
        }
        v200 = v199 - 2;
        if ( v200 )
        {
          v201 = v200 - 2;
          if ( v201 )
          {
            v202 = v201 - 36;
            if ( !v202 )
            {
              TitleBarInfo = (int)xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
              return TitleBarInfo;
            }
            if ( v202 == 10 )
            {
              if ( a3 )
              {
                v203 = *((_QWORD *)a1 + 13);
                if ( v203 )
                {
                  v204 = *(_QWORD *)(v203 + 16);
                  if ( v204 )
                  {
                    if ( *(struct tagWND **)(v204 + 1440) == a1 )
                      xxxSetFocus(a1, v8, v9);
                  }
                }
              }
            }
          }
          else if ( gihmodUserApiHook >= 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
          {
            UserApiHook = (int)xxxLoadUserApiHook(gptiCurrent, (__int64)v8, v9);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
            return UserApiHook;
          }
        }
        else
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
          {
            ThreadLockAlways(*((_QWORD *)a1 + 13), &v221);
            v146 = 793LL;
LABEL_408:
            v89 = xxxSendMessage(*((_QWORD *)a1 + 13), v146, a3, a4);
LABEL_409:
            v207 = v89;
            ThreadUnlock1(v91, v90, v92);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
            return v207;
          }
          if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
          {
            v208 = 0;
            if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
              v208 = xxxCallHook(12LL, a3, a4, 10LL) != 0;
            if ( !v208 )
            {
              if ( (unsigned int)Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage() )
              {
                PostShellHookMessagesEx(0xCu, a4, 0LL);
              }
              else
              {
                v209 = *(_DWORD *)(gptiCurrent + 1272LL);
                v210 = (v209 >> 11) & 1;
                *(_QWORD *)BytesInMultiByteString = *(_QWORD *)(gptiCurrent + 1288LL);
                v211 = (v209 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1432LL) == a1;
                if ( v211 || (v212 = (unsigned int)CoreWindowProp::IsComponent(a1) == 0, v213 = 0, !v212) )
                  v213 = 1;
                if ( v213 )
                {
                  v214 = *(_QWORD *)(gptiCurrent + 512LL);
                  if ( v214 )
                  {
                    v215 = *(_QWORD *)(v214 + 32);
                    if ( v215 )
                    {
                      if ( (*(_DWORD *)(v215 + 1272) & 0x800) != 0 )
                      {
                        v210 = 1;
                        *(_QWORD *)BytesInMultiByteString = *(_QWORD *)(v215 + 1288);
                      }
                    }
                  }
                }
                v216 = BytesInMultiByteString;
                if ( !v210 )
                  v216 = 0LL;
                PostShellHookMessagesEx(0xCu, a4, (struct tagINPUT_MESSAGE_SOURCE *)v216);
              }
            }
          }
        }
      }
      else if ( a2 == 787 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) == 0
          && (*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground
           || xxxSetForegroundWindowWithOptions((__int64)a1, 2u, 0, 0)) )
        {
          v226 = 0LL;
          *(_QWORD *)&v227[0] = 0LL;
LABEL_378:
          v83 = 61728;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) == 0 )
            v83 = 61488;
LABEL_380:
          SysMenu = xxxGetSysMenu(a1, 1LL);
          v219 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v218, SysMenu);
          if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v218) )
          {
            if ( gihmodUserApiHook >= 0 )
              MNClearCachedPopupSizes();
            v197 = v219;
            if ( !v219 )
              v197 = *(_QWORD *)v218[0];
            SetMenuDefaultItem(v197, v83, 0);
            PostShellHookMessagesEx(9u, *(_QWORD *)a1, 0LL);
            v198 = v219;
            if ( !v219 )
              v198 = *(_QWORD *)v218[0];
            ThreadLockAlways(v198, &v226);
            if ( a4 == 0xFFFFFFFF )
            {
              v95 = gpsi;
              if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                *(_OWORD *)&BytesInMultiByteString[1] = 0LL;
                BytesInMultiByteString[0] = 20;
                if ( (unsigned int)xxxSendMinRectMessages((unsigned __int64 *)a1, (__int64)&BytesInMultiByteString[1]) )
                  xxxTrackPopupMenuEx(
                    v218,
                    576LL,
                    BytesInMultiByteString[1],
                    BytesInMultiByteString[2],
                    a1,
                    BytesInMultiByteString);
              }
            }
            else
            {
              xxxTrackPopupMenuEx(v218, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
            }
LABEL_156:
            ThreadUnlock1(v95, v94, v96);
          }
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0x20Au:
          case 0x20Eu:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
              break;
LABEL_370:
            ThreadLockAlways(*((_QWORD *)a1 + 13), &v221);
            v193 = *((_QWORD *)a1 + 13);
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(v193, 0, 0, 0LL, 1, 1);
            goto LABEL_156;
          case 0x20Cu:
LABEL_362:
            if ( WORD1(a3) == 1 )
            {
              v192 = 2147549184LL;
            }
            else
            {
              if ( WORD1(a3) != 2 )
                break;
              v192 = 2147614720LL;
            }
            if ( a2 != 524 )
              LOWORD(a3) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 432LL));
            xxxSendMessage(a1, 793LL, *(_QWORD *)a1, v192 | (unsigned __int16)a3);
            break;
          case 0x218u:
          case 0x219u:
            goto LABEL_26;
          case 0x22Au:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
            return 1162627398LL;
          case 0x22Bu:
            v194 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
            return (v194 >> 4) & 1;
          case 0x240u:
            if ( *(_QWORD *)(gptiCurrent + 1112LL) == a4 )
              *(_QWORD *)(gptiCurrent + 1112LL) = 0LL;
            FreeTouchInputInfo(a4, 1LL);
            break;
          case 0x241u:
          case 0x242u:
          case 0x243u:
          case 0x245u:
          case 0x246u:
          case 0x247u:
          case 0x24Eu:
          case 0x24Fu:
            v195 = xxxDefPointerProc(0x1C0000000uLL, a2, a3, 0LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
            return v195;
          default:
            break;
        }
      }
LABEL_214:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return 0LL;
    }
    if ( a2 != 517 )
    {
      switch ( a2 )
      {
        case 0x101u:
        case 0x105u:
          if ( a3 == 18
            && (v157 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL), (v157 & 0x80u) == 0)
            && (v157 & 0xC) == 8
            || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) & 0x10) != 0 )
          {
            NonChildAncestor = GetNonChildAncestor((__int64)a1);
            *(_QWORD *)&v223 = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = &v223;
            *((_QWORD *)&v223 + 1) = NonChildAncestor;
            if ( NonChildAncestor )
              HMLockObject(NonChildAncestor);
            if ( a3 == 121 )
              xxxDrawMenuBarUnderlines((__int64)a1, 1);
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(NonChildAncestor, 0, 0, 0LL, 1, 0);
            ThreadUnlock1(v160, v159, v161);
          }
          if ( a3 == 18 )
          {
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x80u;
            xxxDrawMenuBarUnderlines((__int64)a1, 0);
          }
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= 0xFFFFFFE3;
          goto LABEL_214;
        case 0x104u:
          v154 = a4 >> 16;
          if ( (v154 & 0x2000) != 0 )
          {
            if ( (v154 & 0x4000) == 0 )
            {
              v155 = *(_QWORD *)(gptiCurrent + 432LL);
              if ( a3 != 18 || (v156 = *(_DWORD *)(v155 + 396), (v156 & 8) != 0) )
              {
                *(_DWORD *)(v155 + 396) &= 0xFFFFFFF3;
              }
              else
              {
                *(_DWORD *)(v155 + 396) = v156 | 8;
                xxxDrawMenuBarUnderlines((__int64)a1, 1);
              }
            }
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x10u;
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) && (_DWORD)a3 == 115 )
              xxxCloseApplication(gptiCurrent);
            goto LABEL_214;
          }
          if ( a3 != 121 )
            goto LABEL_214;
          v145 = *(_QWORD *)(gptiCurrent + 432LL);
          goto LABEL_261;
        case 0x106u:
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= 0xFFFFFFF3;
          if ( a3 == 13 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
          {
            PostMessage(a1, 0x112u, 0xF120uLL, 0LL);
            goto LABEL_214;
          }
          if ( (a4 & 0x20000000) != 0 && a3 )
          {
            if ( a3 == 9 || a3 == 27 )
              goto LABEL_214;
            if ( a3 == 32 )
            {
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
              {
                v162 = *((_QWORD *)a1 + 13);
                *(_QWORD *)&v221 = *(_QWORD *)(gptiCurrent + 416LL);
                *(_QWORD *)(gptiCurrent + 416LL) = &v221;
                *((_QWORD *)&v221 + 1) = v162;
                HMLockObject(v162);
                v98 = a4;
                v99 = 32LL;
                v100 = a2;
                v101 = (struct tagWND *)*((_QWORD *)a1 + 13);
LABEL_155:
                xxxSendMessage(v101, v100, v99, v98);
                goto LABEL_156;
              }
              v163 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
              if ( v163 )
              {
                v164 = 0;
                if ( *(_DWORD *)(v163[5] + 236) == 8
                  || *(_DWORD *)(v163[5] + 236) == 9
                  || *(_DWORD *)(v163[5] + 236) == 10
                  || *(_DWORD *)(v163[5] + 236) == 11
                  || *(_DWORD *)(v163[5] + 236) == 13 )
                {
                  v164 = 1;
                }
                if ( v164 )
                {
                  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x21u, *v163);
                  goto LABEL_214;
                }
              }
            }
            if ( a3 != 32 )
              goto LABEL_355;
            v165 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
            if ( !v165 || !(unsigned int)IsCompositionInputWindow(v165) )
              goto LABEL_355;
            CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL));
            if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL)
                                                                                   + 128LL)) )
              CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL));
            if ( CompositionInputWindowUIOwner )
            {
              TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
              if ( TopLevelWindow )
              {
                memset(BytesInMultiByteString, 0, sizeof(BytesInMultiByteString));
                ThreadLockAlways(TopLevelWindow, BytesInMultiByteString);
                xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 0LL, v168);
                if ( ThreadUnlock1(v170, v169, v171) )
                  PostMessage(TopLevelWindow, 0x112u, 0xF100uLL, 32LL);
              }
            }
          }
          else if ( a3 != 27 )
          {
            xxxMessageBeep(0LL);
          }
          goto LABEL_214;
        case 0x109u:
          if ( a3 != 0xFFFF )
            PostMessage(a1, 0x102u, a3, a4);
          goto LABEL_214;
        case 0x112u:
          xxxSysCommand(a1, a3, a4);
          goto LABEL_214;
        case 0x119u:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_214;
          v147 = (struct tagWND *)*((_QWORD *)a1 + 13);
          v148 = *(_QWORD *)(*((_QWORD *)v147 + 2) + 424LL);
          v149 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( v148 != v149 )
          {
            v150 = IsMessageAllowedByFilterEx(*(void *const **)(v148 + 864), 0x119u, 0LL, 0LL);
            if ( !v150 && v147 )
            {
              WindowMessageFilter = GetWindowMessageFilter(v147);
              v150 = IsMessageAllowedByFilterEx(WindowMessageFilter, 0x119u, 0LL, 0LL);
            }
            if ( !v150 && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(0x119u) )
            {
              if ( *(_QWORD *)v148 == gpepCSRSS )
              {
                *(_QWORD *)BytesInMultiByteString = 0x2000LL;
              }
              else
              {
                BytesInMultiByteString[0] = *(_DWORD *)(v148 + 888);
                BytesInMultiByteString[1] = *(_DWORD *)(v148 + 892);
              }
              v152 = CheckAccess(v149 + 888, BytesInMultiByteString);
              v153 = v152;
              if ( !v152 )
              {
                EtwTraceUIPIMsgError(v149, v148, 281LL, a3, a4);
                UserSetLastError(v153 + 5);
                if ( !v153 )
                  goto LABEL_214;
              }
            }
          }
          ThreadLockAlways(*((_QWORD *)a1 + 13), &v221);
          v146 = 281LL;
          goto LABEL_408;
        case 0x11Au:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_214;
          ThreadLockAlways(*((_QWORD *)a1 + 13), &v221);
          v146 = 282LL;
          goto LABEL_408;
        case 0x127u:
          LOWORD(v178) = a3;
          v179 = a3 >> 16;
          v180 = 0;
          v181 = 0;
          if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || a4 )
            goto LABEL_214;
          v182 = *gpsi;
          if ( (_WORD)a3 == 3 )
          {
            LOWORD(v179) = 0;
            if ( (v182 & 0x80u) == 0 )
            {
              v183 = *(_DWORD *)(gpsi + 7004LL);
              if ( (v183 & 0x20) == 0 && v183 < 0 )
              {
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u )
                  v185 = *(_DWORD *)(ThreadWin32Thread + 648);
                else
                  LOBYTE(v185) = 0;
                if ( (v185 & 2) == 0 )
                {
                  v178 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
                  LOWORD(v179) = 3;
                  a3 = v178 | 0x30000;
                }
              }
            }
          }
          else if ( (v182 & 0x80u) != 0
                 || (v186 = *(_DWORD *)(gpsi + 7004LL), (v186 & 0x20) != 0)
                 || v186 >= 0
                 || ((v187 = W32GetThreadWin32Thread(KeGetCurrentThread()), *(_DWORD *)(v187 + 632) <= 0x400u)
                   ? (v188 = *(_DWORD *)(v187 + 648))
                   : (LOBYTE(v188) = 0),
                     (v188 & 2) != 0) )
          {
            LOWORD(v179) = WORD1(a3) & 0xFFFC;
          }
          if ( !(_WORD)v179 )
            goto LABEL_214;
          if ( (v179 & 1) != 0 )
            v181 = ((_WORD)v178 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
          if ( (v179 & 2) != 0 )
            v181 |= ((_WORD)v178 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1;
          if ( (v179 & 4) != 0 )
          {
            LOBYTE(v180) = (_WORD)v178 == 1;
            v181 |= v180 ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1;
          }
          if ( !v181 )
            goto LABEL_214;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
          {
            ThreadLockAlways(*((_QWORD *)a1 + 13), &v221);
            v146 = 295LL;
            goto LABEL_408;
          }
          v189 = xxxSendMessage(a1, 296LL, a3, 0LL);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
          result = v189;
          break;
        case 0x128u:
          updated = xxxDWP_UpdateUIState((__int64)a1, a3, a4);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
          return updated;
        case 0x129u:
          v190 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
          return v190 & 4 | ((v190 & 0x40 | ((unsigned __int64)v190 >> 2)) >> 5);
        case 0x132u:
        case 0x136u:
        case 0x138u:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
            goto LABEL_319;
          v173 = 4628LL;
          v175 = 4816LL;
          goto LABEL_320;
        case 0x133u:
        case 0x134u:
          goto LABEL_319;
        case 0x135u:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
          {
            v173 = 4628LL;
            v174 = 4640LL;
            v175 = 4816LL;
          }
          else
          {
LABEL_319:
            v173 = 4588LL;
            v175 = 4736LL;
LABEL_320:
            v174 = 4600LL;
          }
          goto LABEL_321;
        case 0x137u:
          if ( *(_WORD *)(gpsi + 6996LL) < 8u
            || (v172 = *(_DWORD *)(gpsi + 4648LL), v172 != *(_DWORD *)(gpsi + 4568LL))
            || v172 == *(_DWORD *)(gpsi + 4588LL) )
          {
            GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 4648LL));
            GreSetTextColor(a3, *(_DWORD *)(gpsi + 4628LL));
            v176 = *(_QWORD *)(gpsi + 4944LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
            return v176;
          }
          else
          {
            v173 = 4648LL;
            v174 = 4640LL;
            v175 = 4856LL;
LABEL_321:
            GreSetBkColor((HDC)a3, *(_DWORD *)(v173 + gpsi));
            GreSetTextColor(a3, *(_DWORD *)(v174 + gpsi));
            v177 = *(_QWORD *)(v175 + gpsi);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
            return v177;
          }
        default:
          goto LABEL_214;
      }
      return result;
    }
LABEL_355:
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 0);
    goto LABEL_214;
  }
  if ( a2 == 256 )
  {
    if ( a3 == 27 )
    {
      if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
      {
        Host = CoreWindowProp::GetHost(a1);
        if ( Host )
        {
          v144 = (struct tagWND *)GetTopLevelWindow((__int64)Host);
          if ( v144 )
            PostMessage(v144, 0x100u, 0x1BuLL, a4);
        }
      }
      goto LABEL_214;
    }
    if ( a3 != 121 )
      goto LABEL_214;
    v145 = *(_QWORD *)(gptiCurrent + 432LL);
LABEL_261:
    *(_DWORD *)(v145 + 396) |= 0x10u;
    if ( (_GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
      goto LABEL_214;
    goto LABEL_355;
  }
  switch ( a2 )
  {
    case 6u:
      if ( a3 )
        xxxSetFocus(a1, v8, v9);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) >= 0 )
        goto LABEL_214;
      v93 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1440LL);
      if ( !v93 )
        goto LABEL_214;
      memset(BytesInMultiByteString, 0, sizeof(BytesInMultiByteString));
      ThreadLock(v93, BytesInMultiByteString);
      xxxSendNotifyMessage(v93, 0x349u, a3, 0LL, 0);
      goto LABEL_156;
    case 0xBu:
      xxxDWP_SetRedraw(a1, a3 != 0);
      goto LABEL_214;
    case 0xCu:
      v69 = DefSetText((unsigned __int64)a1, (unsigned int *)a4);
      v10 = v69;
      if ( v69 )
      {
        xxxRedrawTitle((unsigned __int64 *)a1, 8u);
        xxxWindowEvent(0x800Cu, a1, 0, 0, 0);
      }
      goto LABEL_7;
    case 0xDu:
      if ( !a3 )
        goto LABEL_214;
      if ( *((_QWORD *)a1 + 23) )
      {
        *(_OWORD *)BytesInMultiByteString = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (struct tagWND *)((char *)a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)BytesInMultiByteString);
        DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), (ULONG_PTR)StrName);
      }
      v71 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
      v72 = *(_DWORD *)(a4 + 4);
      if ( !v71 )
      {
        v76 = *(_WORD **)(a4 + 8);
        if ( v72 >= 0 )
          *v76 = 0;
        else
          *(_BYTE *)v76 = 0;
        goto LABEL_214;
      }
      if ( v72 >= 0 )
      {
        *(_OWORD *)BytesInMultiByteString = 0LL;
        v75 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                (struct tagWND *)((char *)a1 + 184),
                (struct _LARGE_UNICODE_STRING *)BytesInMultiByteString);
        v74 = TextCopy((__int64)v75, *(char **)(a4 + 8), a3);
        v73 = 2 * v74;
      }
      else
      {
        v73 = WCSToMBEx(0LL, *((_QWORD *)a1 + 23), v71 >> 1, a4 + 8, (v72 & 0x7FFFFFFFu) - 1);
        v74 = v73;
        *(_BYTE *)(v73 + *(_QWORD *)(a4 + 8)) = 0;
      }
      *(_DWORD *)a4 = v73;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return v74;
    case 0xEu:
      v77 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
      if ( !v77 )
        goto LABEL_214;
      BytesInMultiByteString[0] = 0;
      if ( a4 )
      {
        RtlUnicodeToMultiByteSize(BytesInMultiByteString, *((PCWCH *)a1 + 23), v77);
        v78 = BytesInMultiByteString[0];
      }
      else
      {
        BytesInMultiByteString[0] = v77 >> 1;
        v78 = v77 >> 1;
      }
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return v78;
    case 0xFu:
    case 0x26u:
      xxxDWP_Paint(a1);
      goto LABEL_214;
    case 0x10u:
      xxxDestroyWindow((__int64 *)a1);
      goto LABEL_214;
    case 0x11u:
    case 0x13u:
      goto LABEL_26;
    case 0x14u:
    case 0x27u:
      v79 = (int)xxxDWP_EraseBkgnd((__int64)a1, a2, (HDC)a3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return v79;
    case 0x18u:
      if ( !(_WORD)a4 )
        goto LABEL_214;
      v133 = *((_QWORD *)a1 + 5);
      v134 = *(_BYTE *)(v133 + 31);
      if ( (((v134 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 15) )
        goto LABEL_214;
      v135 = v134 & 0x10;
      if ( a3 )
      {
        if ( v135 || (*(_BYTE *)(v133 + 17) & 0x40) == 0 )
          goto LABEL_214;
      }
      else if ( !v135 )
      {
        goto LABEL_214;
      }
      SetOrClrWF(0, a1, 0x140u, 1);
      if ( !a3 )
        SetOrClrWF(1, a1, 0x140u, 1);
      xxxShowWindowEx((ULONG_PTR)a1, a3 != 0 ? 4 : 0, gdwPUDFlags & 0x10000);
      goto LABEL_214;
    case 0x19u:
      goto LABEL_319;
    case 0x1Fu:
      xxxDWP_DoCancelMode(a1);
      goto LABEL_214;
    case 0x20u:
      v127 = (int)xxxDWP_SetCursor(a1, (HWND)a3, (__int16)a4, WORD1(a4));
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return v127;
    case 0x21u:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
      {
        v128 = *((_QWORD *)a1 + 13);
        if ( v128 )
        {
          ThreadLockAlways(*((_QWORD *)a1 + 13), &v223);
          v10 = xxxSendMessage(v128, 33LL, a3, a4);
          ThreadUnlock1(v130, v129, v131);
          if ( v10 )
            goto LABEL_7;
        }
      }
      if ( (_WORD)a4 != 2 || (v132 = 3LL, WORD1(a4) != 513) )
        v132 = 1LL;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return v132;
    case 0x2Bu:
      DWP_DrawItem((struct tagDRAWITEMSTRUCT *)a4);
      goto LABEL_214;
    case 0x2Eu:
    case 0x2Fu:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return -1LL;
    case 0x32u:
      v138 = (int)DWP_SetHotKey(a1, a3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return v138;
    case 0x33u:
      v136 = *HotKeyHelper(a1);
      if ( !v136 )
        goto LABEL_214;
      v137 = *((_DWORD *)v136 + 2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return v137;
    case 0x35u:
      v68 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return (unsigned int)v68;
    case 0x3Bu:
      v10 = (int)xxxClientShutdown((__int64)a1, a3);
LABEL_7:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return v10;
    case 0x46u:
      if ( (*(_DWORD *)(a4 + 32) & 1) == 0 )
      {
        v226 = 0LL;
        memset(v227, 0, 24);
        v112 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v112 + 31) & 0xC0) == 0 || (*(_BYTE *)(v112 + 30) & 4) != 0 )
        {
          xxxInitSendValidateMinMaxInfoEx(a1, (__int64)&v226, 0LL);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
            v113 = v226;
          else
            v113 = *(_OWORD *)((char *)v227 + 8);
          v114 = *(_DWORD *)(a4 + 24);
          v115 = v114;
          if ( v114 >= SDWORD2(v113) )
            v115 = DWORD2(v113);
          if ( (int)v113 <= v115 )
          {
            v116 = DWORD2(v113);
            if ( v114 < SDWORD2(v113) )
              v116 = *(_DWORD *)(a4 + 24);
          }
          else
          {
            v116 = v113;
          }
          *(_DWORD *)(a4 + 24) = v116;
          v117 = *(_DWORD *)(a4 + 28);
          v118 = HIDWORD(*((_QWORD *)&v113 + 1));
          v119 = DWORD1(v113);
          v120 = v117;
          if ( v117 >= SHIDWORD(v113) )
            v120 = HIDWORD(v113);
          if ( SDWORD1(v113) <= v120 )
          {
            if ( v117 < SHIDWORD(v113) )
              LODWORD(v118) = *(_DWORD *)(a4 + 28);
            LODWORD(v119) = v118;
          }
          *(_DWORD *)(a4 + 28) = v119;
          ConstrainWindowSize((int *)(a4 + 24), (int *)(a4 + 28));
        }
      }
      goto LABEL_214;
    case 0x47u:
      if ( (*(_DWORD *)(a4 + 32) & 0x1000) == 0 )
      {
        DesktopWindow = GetDesktopWindow((__int64)a1);
        if ( v124 != DesktopWindow )
        {
          v125 = *(_QWORD *)(v124 + 40);
          v122 -= *(_DWORD *)(v125 + 108);
          v123 -= *(_DWORD *)(v125 + 104);
        }
        xxxSendTransformableMessage((_DWORD)a1, 3, 0, (v122 << 16) ^ (unsigned __int16)v123, 0);
      }
      v126 = *(_DWORD *)(a4 + 32);
      if ( (v126 & 0x8000) != 0 || (v126 & 0x800) == 0 )
        xxxSendSizeMessage((ULONG_PTR)a1);
      goto LABEL_214;
    case 0x49u:
      v141 = SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return v141;
    case 0x4Du:
      ContextHelpId = GetContextHelpId(a1);
      xxxSendHelpMessage((ULONG_PTR)a1, ContextHelpId);
      goto LABEL_214;
    case 0x4Fu:
      if ( !ValidateHwnd(a3) )
        goto LABEL_214;
      goto LABEL_26;
    case 0x50u:
      v97 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
      if ( v97 && v97 != a1 && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 904LL) )
      {
        ThreadLockAlways(v97, &v223);
        v98 = a4;
        v99 = a3;
        v100 = a2;
        v101 = v97;
        goto LABEL_155;
      }
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
        UserSetLastError(1457);
      goto LABEL_214;
    case 0x51u:
      memset(BytesInMultiByteString, 0, sizeof(BytesInMultiByteString));
      v103 = BuildHwndList(*((ShellWindowManagement **)a1 + 14), (const struct tagWND *)2, 0LL, 1LL);
      v104 = v103;
      if ( v103 )
      {
        v105 = (_QWORD *)((char *)v103 + 32);
        v106 = *((_QWORD *)v103 + 4);
        if ( v106 != 1 )
        {
          do
          {
            v107 = HMValidateHandleNoSecure(v106, 1);
            v108 = v107;
            if ( v107 )
            {
              ThreadLockAlways(v107, BytesInMultiByteString);
              xxxSendMessage(v108, a2, a3, a4);
              ThreadUnlock1(v110, v109, v111);
            }
            v106 = *++v105;
          }
          while ( *v105 != 1LL );
        }
        FreeHwndList(v104);
      }
      goto LABEL_214;
    case 0x53u:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        v88 = *((_QWORD *)a1 + 13);
      else
        v88 = *((_QWORD *)a1 + 15);
      if ( !v88 || v88 == GetThreadDesktopWindow(0LL) )
        goto LABEL_214;
      ThreadLockAlways(v88, &v223);
      _InterlockedIncrement(&glSendMessage);
      v89 = xxxSendTransformableMessageTimeout(v88, 0, 0, 0LL, 1, 1);
      goto LABEL_409;
    case 0x55u:
      if ( a4 != 3 )
        goto LABEL_214;
      v142 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return 2LL - ((v142 & 0x20) != 0);
    case 0x7Bu:
      NCHit = FindNCHit((__int64)a1, a4);
      if ( (unsigned int)(NCHit - 6) <= 1 )
      {
        if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), (__int64)a1) )
          xxxDoScrollMenu(a1, 0LL, v86 - 6);
      }
      else
      {
        v85 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v85 + 31) & 0xC0) == 0x40 )
          goto LABEL_370;
        if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) )
        {
          if ( NCHit == 2 )
            goto LABEL_378;
          if ( NCHit == 3 )
          {
            v83 = 61536;
            goto LABEL_380;
          }
          if ( a4 == -1LL && (*(_BYTE *)(v85 + 21) & 2) == 0 )
            xxxSimulateShiftF10();
        }
      }
      goto LABEL_214;
    case 0x7Fu:
      Icon = DWP_GetIcon((__int64)a1, a3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return Icon;
    case 0x80u:
      v140 = xxxDWP_SetIcon(a1, a3, (HICON)a4);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return (unsigned __int64)v140;
    case 0x81u:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 && !InitPwSB((__int64)a1) )
        goto LABEL_214;
      if ( !a4 )
        goto LABEL_29;
      v13 = (_DWORD *)(a4 + 80);
      if ( !*((_QWORD *)a1 + 3) || a4 == -80LL || (v14 = *(_WORD **)(a4 + 88)) == 0LL )
      {
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
        return 1LL;
      }
      if ( *(int *)(a4 + 84) >= 0 )
      {
        if ( *v13 < 2u || *v14 != 0xFFFF )
        {
LABEL_29:
          v15 = *((_QWORD *)a1 + 5);
          v16 = *(_DWORD *)(v15 + 28);
          v17 = *(_DWORD *)(v15 + 24);
          v18 = *(_DWORD *)(v15 + 232);
          *(_BYTE *)(v15 + 18) |= 2u;
          if ( !(unsigned int)IsWindowDesktopComposed(a1) )
            goto LABEL_45;
          v19 = (_DWORD *)*((_QWORD *)a1 + 5);
          v20 = v19[7];
          v21 = v16 ^ v20;
          BytesInMultiByteString[0] = v16 ^ v20;
          v22 = v19[6];
          v23 = v17 ^ v22;
          v24 = v19[58];
          v25 = v18 ^ v24;
          if ( v16 == v20 && !v23 && !v25 )
          {
LABEL_45:
            v32 = (int)DefSetText((unsigned __int64)a1, (unsigned int *)(a4 + 80));
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
            return v32;
          }
          v26 = 0;
          v27 = 0;
          v28 = 0;
          if ( (v21 & 0xB1CF0000) != 0 )
          {
            v26 = -16;
            v27 = v20;
          }
          else if ( (v23 & 0x4E27A9) != 0 )
          {
            v26 = -20;
            v27 = v22;
          }
          else
          {
            if ( (v25 & 0x12C0) == 0 )
            {
LABEL_40:
              if ( v28 )
              {
                DirtyVisRgnTrackers((__int64)a1);
                v29 = *(_QWORD *)a1;
                v31 = (void *)ReferenceDwmApiPort(v30);
                DwmAsyncChildStyleChange(v31, v29, v26, v27);
                v21 = BytesInMultiByteString[0];
              }
              if ( (v21 & 0xC40000) != 0 || (v23 & 0x200A0381) != 0 )
                WindowMargins::CheckForChanges(a1, 1);
              goto LABEL_45;
            }
            v26 = -268435456;
            v27 = v24;
          }
          v28 = 1;
          goto LABEL_40;
        }
      }
      else if ( !*v13 || *(_BYTE *)v14 != 0xFF )
      {
        goto LABEL_29;
      }
LABEL_26:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      result = 1LL;
      break;
    case 0x83u:
      xxxCalcClientRect(a1, a4, 0LL);
      goto LABEL_214;
    case 0x84u:
      v12 = (int)FindNCHit((__int64)a1, a4);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v218);
      return v12;
    case 0x85u:
      v33 = *((_QWORD *)a1 + 5);
      v34 = *(_DWORD *)(v33 + 28);
      v35 = *(_DWORD *)(v33 + 24);
      v36 = *(_DWORD *)(v33 + 232);
      *(_BYTE *)(v33 + 17) |= 0x80u;
      if ( !(unsigned int)IsWindowDesktopComposed(a1)
        || (v37 = (_DWORD *)*((_QWORD *)a1 + 5),
            v38 = v37[7],
            v39 = v37[6],
            v40 = v35 ^ v39,
            v41 = v37[58],
            v42 = v36 ^ v41,
            (v43 = v34 ^ v38) == 0)
        && !v40
        && !v42 )
      {
        v44 = 0;
        goto LABEL_63;
      }
      v44 = 0;
      BytesInMultiByteString[0] = 0;
      v220 = 0;
      v45 = 0;
      if ( (v43 & 0xB1CF0000) != 0 )
      {
        BytesInMultiByteString[0] = -16;
        v220 = v38;
      }
      else if ( (v40 & 0x4E27A9) != 0 )
      {
        BytesInMultiByteString[0] = -20;
        v220 = v39;
      }
      else
      {
        if ( (v42 & 0x12C0) == 0 )
          goto LABEL_57;
        BytesInMultiByteString[0] = -268435456;
        v220 = v41;
      }
      v45 = 1;
LABEL_57:
      if ( v45 )
      {
        DirtyVisRgnTrackers((__int64)a1);
        v46 = *(_QWORD *)a1;
        v48 = (void *)ReferenceDwmApiPort(v47);
        DwmAsyncChildStyleChange(v48, v46, BytesInMultiByteString[0], v220);
      }
      if ( (v43 & 0xC40000) != 0 || (v40 & 0x200A0381) != 0 )
        WindowMargins::CheckForChanges(a1, 1);
LABEL_63:
      DCEx = (HDC)_GetDCEx(a1, a3, 328833LL);
      v50 = DCEx;
      if ( DCEx )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
          || (v51 = 1, *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground) )
        {
          v51 = 0;
        }
        xxxDrawWindowFrame(a1, DCEx, v51);
        _ReleaseDC(v50);
      }
      v52 = *((_QWORD *)a1 + 5);
      v53 = *(_DWORD *)(v52 + 28);
      v54 = *(_DWORD *)(v52 + 24);
      BytesInMultiByteString[0] = *(_DWORD *)(v52 + 232);
      *(_BYTE *)(v52 + 17) &= ~0x80u;
      if ( !(unsigned int)IsWindowDesktopComposed(a1) )
        goto LABEL_214;
      v55 = (_DWORD *)*((_QWORD *)a1 + 5);
      v56 = v55[7];
      v57 = v55[6];
      v58 = v54 ^ v57;
      v59 = v55[58];
      v60 = BytesInMultiByteString[0] ^ v59;
      v61 = v53 ^ v56;
      if ( v53 == v56 && !v58 && !v60 )
        goto LABEL_214;
      v62 = 0;
      v63 = 0;
      if ( (v61 & 0xB1CF0000) != 0 )
      {
        v44 = -16;
        v62 = v56;
      }
      else if ( (v58 & 0x4E27A9) != 0 )
      {
        v44 = -20;
        v62 = v57;
      }
      else
      {
        if ( (v60 & 0x12C0) == 0 )
          goto LABEL_79;
        v44 = -268435456;
        v62 = v59;
      }
      v63 = 1;
LABEL_79:
      if ( v63 )
      {
        DirtyVisRgnTrackers((__int64)a1);
        v64 = *(_QWORD *)a1;
        v66 = (void *)ReferenceDwmApiPort(v65);
        DwmAsyncChildStyleChange(v66, v64, v44, v62);
      }
      if ( (v61 & 0xC40000) != 0 || (v58 & 0x200A0381) != 0 )
        WindowMargins::CheckForChanges(a1, 1);
      goto LABEL_214;
    case 0x86u:
      xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, a4);
      goto LABEL_26;
    case 0x88u:
      SetOrClrWF(0, a1, 0x280u, 1);
      xxxInternalDoSyncPaint((__int64 *)a1, (unsigned int)a3, v80);
      goto LABEL_214;
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
      xxxDWP_NCMouse((ULONG_PTR)a1, a2, a3, a4);
      goto LABEL_214;
    case 0xA4u:
      v226 = 0LL;
      memset(v227, 0, sizeof(v227));
      v81 = FindNCHit((__int64)a1, a4);
      if ( (unsigned int)(v81 - 6) <= 1 )
      {
        if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), (__int64)a1) )
          goto LABEL_214;
      }
      else if ( (unsigned int)(v81 - 2) > 1 || a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) )
      {
        goto LABEL_214;
      }
      xxxSetCapture((__int64)a1);
      while ( !(unsigned int)xxxInternalGetMessage(&v226, 0LL, 512, 526, 1, 0) || DWORD2(v226) != 517 )
      {
        if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL)
          || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
        {
          goto LABEL_214;
        }
      }
      xxxReleaseCapture();
      v82 = FindNCHit((__int64)a1, WORD2(v227[1]) | (WORD4(v227[1]) << 16));
      if ( ((v82 - 2) & 0xFFFFFFFA) != 0 )
        goto LABEL_214;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x40) != 0 )
      {
        if ( v82 == 2 )
          goto LABEL_378;
        if ( v82 == 3 )
        {
          v83 = 61536;
          goto LABEL_380;
        }
      }
      goto LABEL_355;
    case 0xACu:
      goto LABEL_362;
    case 0xAEu:
      v67 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      xxxDrawCaptionBar((__int64)a1, v67, a3);
      _ReleaseDC(v67);
      goto LABEL_214;
    case 0xAFu:
      xxxDrawWindowFrame(a1, (HDC)a3, a4);
      goto LABEL_214;
    default:
      goto LABEL_214;
  }
  return result;
}
