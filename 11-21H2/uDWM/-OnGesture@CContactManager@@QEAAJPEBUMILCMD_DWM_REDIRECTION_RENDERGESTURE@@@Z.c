/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800AB8F0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003FD24 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004E86C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004E8E4 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18004F050 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x1800A9C2C (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x1800A9E68 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800A9F94 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800AA278 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800AA8E4 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800AA94C (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x1800AAA38 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800AAC04 (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800AAD6C (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x1800AB2BC (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800ADAFC (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800ADB84 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800ADC3C (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x1800ADDB4 (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B3F70 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C0E70 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C1018 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800C8FF8 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800C9594 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E82C4 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8480 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8624 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x1801033C4 (-DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnGesture(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *a2)
{
  int started; // ebx
  int v5; // esi
  signed int v6; // r14d
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  CContactManager *v13; // rcx
  CContactManager *v14; // rcx
  __int64 v15; // rsi
  struct CTouchVisual *v16; // rbx
  CContactManager *v17; // rcx
  int Touch; // eax
  __int64 v19; // rsi
  struct CTouchVisual *v20; // rbx
  CContactManager *v21; // rcx
  struct CTouchVisual *v22; // rbx
  CContactManager *v23; // rcx
  CContactManager *v24; // rcx
  CBaseObject *v25; // rcx
  int v26; // r9d
  __int64 v27; // rsi
  struct CTouchVisual *v28; // rbx
  CContactManager *v29; // rcx
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  CContactManager *v35; // rcx
  __int64 v36; // rbx
  struct CTouchVisual *v37; // rsi
  CContactManager *v38; // rcx
  struct CTouchVisual *v39; // rsi
  CContactManager *v40; // rcx
  struct CTouchVisual *v41; // rsi
  CContactManager *v42; // rcx
  struct CTouchVisual *v43; // rsi
  CContactManager *v44; // rcx
  struct CTouchVisual *v45; // rsi
  CContactManager *v46; // rcx
  volatile signed __int32 *v47; // rsi
  struct tagRECT *v48; // r8
  CContactManager *v49; // rcx
  unsigned int v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // eax
  int v53; // r14d
  CBaseObject *v54; // rcx
  CContactManager *v55; // rcx
  CContactManager *v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rax
  CBaseObject *v59; // rbx
  __int64 v60; // rcx
  char v61; // al
  CDirectTouchVisual **v62; // rdx
  CContactManager *v63; // rcx
  __int64 v64; // r9
  CTouchVisual **v65; // rdx
  __int64 v66; // rax
  CContactManager *v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  bool v70; // zf
  __int64 v71; // rcx
  CBaseObject *v72; // rsi
  int v73; // ebx
  _QWORD *v74; // r13
  __int64 v75; // r14
  CContactManager *v76; // rcx
  CContactManager *v77; // rcx
  CContactManager *v78; // rcx
  CContactManager *v79; // rcx
  __int64 v80; // rax
  unsigned int v81; // edx
  __int64 v82; // rsi
  CContactManager *v83; // rcx
  CBaseObject *v84; // rcx
  CContactManager *v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // rax
  CBaseObject *v88; // rbx
  __int64 v89; // rcx
  char v90; // al
  CDirectTouchVisual **v91; // rdx
  CContactManager *v92; // rcx
  __int64 v93; // r9
  CTouchVisual **v94; // rdx
  __int64 v95; // rax
  CContactManager *v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  CBaseObject *v100; // rsi
  int v101; // ebx
  _QWORD *v102; // r13
  __int64 v103; // r14
  CContactManager *v104; // rcx
  CContactManager *v105; // rcx
  unsigned int v107; // [rsp+20h] [rbp-60h]
  unsigned __int64 v108; // [rsp+40h] [rbp-40h] BYREF
  CBaseObject *v109; // [rsp+48h] [rbp-38h] BYREF
  struct CVisual *v110[2]; // [rsp+50h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v111; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v112; // [rsp+68h] [rbp-18h] BYREF

  v111 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  started = 0;
  v5 = -1;
  v6 = -1;
  v7 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(104LL * v7 + *((_QWORD *)this + 7)) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v7 >= *((_DWORD *)this + 20) )
        goto LABEL_6;
    }
    v6 = v7;
  }
LABEL_6:
  v8 = 0;
  if ( *((_DWORD *)this + 28) )
  {
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * v8) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v8 >= *((_DWORD *)this + 28) )
        goto LABEL_11;
    }
    v5 = v8;
  }
LABEL_11:
  v9 = *((_DWORD *)a2 + 4);
  v112.top = v9 - 25;
  v112.bottom = v9 + 25;
  v10 = *((_DWORD *)a2 + 3);
  v112.left = v10 - 25;
  v112.right = v10 + 25;
  GetDesktopID(1LL, &v108);
  v11 = *((_DWORD *)a2 + 1);
  if ( v11 > 5 )
  {
    v31 = v11 - 6;
    if ( !v31 )
    {
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 2, (_DWORD *)a2 + 3, 75.0);
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 1, (_DWORD *)a2 + 3, 75.0);
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        3LL,
        (char *)a2 + 12,
        &v112,
        v108,
        0);
      goto LABEL_183;
    }
    v32 = v31 - 1;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 != 1 )
            goto LABEL_55;
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 2));
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 5));
          if ( v6 >= 0 )
          {
            v36 = 104LL * (unsigned int)v6;
            v37 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v36 + 48);
            CContactManager::StopAndRemoveFromRootNode(v35, v37);
            if ( v37 )
              CBaseObject::Release(v37);
            v39 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v36 + 56);
            CContactManager::StopAndRemoveFromRootNode(v38, v39);
            if ( v39 )
              CBaseObject::Release(v39);
            v41 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v36 + 80);
            CContactManager::StopAndRemoveFromRootNode(v40, v41);
            if ( v41 )
              CBaseObject::Release(v41);
            v43 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v36 + 88);
            CContactManager::StopAndRemoveFromRootNode(v42, v43);
            if ( v43 )
              CBaseObject::Release(v43);
            v45 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v36 + 64);
            CContactManager::StopAndRemoveFromRootNode(v44, v45);
            if ( v45 )
              CBaseObject::Release(v45);
            *(_QWORD *)(*((_QWORD *)this + 7) + v36 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v36 + 56) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v36 + 80) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v36 + 88) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v36 + 64) = 0LL;
            *(_BYTE *)(*((_QWORD *)this + 7) + v36 + 96) = 0;
          }
          Touch = CreateTouchVisual<CPressTapVisual>(v108, &v109);
          started = Touch;
          if ( Touch < 0 )
          {
            v107 = 756;
            goto LABEL_41;
          }
          v47 = (volatile signed __int32 *)v109;
          CContactManager::AddToTouchNode(v46, v108, v109);
          if ( v6 < 0 )
            v48 = &v112;
          else
            v48 = (struct tagRECT *)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      (CPressTapVisual *)v47,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v48,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v49, v108, (struct CVisual *)v47);
            if ( v47 )
              CBaseObject::Release((CBaseObject *)v47);
            v107 = 772;
            goto LABEL_35;
          }
          if ( v6 >= 0 )
          {
            *(_QWORD *)(*((_QWORD *)this + 7) + 104LL * (unsigned int)v6 + 88) = v47;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 7)
                                                                        + 104LL * (unsigned int)v6
                                                                        + 88)
                                                            + 8LL));
LABEL_84:
            v47 = (volatile signed __int32 *)v109;
LABEL_85:
            if ( !v47 )
              goto LABEL_183;
            v54 = (CBaseObject *)v47;
            goto LABEL_87;
          }
          v110[0] = (struct CVisual *)v47;
          v50 = *((_DWORD *)this + 44);
          v51 = v50 + 1;
          if ( v50 + 1 < v50 )
          {
            v52 = 181;
            v53 = -2147024362;
LABEL_90:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, v52);
            CContactManager::StopAndRemoveFromRootNode(v55, (struct CTouchVisual *)v47);
            goto LABEL_85;
          }
          if ( v51 > *((_DWORD *)this + 43) )
          {
            v53 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, v110);
            if ( v53 < 0 )
            {
              v52 = 192;
              goto LABEL_90;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v47;
            *((_DWORD *)this + 44) = v51;
          }
          _InterlockedIncrement(v47 + 2);
          goto LABEL_84;
        }
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
        }
        else if ( v6 >= 0 )
        {
          v57 = 104LL * (unsigned int)v6;
          v58 = *((_QWORD *)this + 7);
          v59 = *(CBaseObject **)(v58 + v57 + 64);
          if ( v59 )
          {
            CContactManager::StopAndRemoveFromRootNode(v56, *(struct CTouchVisual **)(v58 + v57 + 64));
            CBaseObject::Release(v59);
            *(_QWORD *)(*((_QWORD *)this + 7) + v57 + 64) = 0LL;
            v60 = *((_QWORD *)this + 7);
            if ( !*(_QWORD *)(v57 + v60 + 88) )
            {
              if ( *(_BYTE *)(v57 + v60 + 97) )
              {
                v61 = *((_BYTE *)this + 324);
                if ( v61 || *(_DWORD *)(v57 + v60 + 40) )
                {
                  v62 = (CDirectTouchVisual **)(v57 + v60 + 48);
                  if ( !*v62 )
                  {
                    Touch = CreateTouchVisual<CDirectTouchVisual>(v108, v62);
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v107 = 675;
                      goto LABEL_41;
                    }
                    CContactManager::AddToTouchNode(v63, v108, *(struct CVisual **)(*((_QWORD *)this + 7) + v57 + 48));
                    v61 = *((_BYTE *)this + 324);
                    v60 = *((_QWORD *)this + 7);
                  }
                  v64 = 4294967291LL;
                  if ( !v61 )
                    v64 = *(unsigned int *)(v60 + v57 + 40);
                  CDirectTouchVisual::StartDown(*(_QWORD *)(v60 + v57 + 48), (char *)a2 + 12, &v112, v64);
                }
              }
              else
              {
                v65 = (CTouchVisual **)(v57 + v60 + 56);
                if ( !*v65 )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(v108, v65);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v107 = 685;
                    goto LABEL_41;
                  }
                  v66 = *((_QWORD *)this + 7);
                  v67 = *(CContactManager **)(v66 + v57 + 56);
                  *((_DWORD *)v67 + 106) = *(_DWORD *)(v66 + 104LL * (unsigned int)v6);
                  CContactManager::AddToTouchNode(v67, v108, *(struct CVisual **)(*((_QWORD *)this + 7) + v57 + 56));
                  v60 = *((_QWORD *)this + 7);
                }
                v68 = *(unsigned int *)(v57 + v60 + 40);
                v69 = v57 + v60 + 8;
                v70 = *(_DWORD *)(v57 + v60 + 4) == 0;
                v71 = *(_QWORD *)(v57 + v60 + 56);
                if ( v70 )
                  CIndirectTouchVisual::StartHover(v71, v69, v68);
                else
                  CIndirectTouchVisual::StartEngage(v71, v69, v68);
              }
            }
          }
        }
        v72 = 0LL;
        v109 = 0LL;
        v73 = *((_DWORD *)this + 76) - 1;
        if ( v73 < 0 )
          goto LABEL_119;
        v74 = (_QWORD *)((char *)this + 280);
        v75 = 16LL * v73;
        do
        {
          if ( *(_DWORD *)(v75 + *v74) == *((_DWORD *)a2 + 2) )
          {
            v72 = *(CBaseObject **)(v75 + *v74 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v73);
          }
          v75 -= 16LL;
          --v73;
        }
        while ( v73 >= 0 );
        v109 = v72;
        if ( !v72 )
        {
LABEL_119:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v108, &v109);
          started = Touch;
          if ( Touch < 0 )
          {
            v107 = 715;
            goto LABEL_41;
          }
          v72 = v109;
          CContactManager::AddToTouchNode(v76, v108, v109);
        }
        started = CTouchPressHoldVisual::StartAbort(v72, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_183;
        CContactManager::RemoveFromTouchNode(v77, v108, v72);
        if ( v72 )
          CBaseObject::Release(v72);
        v107 = 723;
      }
      else
      {
        CWindowList::DismissCurrentTouchResizeHighlight(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52));
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
          LODWORD(v110[0]) = *((_DWORD *)a2 + 2);
          v110[1] = 0LL;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v108, &v110[1]);
          started = Touch;
          if ( Touch < 0 )
          {
            v107 = 617;
            goto LABEL_41;
          }
          CContactManager::AddToTouchNode(v78, v108, v110[1]);
          started = CTouchPressHoldVisual::StartHold(v110[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v80 = *((unsigned int *)this + 68);
            v81 = v80 + 1;
            if ( (int)v80 + 1 >= (unsigned int)v80 )
            {
              if ( v81 <= *((_DWORD *)this + 67) )
              {
                *(_OWORD *)(*((_QWORD *)this + 31) + 16 * v80) = *(_OWORD *)v110;
                *((_DWORD *)this + 68) = v81;
                started = 0;
                goto LABEL_183;
              }
              started = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 0x10u, 1, v110);
              if ( started >= 0 )
                goto LABEL_183;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0xC0u);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
              started = -2147024362;
            }
          }
          CContactManager::RemoveFromTouchNode(v79, v108, v110[1]);
          v54 = v110[1];
          if ( !v110[1] )
            goto LABEL_183;
LABEL_87:
          CBaseObject::Release(v54);
          goto LABEL_183;
        }
        if ( v6 < 0 )
          goto LABEL_55;
        v82 = 104LL * (unsigned int)v6;
        if ( *(_DWORD *)(*((_QWORD *)this + 7) + v82 + 4) != 1 )
          goto LABEL_55;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v6, v108);
        started = Touch;
        if ( Touch < 0 )
        {
          v107 = 641;
          goto LABEL_41;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(v82 + *((_QWORD *)this + 7) + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_183;
        CContactManager::RemoveFromTouchNode(v83, v108, *(struct CVisual **)(v82 + *((_QWORD *)this + 7) + 64));
        v84 = *(CBaseObject **)(v82 + *((_QWORD *)this + 7) + 64);
        if ( v84 )
        {
          CBaseObject::Release(v84);
          *(_QWORD *)(v82 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v107 = 647;
      }
    }
    else
    {
      if ( CDesktopManager::IsCurrentSessionRemotable() )
      {
        CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
      }
      else if ( v6 >= 0 )
      {
        v86 = 104LL * (unsigned int)v6;
        v87 = *((_QWORD *)this + 7);
        v88 = *(CBaseObject **)(v87 + v86 + 64);
        if ( v88 )
        {
          CContactManager::StopAndRemoveFromRootNode(v85, *(struct CTouchVisual **)(v87 + v86 + 64));
          CBaseObject::Release(v88);
          *(_QWORD *)(*((_QWORD *)this + 7) + v86 + 64) = 0LL;
          v89 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v86 + v89 + 88) )
          {
            if ( *(_BYTE *)(v86 + v89 + 97) )
            {
              v90 = *((_BYTE *)this + 324);
              if ( v90 || *(_DWORD *)(v86 + v89 + 40) )
              {
                v91 = (CDirectTouchVisual **)(v86 + v89 + 48);
                if ( !*v91 )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(v108, v91);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v107 = 549;
                    goto LABEL_41;
                  }
                  CContactManager::AddToTouchNode(v92, v108, *(struct CVisual **)(*((_QWORD *)this + 7) + v86 + 48));
                  v90 = *((_BYTE *)this + 324);
                  v89 = *((_QWORD *)this + 7);
                }
                v93 = 4294967291LL;
                if ( !v90 )
                  v93 = *(unsigned int *)(v86 + v89 + 40);
                CDirectTouchVisual::StartDown(*(_QWORD *)(v86 + v89 + 48), (char *)a2 + 12, &v112, v93);
              }
            }
            else
            {
              v94 = (CTouchVisual **)(v86 + v89 + 56);
              if ( !*v94 )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(v108, v94);
                started = Touch;
                if ( Touch < 0 )
                {
                  v107 = 559;
                  goto LABEL_41;
                }
                v95 = *((_QWORD *)this + 7);
                v96 = *(CContactManager **)(v95 + v86 + 56);
                *((_DWORD *)v96 + 106) = *(_DWORD *)(v95 + 104LL * (unsigned int)v6);
                CContactManager::AddToTouchNode(v96, v108, *(struct CVisual **)(*((_QWORD *)this + 7) + v86 + 56));
                v89 = *((_QWORD *)this + 7);
              }
              v97 = *(unsigned int *)(v86 + v89 + 40);
              v98 = v86 + v89 + 8;
              v70 = *(_DWORD *)(v86 + v89 + 4) == 0;
              v99 = *(_QWORD *)(v86 + v89 + 56);
              if ( v70 )
                CIndirectTouchVisual::StartHover(v99, v98, v97);
              else
                CIndirectTouchVisual::StartEngage(v99, v98, v97);
            }
          }
        }
      }
      v100 = 0LL;
      v109 = 0LL;
      v101 = *((_DWORD *)this + 76) - 1;
      if ( v101 < 0 )
        goto LABEL_174;
      v102 = (_QWORD *)((char *)this + 280);
      v103 = 16LL * v101;
      do
      {
        if ( *(_DWORD *)(*v102 + v103) == *((_DWORD *)a2 + 2) )
        {
          v100 = *(CBaseObject **)(*v102 + v103 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v101);
        }
        v103 -= 16LL;
        --v101;
      }
      while ( v101 >= 0 );
      v109 = v100;
      if ( !v100 )
      {
LABEL_174:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(v108, &v109);
        started = Touch;
        if ( Touch < 0 )
        {
          v107 = 589;
          goto LABEL_41;
        }
        v100 = v109;
        CContactManager::AddToTouchNode(v104, v108, v109);
      }
      started = CTouchPressHoldVisual::StartRightTap(v100, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_183;
      CContactManager::RemoveFromTouchNode(v105, v108, v100);
      if ( v100 )
        CBaseObject::Release(v100);
      v107 = 597;
    }
LABEL_35:
    v26 = started;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, v107);
    goto LABEL_183;
  }
  if ( v11 == 5 )
  {
    if ( (v6 < 0 || *(_BYTE *)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 97))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      CContactManager::StartStationaryAnimationWithDelay(this, v30, 2LL, (char *)a2 + 12, &v112, v108, 0);
    }
    goto LABEL_183;
  }
  if ( !v11 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      this,
      *((unsigned int *)a2 + 2),
      4LL,
      (char *)a2 + 12,
      0LL,
      v108,
      0);
    goto LABEL_183;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      this,
      *((unsigned int *)a2 + 2),
      5LL,
      (char *)a2 + 12,
      0LL,
      v108,
      0);
    goto LABEL_183;
  }
  v13 = (CContactManager *)(unsigned int)(v12 - 1);
  if ( !(_DWORD)v13 )
  {
    if ( v5 < 0 )
      goto LABEL_43;
    v27 = 5LL * (unsigned int)v5;
    v28 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v27 + 16);
    CContactManager::StopAndRemoveFromRootNode(v13, v28);
    if ( v28 )
      CBaseObject::Release(v28);
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v27 + 16) = 0LL;
    Touch = CContactManager::StartPenBarrelVisual(v29, (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v27), v108);
    started = Touch;
    if ( Touch >= 0 )
    {
LABEL_43:
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        6LL,
        (char *)a2 + 12,
        0LL,
        v108,
        0);
      goto LABEL_183;
    }
    v107 = 459;
    goto LABEL_41;
  }
  v14 = (CContactManager *)(unsigned int)((_DWORD)v13 - 1);
  if ( (_DWORD)v14 )
  {
    if ( (_DWORD)v14 == 1 )
    {
      if ( v5 >= 0 )
      {
        v15 = 5LL * (unsigned int)v5;
        v16 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v15 + 16);
        CContactManager::StopAndRemoveFromRootNode(v14, v16);
        if ( v16 )
          CBaseObject::Release(v16);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v15 + 16) = 0LL;
        Touch = CContactManager::StartPenBarrelVisual(
                  v17,
                  (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v15),
                  v108);
        started = Touch;
        if ( Touch < 0 )
        {
          v107 = 502;
LABEL_41:
          v26 = Touch;
          goto LABEL_42;
        }
      }
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        7LL,
        (char *)a2 + 12,
        0LL,
        v108,
        0);
      goto LABEL_183;
    }
LABEL_55:
    started = -2147024809;
    goto LABEL_183;
  }
  if ( v5 < 0 )
    goto LABEL_55;
  v19 = 5LL * (unsigned int)v5;
  v20 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v19 + 8);
  CContactManager::StopAndRemoveFromRootNode(v14, v20);
  if ( v20 )
    CBaseObject::Release(v20);
  *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v19 + 8) = 0LL;
  v22 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v19 + 16);
  CContactManager::StopAndRemoveFromRootNode(v21, v22);
  if ( v22 )
    CBaseObject::Release(v22);
  *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v19 + 16) = 0LL;
  Touch = CreateTouchVisual<CPenPressHoldVisual>(v108, (CTouchVisual **)(*((_QWORD *)this + 11) + 16LL + 8 * v19));
  started = Touch;
  if ( Touch < 0 )
  {
    v107 = 482;
    goto LABEL_41;
  }
  CContactManager::AddToTouchNode(v23, v108, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v19 + 16));
  started = CPenPressHoldVisual::Start(
              *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 8 * v19 + 16),
              (const struct tagPOINT *)((char *)a2 + 12));
  if ( started < 0 )
  {
    CContactManager::RemoveFromTouchNode(v24, v108, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v19 + 16));
    v25 = *(CBaseObject **)(*((_QWORD *)this + 11) + 8 * v19 + 16);
    if ( v25 )
    {
      CBaseObject::Release(v25);
      *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v19 + 16) = 0LL;
    }
    v107 = 489;
    goto LABEL_35;
  }
LABEL_183:
  CContactManager::CleanupFinishedAnimations(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v111);
  return (unsigned int)started;
}
