/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800B090C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180041554 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180046280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800462F4 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800464A0 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x1800AEC80 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x1800AEEBC (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800AEFE8 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800AF2CC (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800AF938 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800AF9A0 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x1800AFA64 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800AFC30 (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800AFD98 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x1800B02D4 (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800B27A8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800B2830 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800B28E0 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?_RemoveForcedPressHold@CContactManager@@AEAAXI@Z @ 0x1800B2A58 (-_RemoveForcedPressHold@CContactManager@@AEAAXI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B6EC8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C58AC (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C5A5C (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD5D4 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800CDB78 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8C24 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8DE0 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8F84 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x18010A1D8 (-DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnGesture(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *a2)
{
  __int64 v4; // r8
  int started; // ebx
  int v6; // esi
  signed int v7; // r14d
  unsigned int v8; // edx
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // r8
  int v14; // ecx
  CContactManager *v15; // rcx
  CContactManager *v16; // rcx
  __int64 v17; // rsi
  struct CTouchVisual *v18; // rbx
  CContactManager *v19; // rcx
  int Touch; // eax
  __int64 v21; // rsi
  struct CTouchVisual *v22; // rbx
  CContactManager *v23; // rcx
  struct CTouchVisual *v24; // rbx
  CContactManager *v25; // rcx
  CContactManager *v26; // rcx
  CBaseObject *v27; // rcx
  int v28; // r9d
  __int64 v29; // rsi
  struct CTouchVisual *v30; // rbx
  CContactManager *v31; // rcx
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  CContactManager *v37; // rcx
  __int64 v38; // rbx
  struct CTouchVisual *v39; // rsi
  CContactManager *v40; // rcx
  struct CTouchVisual *v41; // rsi
  CContactManager *v42; // rcx
  struct CTouchVisual *v43; // rsi
  CContactManager *v44; // rcx
  struct CTouchVisual *v45; // rsi
  CContactManager *v46; // rcx
  struct CTouchVisual *v47; // rsi
  CContactManager *v48; // rcx
  volatile signed __int32 *v49; // rsi
  __int64 v50; // r12
  struct tagRECT *v51; // r8
  CContactManager *v52; // rcx
  unsigned int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // eax
  int v56; // r14d
  CBaseObject *v57; // rcx
  CContactManager *v58; // rcx
  CContactManager *v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rax
  CBaseObject *v62; // rbx
  __int64 v63; // rax
  CDirectTouchVisual **v64; // rdx
  CContactManager *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // r9
  CTouchVisual **v68; // rdx
  __int64 v69; // rax
  CContactManager *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  CBaseObject *v75; // rsi
  int v76; // ebx
  _QWORD *v77; // r12
  __int64 v78; // r14
  CContactManager *v79; // rcx
  CContactManager *v80; // rcx
  __int64 v81; // rsi
  CContactManager *v82; // rcx
  CBaseObject *v83; // rcx
  CContactManager *v84; // rcx
  CContactManager *v85; // rcx
  __int64 v86; // rax
  unsigned int v87; // edx
  CContactManager *v88; // rcx
  __int64 v89; // rsi
  __int64 v90; // rax
  CBaseObject *v91; // rbx
  __int64 v92; // rax
  CDirectTouchVisual **v93; // rdx
  CContactManager *v94; // rcx
  __int64 v95; // rax
  __int64 v96; // r9
  CTouchVisual **v97; // rdx
  __int64 v98; // rax
  CContactManager *v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  CBaseObject *v104; // rsi
  int v105; // ebx
  _QWORD *v106; // r12
  __int64 v107; // r14
  CContactManager *v108; // rcx
  CContactManager *v109; // rcx
  unsigned int v111; // [rsp+20h] [rbp-60h]
  struct tagRECT *v112; // [rsp+20h] [rbp-60h]
  void *v113; // [rsp+28h] [rbp-58h]
  unsigned __int64 v114; // [rsp+40h] [rbp-40h] BYREF
  CBaseObject *v115; // [rsp+48h] [rbp-38h] BYREF
  CBaseObject *v116[2]; // [rsp+50h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v117; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v118; // [rsp+68h] [rbp-18h] BYREF

  v117 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  started = 0;
  v6 = -1;
  v7 = -1;
  v8 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v4 = *((unsigned int *)a2 + 2);
    while ( *(_DWORD *)(104LL * v8 + *((_QWORD *)this + 7)) != (_DWORD)v4 )
    {
      if ( ++v8 >= *((_DWORD *)this + 20) )
        goto LABEL_7;
    }
    v7 = v8;
  }
LABEL_7:
  v9 = 0;
  if ( *((_DWORD *)this + 28) )
  {
    v4 = *((unsigned int *)a2 + 2);
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * v9) != (_DWORD)v4 )
    {
      if ( ++v9 >= *((_DWORD *)this + 28) )
        goto LABEL_13;
    }
    v6 = v9;
  }
LABEL_13:
  v10 = *((_DWORD *)a2 + 4);
  v118.top = v10 - 25;
  v118.bottom = v10 + 25;
  v11 = *((_DWORD *)a2 + 3);
  v118.left = v11 - 25;
  v118.right = v11 + 25;
  GetDesktopID(1LL, &v114, v4);
  v12 = *((_DWORD *)a2 + 1);
  v13 = 5LL;
  if ( v12 > 5 )
  {
    v33 = v12 - 6;
    if ( !v33 )
    {
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 2, (_DWORD *)a2 + 3, 75.0);
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 1, (_DWORD *)a2 + 3, 75.0);
      v113 = (void *)v114;
      v112 = &v118;
      v13 = 3LL;
      goto LABEL_186;
    }
    v34 = v33 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 )
            goto LABEL_57;
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 2));
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 5));
          if ( v7 >= 0 )
          {
            v38 = 104LL * (unsigned int)v7;
            v39 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v38 + 48);
            CContactManager::StopAndRemoveFromRootNode(v37, v39);
            if ( v39 )
              CBaseObject::Release(v39);
            v41 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 56);
            CContactManager::StopAndRemoveFromRootNode(v40, v41);
            if ( v41 )
              CBaseObject::Release(v41);
            v43 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 80);
            CContactManager::StopAndRemoveFromRootNode(v42, v43);
            if ( v43 )
              CBaseObject::Release(v43);
            v45 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 88);
            CContactManager::StopAndRemoveFromRootNode(v44, v45);
            if ( v45 )
              CBaseObject::Release(v45);
            v47 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 64);
            CContactManager::StopAndRemoveFromRootNode(v46, v47);
            if ( v47 )
              CBaseObject::Release(v47);
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 48) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 56) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 80) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 88) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 64) = 0LL;
            *(_BYTE *)(v38 + *((_QWORD *)this + 7) + 96) = 0;
          }
          Touch = CreateTouchVisual<CPressTapVisual>(v114, &v115);
          started = Touch;
          if ( Touch < 0 )
          {
            v111 = 760;
            goto LABEL_43;
          }
          v49 = (volatile signed __int32 *)v115;
          CContactManager::AddToTouchNode(v48, v114, v115);
          v50 = 104LL * (unsigned int)v7;
          if ( v7 < 0 )
            v51 = &v118;
          else
            v51 = (struct tagRECT *)(v50 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      (CPressTapVisual *)v49,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v51,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v52, v114, (struct CVisual *)v49);
            if ( v49 )
              CBaseObject::Release((CBaseObject *)v49);
            v111 = 776;
            goto LABEL_37;
          }
          if ( v7 >= 0 )
          {
            *(_QWORD *)(v50 + *((_QWORD *)this + 7) + 88) = v49;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v50 + *((_QWORD *)this + 7) + 88) + 8LL));
LABEL_86:
            v49 = (volatile signed __int32 *)v115;
LABEL_87:
            if ( !v49 )
              goto LABEL_187;
            v57 = (CBaseObject *)v49;
            goto LABEL_148;
          }
          v116[0] = (CBaseObject *)v49;
          v53 = *((_DWORD *)this + 44);
          v54 = v53 + 1;
          if ( v53 + 1 < v53 )
          {
            v55 = 181;
            v56 = -2147024362;
LABEL_91:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v56, v55);
            CContactManager::StopAndRemoveFromRootNode(v58, (struct CTouchVisual *)v49);
            goto LABEL_87;
          }
          if ( v54 > *((_DWORD *)this + 43) )
          {
            v56 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, v116);
            if ( v56 < 0 )
            {
              v55 = 192;
              goto LABEL_91;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v49;
            *((_DWORD *)this + 44) = v54;
          }
          _InterlockedIncrement(v49 + 2);
          goto LABEL_86;
        }
        if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
        {
          CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
        }
        else if ( v7 >= 0 )
        {
          v60 = 104LL * (unsigned int)v7;
          v61 = *((_QWORD *)this + 7);
          v62 = *(CBaseObject **)(v61 + v60 + 64);
          if ( v62 )
          {
            CContactManager::StopAndRemoveFromRootNode(v59, *(struct CTouchVisual **)(v61 + v60 + 64));
            CBaseObject::Release(v62);
            *(_QWORD *)(v60 + *((_QWORD *)this + 7) + 64) = 0LL;
            v63 = *((_QWORD *)this + 7);
            if ( !*(_QWORD *)(v60 + v63 + 88) )
            {
              if ( *(_BYTE *)(v60 + v63 + 97) )
              {
                if ( *((_BYTE *)this + 324) || *(_DWORD *)(v60 + v63 + 40) )
                {
                  v64 = (CDirectTouchVisual **)(v60 + v63 + 48);
                  if ( !*v64 )
                  {
                    Touch = CreateTouchVisual<CDirectTouchVisual>(v114, v64);
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v111 = 679;
                      goto LABEL_43;
                    }
                    CContactManager::AddToTouchNode(v65, v114, *(struct CVisual **)(v60 + *((_QWORD *)this + 7) + 48));
                  }
                  v66 = *((_QWORD *)this + 7);
                  v67 = 4294967291LL;
                  if ( !*((_BYTE *)this + 324) )
                    v67 = *(unsigned int *)(v60 + v66 + 40);
                  CDirectTouchVisual::StartDown(*(_QWORD *)(v60 + v66 + 48), (char *)a2 + 12, &v118, v67);
                }
              }
              else
              {
                v68 = (CTouchVisual **)(v60 + v63 + 56);
                if ( !*v68 )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(v114, v68);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v111 = 689;
                    goto LABEL_43;
                  }
                  v69 = *((_QWORD *)this + 7);
                  v70 = *(CContactManager **)(v60 + v69 + 56);
                  *((_DWORD *)v70 + 106) = *(_DWORD *)(v60 + v69);
                  CContactManager::AddToTouchNode(v70, v114, *(struct CVisual **)(v60 + *((_QWORD *)this + 7) + 56));
                }
                v71 = *((_QWORD *)this + 7);
                v72 = v60 + v71 + 8;
                v73 = *(_QWORD *)(v60 + v71 + 56);
                v74 = *(unsigned int *)(v60 + v71 + 40);
                if ( *(_DWORD *)(v60 + v71 + 4) )
                  CIndirectTouchVisual::StartEngage(v73, v72, v74);
                else
                  CIndirectTouchVisual::StartHover(v73, v72, v74);
              }
            }
          }
        }
        v75 = 0LL;
        v115 = 0LL;
        v76 = *((_DWORD *)this + 76) - 1;
        if ( v76 < 0 )
          goto LABEL_121;
        v77 = (_QWORD *)((char *)this + 280);
        v78 = 16LL * v76;
        do
        {
          if ( *(_DWORD *)(v78 + *v77) == *((_DWORD *)a2 + 2) )
          {
            v75 = *(CBaseObject **)(v78 + *v77 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v76);
          }
          v78 -= 16LL;
          --v76;
        }
        while ( v76 >= 0 );
        v115 = v75;
        if ( !v75 )
        {
LABEL_121:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v114, &v115);
          started = Touch;
          if ( Touch < 0 )
          {
            v111 = 719;
            goto LABEL_43;
          }
          v75 = v115;
          CContactManager::AddToTouchNode(v79, v114, v115);
        }
        started = CTouchPressHoldVisual::StartAbort(v75, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_187;
        CContactManager::RemoveFromTouchNode(v80, v114, v75);
        if ( v75 )
          CBaseObject::Release(v75);
        v111 = 727;
      }
      else
      {
        CWindowList::DismissCurrentTouchResizeHighlight(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
        if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
        {
          CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
          LODWORD(v116[0]) = *((_DWORD *)a2 + 2);
          v116[1] = 0LL;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v114, &v116[1]);
          started = Touch;
          if ( Touch < 0 )
          {
            v111 = 621;
            goto LABEL_43;
          }
          CContactManager::AddToTouchNode(v84, v114, v116[1]);
          started = CTouchPressHoldVisual::StartHold(v116[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v86 = *((unsigned int *)this + 68);
            v87 = v86 + 1;
            if ( (int)v86 + 1 >= (unsigned int)v86 )
            {
              started = 0;
              if ( v87 <= *((_DWORD *)this + 67) )
              {
                *(_OWORD *)(*((_QWORD *)this + 31) + 16 * v86) = *(_OWORD *)v116;
                *((_DWORD *)this + 68) = v87;
                goto LABEL_187;
              }
              started = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 16, 1, v116);
              if ( started >= 0 )
                goto LABEL_187;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0xC0u);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
              started = -2147024362;
            }
          }
          CContactManager::RemoveFromTouchNode(v85, v114, v116[1]);
          v57 = v116[1];
          if ( !v116[1] )
            goto LABEL_187;
LABEL_148:
          CBaseObject::Release(v57);
          goto LABEL_187;
        }
        if ( v7 < 0 )
          goto LABEL_57;
        v81 = 104LL * (unsigned int)v7;
        if ( *(_DWORD *)(*((_QWORD *)this + 7) + v81 + 4) != 1 )
          goto LABEL_57;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v7, v114);
        started = Touch;
        if ( Touch < 0 )
        {
          v111 = 645;
          goto LABEL_43;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(*((_QWORD *)this + 7) + v81 + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_187;
        CContactManager::RemoveFromTouchNode(v82, v114, *(struct CVisual **)(v81 + *((_QWORD *)this + 7) + 64));
        v83 = *(CBaseObject **)(v81 + *((_QWORD *)this + 7) + 64);
        if ( v83 )
        {
          CBaseObject::Release(v83);
          *(_QWORD *)(v81 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v111 = 651;
      }
    }
    else
    {
      if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
      {
        CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
      }
      else if ( v7 >= 0 )
      {
        v89 = 104LL * (unsigned int)v7;
        v90 = *((_QWORD *)this + 7);
        v91 = *(CBaseObject **)(v90 + v89 + 64);
        if ( v91 )
        {
          CContactManager::StopAndRemoveFromRootNode(v88, *(struct CTouchVisual **)(v90 + v89 + 64));
          CBaseObject::Release(v91);
          *(_QWORD *)(*((_QWORD *)this + 7) + v89 + 64) = 0LL;
          v92 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v92 + v89 + 88) )
          {
            if ( *(_BYTE *)(v92 + v89 + 97) )
            {
              if ( *((_BYTE *)this + 324) || *(_DWORD *)(v92 + v89 + 40) )
              {
                v93 = (CDirectTouchVisual **)(v89 + v92 + 48);
                if ( !*v93 )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(v114, v93);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v111 = 551;
                    goto LABEL_43;
                  }
                  CContactManager::AddToTouchNode(v94, v114, *(struct CVisual **)(*((_QWORD *)this + 7) + v89 + 48));
                }
                v95 = *((_QWORD *)this + 7);
                v96 = 4294967291LL;
                if ( !*((_BYTE *)this + 324) )
                  v96 = *(unsigned int *)(v95 + v89 + 40);
                CDirectTouchVisual::StartDown(*(_QWORD *)(v95 + v89 + 48), (char *)a2 + 12, &v118, v96);
              }
            }
            else
            {
              v97 = (CTouchVisual **)(v89 + v92 + 56);
              if ( !*v97 )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(v114, v97);
                started = Touch;
                if ( Touch < 0 )
                {
                  v111 = 561;
                  goto LABEL_43;
                }
                v98 = *((_QWORD *)this + 7);
                v99 = *(CContactManager **)(v98 + v89 + 56);
                *((_DWORD *)v99 + 106) = *(_DWORD *)(v98 + 104LL * (unsigned int)v7);
                CContactManager::AddToTouchNode(v99, v114, *(struct CVisual **)(*((_QWORD *)this + 7) + v89 + 56));
              }
              v100 = *((_QWORD *)this + 7);
              v101 = v89 + v100 + 8;
              v102 = *(_QWORD *)(v100 + v89 + 56);
              v103 = *(unsigned int *)(v100 + v89 + 40);
              if ( *(_DWORD *)(v100 + v89 + 4) )
                CIndirectTouchVisual::StartEngage(v102, v101, v103);
              else
                CIndirectTouchVisual::StartHover(v102, v101, v103);
            }
          }
        }
      }
      v104 = 0LL;
      v115 = 0LL;
      v105 = *((_DWORD *)this + 76) - 1;
      if ( v105 < 0 )
        goto LABEL_178;
      v106 = (_QWORD *)((char *)this + 280);
      v107 = 16LL * v105;
      do
      {
        if ( *(_DWORD *)(v107 + *v106) == *((_DWORD *)a2 + 2) )
        {
          v104 = *(CBaseObject **)(v107 + *v106 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v105);
        }
        v107 -= 16LL;
        --v105;
      }
      while ( v105 >= 0 );
      v115 = v104;
      if ( !v104 )
      {
LABEL_178:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(v114, &v115);
        started = Touch;
        if ( Touch < 0 )
        {
          v111 = 591;
          goto LABEL_43;
        }
        v104 = v115;
        CContactManager::AddToTouchNode(v108, v114, v115);
      }
      started = CTouchPressHoldVisual::StartRightTap(v104, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_187;
      CContactManager::RemoveFromTouchNode(v109, v114, v104);
      if ( v104 )
        CBaseObject::Release(v104);
      v111 = 599;
    }
LABEL_37:
    v28 = started;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, v111);
    goto LABEL_187;
  }
  if ( v12 == 5 )
  {
    if ( (v7 < 0 || *(_BYTE *)(104LL * (unsigned int)v7 + *((_QWORD *)this + 7) + 97))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      CContactManager::StartStationaryAnimationWithDelay(this, v32, 2LL, (char *)a2 + 12, &v118, v114, 0);
    }
  }
  else
  {
    if ( !v12 )
    {
      v113 = (void *)v114;
      v112 = 0LL;
      v13 = 4LL;
      goto LABEL_186;
    }
    v14 = v12 - 1;
    if ( !v14 )
    {
      v113 = (void *)v114;
      v112 = 0LL;
      goto LABEL_186;
    }
    v15 = (CContactManager *)(unsigned int)(v14 - 1);
    if ( !(_DWORD)v15 )
    {
      if ( v6 >= 0 )
      {
        v29 = 5LL * (unsigned int)v6;
        v30 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v29 + 16);
        CContactManager::StopAndRemoveFromRootNode(v15, v30);
        if ( v30 )
          CBaseObject::Release(v30);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v29 + 16) = 0LL;
        Touch = CContactManager::StartPenBarrelVisual(
                  v31,
                  (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v29),
                  v114);
        started = Touch;
        if ( Touch < 0 )
        {
          v111 = 461;
          goto LABEL_43;
        }
      }
      v113 = (void *)v114;
      v112 = 0LL;
      v13 = 6LL;
      goto LABEL_186;
    }
    v16 = (CContactManager *)(unsigned int)((_DWORD)v15 - 1);
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == 1 )
      {
        if ( v6 >= 0 )
        {
          v17 = 5LL * (unsigned int)v6;
          v18 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v17 + 16);
          CContactManager::StopAndRemoveFromRootNode(v16, v18);
          if ( v18 )
            CBaseObject::Release(v18);
          *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v17 + 16) = 0LL;
          Touch = CContactManager::StartPenBarrelVisual(
                    v19,
                    (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v17),
                    v114);
          started = Touch;
          if ( Touch < 0 )
          {
            v111 = 504;
LABEL_43:
            v28 = Touch;
            goto LABEL_44;
          }
        }
        v113 = (void *)v114;
        v112 = 0LL;
        v13 = 7LL;
LABEL_186:
        CContactManager::StartStationaryAnimationWithDelay(
          this,
          *((unsigned int *)a2 + 2),
          v13,
          (char *)a2 + 12,
          v112,
          v113,
          0);
        goto LABEL_187;
      }
LABEL_57:
      started = -2147024809;
      goto LABEL_187;
    }
    if ( v6 < 0 )
      goto LABEL_57;
    v21 = 5LL * (unsigned int)v6;
    v22 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v21 + 8);
    CContactManager::StopAndRemoveFromRootNode(v16, v22);
    if ( v22 )
      CBaseObject::Release(v22);
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v21 + 8) = 0LL;
    v24 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v21 + 16);
    CContactManager::StopAndRemoveFromRootNode(v23, v24);
    if ( v24 )
      CBaseObject::Release(v24);
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v21 + 16) = 0LL;
    Touch = CreateTouchVisual<CPenPressHoldVisual>(v114, (CTouchVisual **)(*((_QWORD *)this + 11) + 16LL + 8 * v21));
    started = Touch;
    if ( Touch < 0 )
    {
      v111 = 484;
      goto LABEL_43;
    }
    CContactManager::AddToTouchNode(v25, v114, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v21 + 16));
    started = CPenPressHoldVisual::Start(
                *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 8 * v21 + 16),
                (const struct tagPOINT *)((char *)a2 + 12));
    if ( started < 0 )
    {
      CContactManager::RemoveFromTouchNode(v26, v114, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v21 + 16));
      v27 = *(CBaseObject **)(*((_QWORD *)this + 11) + 8 * v21 + 16);
      if ( v27 )
      {
        CBaseObject::Release(v27);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v21 + 16) = 0LL;
      }
      v111 = 491;
      goto LABEL_37;
    }
  }
LABEL_187:
  CContactManager::CleanupFinishedAnimations(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v117);
  return (unsigned int)started;
}
