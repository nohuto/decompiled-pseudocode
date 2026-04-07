/*
 * XREFs of ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800B1AB4
 * Callers:
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18006BFDC (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800B06FC (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 * Callees:
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18000A44C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180041554 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180046280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800464A0 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180046E74 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18006BFB6 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x18006C98A (-IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006DF88 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18006E442 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x1800AEC80 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800AF1E4 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x1800AF6D8 (-AddMultipleAndSet@-$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x1800AFA64 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800AFD98 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x1800B0360 (-IsOKToCleanup@CPressTapVisual@@UEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x1800B26D0 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800B28E0 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x1800B6DB4 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B6EC8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C58AC (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C5A5C (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C5C08 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800C5F5C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800E3E30 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800E43B0 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x1800E8B64 (-IsHolding@CTouchPressHoldVisual@@QEAA_NXZ.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800E8B90 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
 */

__int64 __fastcall CContactManager::ProcessTouchContact(
        __int64 a1,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagRECT *a4,
        int a5,
        char a6,
        unsigned __int64 a7)
{
  unsigned int v7; // r15d
  __int64 v8; // rax
  unsigned int v10; // edx
  struct tagPOINT v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r8
  int v14; // esi
  CContactManager *v15; // rcx
  __int64 v16; // rdi
  CIndirectTouchVisual *v17; // rcx
  struct tagRECT *v18; // r8
  __int64 v19; // r10
  CContactManager *v20; // rax
  unsigned int v21; // edx
  int v22; // r12d
  CContactManager *v23; // rcx
  int v24; // eax
  volatile signed __int32 *v25; // rdx
  CBaseObject *v26; // rcx
  struct CTouchVisual *v27; // rsi
  CDirectTouchVisual *v28; // rcx
  __int64 *v29; // rsi
  __int64 v30; // rcx
  int Touch; // eax
  int v32; // r9d
  CContactManager *v33; // rcx
  CDirectTouchVisual *v34; // rcx
  struct tagRECT *v35; // rax
  float *v36; // rcx
  CIndirectTouchVisual *v37; // rcx
  CTetherVisual *v38; // rcx
  CContactManager *v39; // rcx
  int v40; // r12d
  struct CTouchVisual *v41; // rsi
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // r8
  char v45; // al
  int started; // eax
  __int64 v47; // rdx
  __int64 v48; // r13
  unsigned int v49; // eax
  unsigned int v50; // r8d
  int v51; // esi
  CContactManager *v52; // rcx
  int v53; // eax
  volatile signed __int32 *v54; // rdx
  struct CTouchVisual *v55; // rsi
  __int64 v56; // r14
  bool v57; // si
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // edx
  int v61; // esi
  int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // edx
  int v65; // eax
  unsigned int v66; // r9d
  volatile signed __int32 *v67; // rdx
  CBaseObject *v68; // rcx
  __int64 v69; // rdx
  _QWORD *v70; // rsi
  CContactManager *v71; // rax
  unsigned int v72; // r8d
  int v73; // r14d
  CContactManager *v74; // rcx
  int v75; // eax
  volatile signed __int32 *v76; // rdx
  CBaseObject *v77; // rcx
  struct CTouchVisual *v78; // r14
  CContactManager *v79; // rcx
  __int64 v80; // rax
  unsigned int v81; // edx
  unsigned int v82; // eax
  CBaseObject *v83; // rcx
  void *v84; // rdx
  CContactManager *v85; // rcx
  CContactManager *v86; // rcx
  unsigned int v88; // [rsp+20h] [rbp-E0h]
  char v89; // [rsp+40h] [rbp-C0h]
  struct tagPOINT v90; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v91; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v92; // [rsp+58h] [rbp-A8h]
  struct tagRECT *v93; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+68h] [rbp-98h] BYREF
  struct CTouchVisual *v95; // [rsp+70h] [rbp-90h] BYREF
  __int64 v96; // [rsp+78h] [rbp-88h]
  __int128 v97; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v98[2]; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v99; // [rsp+98h] [rbp-68h]
  struct tagPOINT v100; // [rsp+A0h] [rbp-60h]
  struct tagRECT v101; // [rsp+A8h] [rbp-58h]
  unsigned int v102; // [rsp+B8h] [rbp-48h]
  struct CVisual *v103[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v104; // [rsp+D0h] [rbp-30h]
  __int64 v105; // [rsp+D8h] [rbp-28h]
  __int64 v106; // [rsp+E0h] [rbp-20h]
  __int64 v107; // [rsp+E8h] [rbp-18h]
  char v108; // [rsp+F0h] [rbp-10h]
  char v109; // [rsp+F1h] [rbp-Fh]

  v7 = 0;
  v8 = 0xFFFFFFFFLL;
  v93 = a4;
  v10 = 0;
  v91 = a1;
  v11 = a3;
  v12 = a1;
  v90 = a3;
  v92 = -1;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v13 = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      a1 = 104LL * v10;
      if ( *(_DWORD *)(a1 + v13) == a2 )
        break;
      if ( ++v10 >= *(_DWORD *)(v12 + 80) )
      {
        v8 = v92;
        goto LABEL_7;
      }
    }
    v8 = v10;
    v92 = v10;
  }
LABEL_7:
  v14 = a5;
  if ( (a6 & 0x80) == 0 && a5 == 1 )
    v14 = 3;
  if ( (int)v8 < 0 )
  {
    if ( v14 != 2 && (v14 != 1 || (a6 & 0x80) == 0) )
      return v7;
    if ( a6 < 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0 )
        goto LABEL_161;
      v84 = &UdwmIndirectTouchVisual_Received_Info;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0 )
        goto LABEL_161;
      v84 = &UdwmDirectTouchDownAnimation_Start;
    }
    McTemplateU0q_EtwEventWriteTransfer(a1, (int)v84, a2);
LABEL_161:
    memset_0(v98, 0, 0x68uLL);
    v99 = v11;
    v100 = v11;
    v102 = -1;
    v98[0] = a2;
    v98[1] = v14 == 2;
    *(_OWORD *)v103 = 0LL;
    v105 = 0LL;
    v106 = 0LL;
    v104 = 0LL;
    v107 = 0LL;
    v108 = 0;
    v101 = *v93;
    if ( a6 < 0 )
    {
      v109 = 0;
      Touch = CreateTouchVisual<CIndirectTouchVisual>(a7, &v103[1]);
      v7 = Touch;
      if ( Touch < 0 )
      {
        v88 = 1383;
        goto LABEL_46;
      }
      *((_DWORD *)v103[1] + 106) = a2;
      CContactManager::AddToTouchNode(v86, a7, v103[1]);
      if ( v14 == 1 )
        CIndirectTouchVisual::StartHover(v103[1], &v90, v102);
      else
        CIndirectTouchVisual::StartEngage(v103[1], &v90, v102);
    }
    else
    {
      v109 = 1;
      Touch = CreateTouchVisual<CDirectTouchVisual>(a7, v103);
      v7 = Touch;
      if ( Touch < 0 )
      {
        v88 = 1377;
        goto LABEL_46;
      }
      CContactManager::AddToTouchNode(v85, a7, v103[0]);
      CDirectTouchVisual::StartDown(v103[0], &v90, v93, v102);
    }
    DynArray<CTouchContact,0>::AddMultipleAndSet(v12 + 56, (__int64)v98);
    return v7;
  }
  v15 = (CContactManager *)(v12 + 56);
  v16 = *(_QWORD *)(v12 + 56) + 104 * v8;
  v96 = v12 + 56;
  if ( v14 == 1 )
  {
    v17 = *(CIndirectTouchVisual **)(v16 + 56);
    if ( v17 )
    {
      if ( *(_DWORD *)(v16 + 4) )
      {
        CIndirectTouchVisual::StartHover(v17, &v90, *(unsigned int *)(v16 + 40));
        v18 = *(struct tagRECT **)(v16 + 72);
        *(_DWORD *)(v16 + 4) = 0;
        if ( v18 )
        {
          v19 = v12 + 152;
          v93 = v18;
          v20 = (CContactManager *)*(unsigned int *)(v12 + 176);
          v21 = (_DWORD)v20 + 1;
          if ( (int)v20 + 1 >= (unsigned int)v20 )
          {
            v22 = 0;
            if ( v21 > *(_DWORD *)(v19 + 20) )
            {
              v24 = DynArrayImpl<0>::AddMultipleAndSet(v19, 8, 1, &v93);
              v22 = v24;
              if ( v24 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xC0u);
            }
            else
            {
              v23 = v20;
              *(_QWORD *)(*(_QWORD *)v19 + 8LL * (_QWORD)v20) = v18;
              *(_DWORD *)(v19 + 24) = v21;
            }
          }
          else
          {
            v22 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
          v25 = *(volatile signed __int32 **)(v16 + 72);
          if ( v22 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v23, (struct CTouchVisual *)v25);
          }
          else
          {
            _InterlockedAdd(v25 + 2, 1u);
            CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v16 + 72));
          }
          v26 = *(CBaseObject **)(v16 + 72);
          if ( v26 )
          {
            CBaseObject::Release(v26);
            *(_QWORD *)(v16 + 72) = 0LL;
          }
        }
      }
      else
      {
        CIndirectTouchVisual::UpdateLocation(v17, &v90);
      }
    }
    return v7;
  }
  if ( v14 != 2 )
  {
    if ( v14 != 3 )
    {
      v7 = -2147024809;
      v32 = -2147024809;
      v88 = 1342;
      goto LABEL_47;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McTemplateU0q_EtwEventWriteTransfer((__int64)v15, (int)&UdwmTouchUpReceived_Info, a2);
    CContactManager::CleanupFinishedAnimations((CContactManager *)v12);
    v40 = -2147024362;
    if ( *(_BYTE *)(v16 + 97) )
    {
      v41 = *(struct CTouchVisual **)(v16 + 48);
      if ( !v41 || (v89 = 1, !CDirectTouchVisual::IsInInitialDelay(*(CDirectTouchVisual **)(v16 + 48))) )
        v89 = 0;
      CContactManager::StopAndRemoveFromRootNode(v39, v41);
      if ( v41 )
        CBaseObject::Release(v41);
      if ( !CContactManager::CheckShowContact(v91, *(_DWORD *)(v16 + 40), 2)
        || !*(_DWORD *)(v16 + 4)
        || *(_QWORD *)(v16 + 80) && CContactManager::CheckShowContact((__int64)v39, *(_DWORD *)(v16 + 40), 4)
        || *(_QWORD *)(v16 + 64)
        || *(_QWORD *)(v16 + 88)
        || (int)CContactManager::FindStationaryAnimation((__int64)v39, a2, 2) >= 0
        || (int)CContactManager::FindStationaryAnimation((__int64)v39, v42, 3) >= 0 )
      {
        v48 = (__int64)v39;
      }
      else
      {
        if ( !CContactManager::CheckShowContact((__int64)v39, *(_DWORD *)(v16 + 40), 1) || (v45 = 0, v89) )
          v45 = v44;
        started = CContactManager::StartStationaryAnimationWithDelay(v43, a2, v44, &v90, v93, a7, v45);
        v7 = started;
        if ( started < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x4E0u);
          return v7;
        }
        v48 = v91;
      }
    }
    else
    {
      v47 = *(_QWORD *)(v16 + 56);
      v48 = v91;
      if ( v47 )
      {
        v93 = *(struct tagRECT **)(v16 + 56);
        v49 = *(_DWORD *)(v91 + 176);
        v50 = v49 + 1;
        if ( v49 + 1 >= v49 )
        {
          v51 = 0;
          if ( v50 > *(_DWORD *)(v91 + 172) )
          {
            v53 = DynArrayImpl<0>::AddMultipleAndSet(v91 + 152, 8, 1, &v93);
            v51 = v53;
            if ( v53 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0xC0u);
          }
          else
          {
            v52 = (CContactManager *)*(unsigned int *)(v91 + 176);
            *(_QWORD *)(*(_QWORD *)(v91 + 152) + 8LL * (_QWORD)v52) = v47;
            *(_DWORD *)(v48 + 176) = v50;
          }
        }
        else
        {
          v51 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v54 = *(volatile signed __int32 **)(v16 + 56);
        if ( v51 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v52, (struct CTouchVisual *)v54);
        }
        else
        {
          _InterlockedIncrement(v54 + 2);
          CIndirectTouchVisual::StartIdle(*(_QWORD *)(v16 + 56), &v90, *(unsigned int *)(v16 + 40));
        }
        v39 = *(CContactManager **)(v16 + 56);
        if ( v39 )
          CBaseObject::Release(v39);
      }
    }
    v55 = *(struct CTouchVisual **)(v16 + 80);
    CContactManager::StopAndRemoveFromRootNode(v39, v55);
    if ( v55 )
      CBaseObject::Release(v55);
    v56 = *(_QWORD *)(v16 + 64);
    if ( !v56 )
    {
LABEL_125:
      v69 = *(_QWORD *)(v16 + 72);
      v70 = (_QWORD *)(v48 + 152);
      if ( v69 )
      {
        v71 = (CContactManager *)*(unsigned int *)(v48 + 176);
        v94 = *(_QWORD *)(v16 + 72);
        v72 = (_DWORD)v71 + 1;
        if ( (int)v71 + 1 >= (unsigned int)v71 )
        {
          v73 = 0;
          if ( v72 > *(_DWORD *)(v48 + 172) )
          {
            v75 = DynArrayImpl<0>::AddMultipleAndSet(v48 + 152, 8, 1, &v94);
            v73 = v75;
            if ( v75 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v75, 0xC0u);
          }
          else
          {
            v74 = v71;
            *(_QWORD *)(*v70 + 8LL * (_QWORD)v71) = v69;
            *(_DWORD *)(v48 + 176) = v72;
          }
        }
        else
        {
          v73 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v76 = *(volatile signed __int32 **)(v16 + 72);
        if ( v73 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v74, (struct CTouchVisual *)v76);
        }
        else
        {
          _InterlockedIncrement(v76 + 2);
          CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v16 + 72));
        }
        v77 = *(CBaseObject **)(v16 + 72);
        if ( v77 )
          CBaseObject::Release(v77);
      }
      v78 = *(struct CTouchVisual **)(v16 + 88);
      if ( !v78 )
        goto LABEL_150;
      if ( CPressTapVisual::IsOKToCleanup(*(CPressTapVisual **)(v16 + 88)) )
        goto LABEL_147;
      v80 = *(unsigned int *)(v48 + 176);
      v95 = v78;
      v81 = v80 + 1;
      if ( (int)v80 + 1 < (unsigned int)v80 )
      {
        v82 = 181;
LABEL_146:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, v82);
        v78 = *(struct CTouchVisual **)(v16 + 88);
LABEL_147:
        CContactManager::StopAndRemoveFromRootNode(v79, v78);
LABEL_148:
        v83 = *(CBaseObject **)(v16 + 88);
        if ( v83 )
          CBaseObject::Release(v83);
LABEL_150:
        DynArray<CTouchContact,0>::RemoveAt(v96, v92);
        return v7;
      }
      if ( v81 > *(_DWORD *)(v48 + 172) )
      {
        v40 = DynArrayImpl<0>::AddMultipleAndSet(v48 + 152, 8, 1, &v95);
        if ( v40 < 0 )
        {
          v82 = 192;
          goto LABEL_146;
        }
      }
      else
      {
        *(_QWORD *)(*v70 + 8 * v80) = v78;
        *(_DWORD *)(v48 + 176) = v81;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 88) + 8LL));
      goto LABEL_148;
    }
    v57 = 0;
    if ( CTouchPressHoldVisual::IsHolding(*(CTouchPressHoldVisual **)(v16 + 64)) )
    {
      LODWORD(v97) = *(_DWORD *)v16;
      v59 = *(unsigned int *)(v48 + 304);
      *((_QWORD *)&v97 + 1) = v56;
      v60 = v59 + 1;
      if ( (int)v59 + 1 >= (unsigned int)v59 )
      {
        v61 = 0;
        if ( v60 > *(_DWORD *)(v48 + 300) )
        {
          v62 = DynArrayImpl<0>::AddMultipleAndSet(v48 + 280, 16, 1, &v97);
          v61 = v62;
          if ( v62 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v62, 0xC0u);
        }
        else
        {
          v58 = 2 * v59;
          *(_OWORD *)(*(_QWORD *)(v48 + 280) + 16 * v59) = v97;
          *(_DWORD *)(v48 + 304) = v60;
        }
      }
      else
      {
        v61 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      v57 = v61 >= 0;
      goto LABEL_117;
    }
    if ( *(_DWORD *)(v56 + 304) == 1 || CTouchPressHoldVisual::IsOKToCleanup((CTouchPressHoldVisual *)v58) )
    {
LABEL_117:
      v67 = *(volatile signed __int32 **)(v16 + 64);
      if ( v57 )
        _InterlockedIncrement(v67 + 2);
      else
        CContactManager::StopAndRemoveFromRootNode((CContactManager *)v58, (struct CTouchVisual *)v67);
      v68 = *(CBaseObject **)(v16 + 64);
      if ( v68 )
        CBaseObject::Release(v68);
      goto LABEL_125;
    }
    v91 = v56;
    v63 = *(_DWORD *)(v48 + 176);
    v64 = v63 + 1;
    if ( v63 + 1 < v63 )
    {
      v65 = -2147024362;
      v66 = 181;
LABEL_121:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v65, v66);
      goto LABEL_117;
    }
    if ( v64 > *(_DWORD *)(v48 + 172) )
    {
      v65 = DynArrayImpl<0>::AddMultipleAndSet(v48 + 152, 8, 1, &v91);
      if ( v65 < 0 )
      {
        v66 = 192;
        goto LABEL_121;
      }
    }
    else
    {
      v58 = *(unsigned int *)(v48 + 176);
      *(_QWORD *)(*(_QWORD *)(v48 + 152) + 8 * v58) = v56;
      *(_DWORD *)(v48 + 176) = v64;
    }
    v57 = 1;
    goto LABEL_117;
  }
  if ( *(_BYTE *)(v16 + 97) )
  {
    if ( *(_BYTE *)(v16 + 96) )
    {
      v27 = *(struct CTouchVisual **)(v16 + 80);
      CContactManager::StopAndRemoveFromRootNode(v15, v27);
      if ( v27 )
        CBaseObject::Release(v27);
      *(_QWORD *)(v16 + 80) = 0LL;
      *(_BYTE *)(v16 + 96) = 0;
    }
    if ( !*(_BYTE *)(v12 + 324) && !*(_QWORD *)(v16 + 72) && !*(_QWORD *)(v16 + 88) && !*(_QWORD *)(v16 + 64) )
    {
      if ( *(_DWORD *)(v16 + 40) )
      {
        v28 = *(CDirectTouchVisual **)(v16 + 48);
        if ( !v28 || !CDirectTouchVisual::IsInInitialDelay(v28) )
        {
          v29 = (__int64 *)(v16 + 80);
          if ( !*(_QWORD *)(v16 + 80) )
          {
            v30 = (unsigned int)((v11.x - *(_DWORD *)(v16 + 16)) * (v11.x - *(_DWORD *)(v16 + 16))
                               + (v90.y - *(_DWORD *)(v16 + 20)) * (v90.y - *(_DWORD *)(v16 + 20)));
            if ( (int)v30 > (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 53) * 225.0) )
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
                McTemplateU0q_EtwEventWriteTransfer(v30, (int)&UdwmTouchDragVisual_Start, a2);
              Touch = CreateTouchVisual<CTouchDragVisual>(a7, (CBaseObject **)(v16 + 80));
              v7 = Touch;
              if ( Touch < 0 )
              {
                v88 = 1167;
LABEL_46:
                v32 = Touch;
LABEL_47:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, v88);
                return v7;
              }
              CTouchDragVisual::UpdateShowContact(*v29, *(_DWORD *)(v16 + 40));
              Touch = CContactManager::AddToTouchNode(v33, a7, (struct CVisual *)*v29);
              v7 = Touch;
              if ( Touch < 0 )
              {
                v88 = 1169;
                goto LABEL_46;
              }
              v7 = 0;
              *(_QWORD *)(*v29 + 456) = v12;
              v34 = *(CDirectTouchVisual **)(v16 + 48);
              *(_BYTE *)(v16 + 96) = 0;
              if ( v34 )
                CDirectTouchVisual::FadeOut(v34);
            }
          }
          if ( *v29 )
          {
            CTouchDragVisual::NotifyTouchDrag((CTouchDragVisual *)*v29, &v90);
            v11 = v90;
          }
        }
      }
    }
  }
  v35 = v93;
  v36 = *(float **)(v16 + 48);
  *(struct tagPOINT *)(v16 + 8) = v11;
  *(struct tagRECT *)(v16 + 24) = *v35;
  if ( v36 )
    CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)v36, &v90, v35, v36[89]);
  v37 = *(CIndirectTouchVisual **)(v16 + 56);
  if ( v37 )
  {
    if ( *(_DWORD *)(v16 + 4) == 1 )
    {
      CIndirectTouchVisual::UpdateLocation(v37, &v90);
    }
    else
    {
      CIndirectTouchVisual::StartEngage(v37, &v90, *(unsigned int *)(v16 + 40));
      *(_DWORD *)(v16 + 4) = 1;
    }
  }
  v38 = *(CTetherVisual **)(v16 + 72);
  if ( v38 )
    CTetherVisual::UpdatePosition(v38, 0LL, &v90);
  return v7;
}
