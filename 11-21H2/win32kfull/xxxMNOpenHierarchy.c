/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C02325D0
 * Callers:
 *     xxxMNButtonDown @ 0x1C02304EC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C02305F0 (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C024D9FC (xxxMNKeyFilter.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00C9704 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     xxxPlayEventSound @ 0x1C01088E0 (xxxPlayEventSound.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C010CC94 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C0117A6C (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C0117AEC (MNRefreshUAHCachedSizes.c)
 *     MNMarkDelayedFreePopup @ 0x1C021BE1C (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C022D320 (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C022EE24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     LockPopupMenu @ 0x1C02300E8 (LockPopupMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C023EFC0 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r15
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // r14
  __int128 *v16; // rdx
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  void *v31; // rbx
  __int64 *v32; // rax
  struct tagWND *Window; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v44; // rcx
  __int64 *v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rdx
  char v48; // cl
  __int64 v49; // rcx
  struct tagWND *v50; // rsi
  int v51; // edx
  __int64 v52; // rax
  int v53; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 *v57; // rcx
  __int64 v58; // r8
  int v59; // r9d
  int v60; // r15d
  int v61; // eax
  _DWORD *v62; // r9
  int v63; // edx
  int v64; // ecx
  __int64 *v65; // rax
  __int64 *v66; // rdx
  __int64 v67; // rdx
  int v68; // r8d
  int v69; // ebx
  MenuHelpers *v70; // rcx
  int v71; // r14d
  unsigned int *v72; // rcx
  unsigned int v73; // eax
  __int64 *v74; // rax
  __int64 v75; // r9
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  _QWORD *v86[2]; // [rsp+90h] [rbp-80h] BYREF
  int v87[4]; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-60h] BYREF
  __int128 v89; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-48h]
  int v91[2]; // [rsp+D0h] [rbp-40h] BYREF
  int v92; // [rsp+D8h] [rbp-38h]
  int v93; // [rsp+DCh] [rbp-34h]
  __int64 v94; // [rsp+E0h] [rbp-30h]
  int v95[4]; // [rsp+E8h] [rbp-28h] BYREF
  _QWORD v96[3]; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v97[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v98[2]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v99[2]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v100[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v101[2]; // [rsp+150h] [rbp+40h] BYREF
  __int128 v102; // [rsp+160h] [rbp+50h]
  __int64 v103; // [rsp+170h] [rbp+60h]
  __int64 v104; // [rsp+178h] [rbp+68h]
  __int128 v105; // [rsp+1A0h] [rbp+90h]
  __int64 v106[3]; // [rsp+1D0h] [rbp+C0h] BYREF
  _QWORD v107[3]; // [rsp+1E8h] [rbp+D8h] BYREF
  int **v108[2]; // [rsp+200h] [rbp+F0h] BYREF
  __int128 v109; // [rsp+210h] [rbp+100h] BYREF
  __int64 v110; // [rsp+220h] [rbp+110h]
  __int128 v111; // [rsp+228h] [rbp+118h] BYREF
  __int64 v112; // [rsp+238h] [rbp+128h]
  _BYTE v113[64]; // [rsp+240h] [rbp+130h] BYREF
  unsigned int v114; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v115; // [rsp+2A0h] [rbp+190h] BYREF
  int v116; // [rsp+2A8h] [rbp+198h]

  v4 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v86, 0LL);
  v114 = 0;
  v90 = 0LL;
  v112 = 0LL;
  v110 = 0LL;
  LODWORD(v5) = 0;
  v6 = *a1;
  v89 = 0LL;
  v115 = 0;
  v111 = 0LL;
  v116 = 0;
  v109 = 0LL;
  v7 = *v6;
  v94 = 0LL;
  v88 = 0LL;
  v87[0] = 0;
  if ( *(_DWORD *)(v7 + 80) != -1
    && *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
  {
    if ( (*(_DWORD *)**a1 & 0x20) != 0 )
    {
      if ( (*(_DWORD *)**a1 & 0x4000) == 0 )
        goto LABEL_35;
      xxxMNCloseHierarchy(**a1, a2);
    }
    if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
      *(_DWORD *)**a1 &= ~0x2000u;
    }
    v8 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
    v9 = v8;
    if ( v8 && *(_QWORD *)(v8 + 16) )
    {
      if ( (*(_DWORD *)**a1 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        v10 = *(_QWORD *)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v89 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v89;
        *((_QWORD *)&v89 + 1) = v10;
        HMLockObject(v10);
        v94 = **(_QWORD **)(v9 + 16);
        xxxSendMessage(*(_QWORD *)(**a1 + 8));
        ThreadUnlock1(v13, v12, v14);
        v116 = 1;
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
      {
        if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
        {
          v15 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(int *)(**a1 + 80));
          v16 = (__int128 *)*v15;
          if ( (*(_DWORD *)(*v15 + 4) & 3) == 0 )
          {
            v17 = v15[2];
            if ( v17 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v17 + 40) + 44LL) )
              {
                v18 = v16[1];
                v102 = *v16;
                v19 = v16[4];
                v104 = *((_QWORD *)&v18 + 1);
                v105 = v19;
                v103 = v17;
                ThreadLock(v17, (__int64 *)&v109);
                v22 = **a1;
                if ( *(_QWORD *)(v22 + 8) )
                {
                  v23 = *(_QWORD *)(**a1 + 8);
                  v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  *(_QWORD *)&v89 = *(_QWORD *)(v24 + 416);
                  *(_QWORD *)(v24 + 416) = &v89;
                  *((_QWORD *)&v89 + 1) = v23;
                  HMLockObject(v23);
                  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
                    || (v26 = *(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL), (*(_BYTE *)(v26 + 288) & 0xF) == 3) )
                  {
                    v27 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL), v25);
                    v28 = *(_QWORD *)GetMonitorRectForWindow((__int64)v113, v27, *(const struct tagWND **)(**a1 + 16));
                    v5 = HIDWORD(v28);
                  }
                  else
                  {
                    LODWORD(v28) = v87[0];
                  }
                  v87[0] = PsGetCurrentProcessWin32Process(v26)
                        && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29),
                            (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process));
                  v31 = *(void **)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 32LL);
                  SmartObjStackRefBase<tagMENU>::Init(v106, 0LL);
                  v32 = *a1;
                  v106[2] = 0LL;
                  Window = (struct tagWND *)xxxCreateWindowEx(
                                              385,
                                              (wchar_t *)0x8000,
                                              0x8000LL,
                                              0LL,
                                              0x80800000,
                                              v28,
                                              v5,
                                              100,
                                              100,
                                              *(struct tagWND **)(*v32 + 8),
                                              (__int64)v106,
                                              v31,
                                              0LL,
                                              0,
                                              0xA00u,
                                              v87[0],
                                              0LL);
                  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v106);
                  ThreadUnlock1(v35, v34, v36);
                  if ( Window )
                  {
                    v37 = safe_cast_fnid_to_PMENUWND((__int64)Window);
                    if ( v37
                      && (SetOrClrWF(0, Window, 0x408u, 1),
                          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v86, *(_QWORD *)(v37 + 8)),
                          *v86[0]) )
                    {
                      SmartObjStackRefBase<tagPOPUPMENU>::Init(v97, *(_QWORD *)(**a1 + 64));
                      MNMarkDelayedFreePopup(v86, v97);
                      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v97);
                      SetOrClrWF(
                        (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
                        Window,
                        0xA40u,
                        1);
                      v44 = *v86[0] + 8LL;
                      v98[1] = *(_QWORD *)(**a1 + 8);
                      v98[0] = v44;
                      HMAssignmentLock(v98, 0LL);
                      SmartObjStackRefBase<tagMENU>::Init(v107, v103);
                      v107[2] = 0LL;
                      LockPopupMenu((__int64)v86, (__int64 *)(*v86[0] + 40LL), (__int64)v107);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v107);
                      v45 = *a1;
                      v99[1] = Window;
                      v99[0] = *v45 + 24;
                      HMAssignmentLock(v99, 0LL);
                      *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                      v46 = *v86[0] + 32LL;
                      v100[1] = *(_QWORD *)(**a1 + 16);
                      v100[0] = v46;
                      HMAssignmentLock(v100, 0LL);
                      *(_QWORD *)(*v86[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                      v47 = (_DWORD *)*v86[0];
                      v48 = *(_DWORD *)**a1 ^ **(_DWORD **)v86[0];
                      v116 = 0;
                      *v47 ^= v48 & 2;
                      **(_DWORD **)v86[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v86[0]) & 4;
                      **(_DWORD **)v86[0] ^= (**(_DWORD **)v86[0] ^ *(_DWORD *)**a1) & 0x800;
                      **(_DWORD **)v86[0] |= 0x200000u;
                      **(_DWORD **)v86[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v86[0]) & 0x400000;
                      **(_DWORD **)v86[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v86[0]) & 0x10;
                      **(_DWORD **)v86[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v86[0]) & 0x7FFFFFFF;
                      v49 = *(_QWORD *)(*(_QWORD *)(*v86[0] + 40LL) + 40LL);
                      if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                        *(_DWORD *)(v49 + 40) |= 4u;
                      else
                        *(_DWORD *)(v49 + 40) &= ~4u;
                      **(_DWORD **)v86[0] &= ~0x1000u;
                      if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*v86[0] + 40LL))
                        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v86[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
                      {
                        MNRefreshUAHCachedSizes(*(_QWORD *)(*v86[0] + 40LL));
                      }
                      ThreadLock((__int64)Window, (__int64 *)&v111);
                      if ( _bittest(
                             (const signed __int32 *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 424LL) + 820LL),
                             0x14u)
                        || (v50 = Window, (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2)
                        && (_bittest((const signed __int32 *)(*(_QWORD *)(**a1 + 16) + 320LL), 0x14u)
                         || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
                         && (v50 = Window, (*(_DWORD *)(*(_QWORD *)(**a1 + 16) + 320LL) & 0x80000) != 0)) )
                      {
                        SmartObjStackRefBase<tagMENU>::Init(v96, *(_QWORD *)(*v86[0] + 40LL));
                        v51 = 0;
                        v96[2] = 0LL;
                        v50 = Window;
                        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v96[0] + 40LL) + 44LL) )
                        {
                          while ( (**(_DWORD **)(96LL * v51 + *(_QWORD *)(*(_QWORD *)v96[0] + 88LL)) & 0x100) == 0
                               && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v96[0] + 88LL) + 96LL * v51) + 96LL) != -1LL )
                          {
                            if ( (unsigned int)++v51 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v96[0] + 40LL) + 44LL) )
                              goto LABEL_53;
                          }
                        }
                        else
                        {
LABEL_53:
                          xxxEnableChildWindowDpiMessageX(Window);
                        }
                        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v96);
                      }
                      v52 = *((_QWORD *)v50 + 5);
                      v53 = *(_DWORD *)(v52 + 288) & 0xF;
                      if ( v53 == 3 )
                      {
                        WindowDpiLastNotify = (*(_DWORD *)(v52 + 288) >> 8) & 0x1FF;
                      }
                      else if ( (*(_DWORD *)(v52 + 232) & 0x400) != 0 )
                      {
                        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v50);
                      }
                      else if ( !v53
                             && (v55 = *(_QWORD *)(*((_QWORD *)Window + 2) + 456LL)) != 0
                             && (*(_DWORD *)(**(_QWORD **)(v55 + 8) + 64LL) & 1) != 0 )
                      {
                        WindowDpiLastNotify = 96;
                      }
                      else
                      {
                        WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 424LL) + 284LL);
                      }
                      if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v86[0] + 40LL) + 76LL) )
                      {
                        *(_WORD *)(*(_QWORD *)(*v86[0] + 40LL) + 76LL) = WindowDpiLastNotify;
                        MNClearCachedPopupSizes(*(_QWORD **)(*v86[0] + 40LL));
                      }
                      if ( (unsigned int)xxxSendMessage((ULONG_PTR)v50)
                        && (v57 = *a1, v56 = **a1, *(_QWORD *)(v56 + 40))
                        && (unsigned int)MNGetpItemIndex(*(_QWORD *)(**a1 + 40), (__int64)v15) != -1 )
                      {
                        v60 = (unsigned __int16)v59 + 6;
                        *(_DWORD *)**a1 |= 0x20u;
                        v61 = xxxMNPositionHierarchy(
                                a1,
                                v15,
                                v60,
                                (unsigned int)HIWORD(v59) + 6,
                                (LONG *)&v114,
                                (LONG *)&v115,
                                (__int64)&v88);
                        **(_DWORD **)v86[0] ^= (**(_DWORD **)v86[0] ^ (v61 << 23)) & 0xF800000;
                        if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL) & 0x8000u) != 0LL )
                        {
                          v62 = (_DWORD *)*((_QWORD *)v50 + 5);
                          *(_OWORD *)v87 = 0LL;
                          v63 = v62[23];
                          v95[2] = v62[24] + v114 - v62[22];
                          v64 = v115 - v63 + v62[25];
                          v95[0] = v114;
                          v95[3] = v64;
                          v95[1] = v115;
                          v65 = *a1;
                          v66 = *a1;
                          v91[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v105;
                          v67 = *v66;
                          v68 = DWORD1(v105) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v65 + 16) + 40LL) + 92LL);
                          v92 = DWORD2(v105) + v91[0];
                          v91[1] = v68;
                          v93 = v68 + HIDWORD(v105);
                          SmartObjStackRefBase<tagPOPUPMENU>::Init(v108, v67);
                          MNGetPopupBoundsRect(v108, v88, (struct tagRECT *)v87, 0);
                          if ( (unsigned int)IntersectRect(v95, v95, v91) )
                          {
                            v69 = v60
                                + v105
                                + DWORD2(v105)
                                + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                            if ( v69 > v87[2] )
                              v69 = 0;
                            v70 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 16) + 40LL);
                            v71 = v105 + *((_DWORD *)v70 + 22) - v60;
                            if ( v71 < v87[0] )
                              v71 = 0;
                            if ( (MenuHelpers::GetMenuRightAlignHint(v70) || (v102 & 0x2000) != 0) && v71 || !v69 )
                            {
                              v114 = v105 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v60;
                              v72 = (unsigned int *)*v86[0];
                              v73 = **(_DWORD **)v86[0] & 0xF07FFFFF | 0x1000000;
                            }
                            else
                            {
                              v114 = v105
                                   + DWORD2(v105)
                                   + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                              v72 = (unsigned int *)*v86[0];
                              v73 = **(_DWORD **)v86[0] & 0xF07FFFFF | 0x800000;
                            }
                            *v72 = v73;
                            if ( (int)v114 <= v87[0] )
                            {
                              v114 = v92;
                              **(_DWORD **)v86[0] = **(_DWORD **)v86[0] & 0xF07FFFFF | 0x1000000;
                            }
                          }
                        }
                        if ( (*(_DWORD *)**a1 & 1) != 0 )
                        {
                          if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                            **(_DWORD **)v86[0] |= 0x8000000u;
                          if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v86[0] & 0xF800000) == 0x1000000 )
                            **(_DWORD **)v86[0] |= 0x10u;
                          *(_DWORD *)**a1 |= 0x400u;
                        }
                        else
                        {
                          **(_DWORD **)v86[0] |= 0x8000000u;
                          if ( (**(_DWORD **)v86[0] & 0xF800000) == 0x1000000 )
                            **(_DWORD **)v86[0] |= 0x10u;
                        }
                        v74 = *a1;
                        v101[1] = v50;
                        v101[0] = *(_QWORD *)(*v74 + 64) + 56LL;
                        HMAssignmentLock(v101, 0LL);
                        if ( *(_QWORD *)(*v86[0] + 8LL) )
                        {
                          v76 = *(_QWORD *)(*v86[0] + 8LL);
                          v77 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                          *(_QWORD *)&v89 = *(_QWORD *)(v77 + 416);
                          *(_QWORD *)(v77 + 416) = &v89;
                          *((_QWORD *)&v89 + 1) = v76;
                          HMLockObject(v76);
                          xxxInternalUpdateWindow(*(struct tagWND **)(*v86[0] + 8LL), 1);
                          ThreadUnlock1(v79, v78, v80);
                        }
                        if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                        {
                          v88 = *(_QWORD *)v50;
                          xxxUserModeCallback(100LL, (__int64)&v88, 8LL, v75);
                        }
                        xxxPlayEventSound(5LL);
                        if ( (W32GetCurrentThreadDpiAwarenessContext(v82, v81) & 0xF) == 2 )
                          *(_DWORD *)(*((_QWORD *)v50 + 5) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16)
                                                                                            + 40LL)
                                                                                + 288LL);
                        xxxSetWindowPos(
                          v50,
                          ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                          v114,
                          v115,
                          0,
                          0,
                          ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
                        xxxInheritWindowMonitor(v50, *(ShellWindowManagement **)(**a1 + 16), 1);
                        xxxWindowEvent(6u, v50, -4, 0, 0);
                        if ( *(_DWORD *)(a2 + 20) == 1 )
                          xxxSendMessage((ULONG_PTR)v50);
                        xxxInternalUpdateWindow(v50, 1);
                        v4 = (__int64)v50;
                        ThreadUnlock1(v84, v83, v85);
                      }
                      else
                      {
                        if ( ThreadUnlock1(v57, v56, v58) )
                          xxxDestroyWindow(v50);
                        HMAssignmentUnlock(**a1 + 24);
                      }
                    }
                    else
                    {
                      xxxDestroyWindow(Window);
                    }
                  }
                }
                ThreadUnlock1(v22, v20, v21);
              }
            }
          }
        }
      }
      else
      {
        v4 = -1LL;
      }
      if ( v116 && *(_QWORD *)(**a1 + 8) )
      {
        v38 = *(_QWORD *)(**a1 + 8);
        v39 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v89 = *(_QWORD *)(v39 + 416);
        *(_QWORD *)(v39 + 416) = &v89;
        *((_QWORD *)&v89 + 1) = v38;
        HMLockObject(v38);
        xxxSendMessage(*(_QWORD *)(**a1 + 8));
        ThreadUnlock1(v41, v40, v42);
      }
    }
  }
LABEL_35:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v86);
  return v4;
}
