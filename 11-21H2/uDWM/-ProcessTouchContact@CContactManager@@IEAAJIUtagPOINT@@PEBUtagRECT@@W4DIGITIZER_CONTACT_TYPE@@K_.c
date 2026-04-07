/*
 * XREFs of ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800ACD7C
 * Callers:
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800AB6E0 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x1800AC5F4 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180008C6C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003FD24 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004E86C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18004F050 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18004F280 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006A362 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18006A7F4 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x1800A9C2C (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800AA190 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x1800AA684 (-AddMultipleAndSet@-$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x1800AAA10 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x1800AAA38 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800AAD6C (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x1800AB340 (-IsOKToCleanup@CPressTapVisual@@UEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x1800ADA24 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800ADC3C (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x1800B3E44 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x1800B3F50 (-IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B3F70 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C0E70 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C1018 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C11B0 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800C14FC (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800E2610 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800E2BB4 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x1800E8204 (-IsHolding@CTouchPressHoldVisual@@QEAA_NXZ.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800E8230 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
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
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r15d
  struct tagPOINT v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rdi
  CIndirectTouchVisual *v17; // rcx
  struct tagRECT *v18; // r8
  CContactManager *v19; // r10
  unsigned int v20; // eax
  unsigned int v21; // edx
  CContactManager *v22; // rcx
  CBaseObject *v23; // rcx
  int v24; // eax
  struct CTouchVisual *v25; // r14
  CDirectTouchVisual *v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rcx
  int Touch; // eax
  int v30; // r9d
  CContactManager *v31; // rcx
  CDirectTouchVisual *v32; // rcx
  CTouchDragVisual *v33; // rcx
  struct tagRECT *v34; // rax
  float *v35; // rcx
  CIndirectTouchVisual *v36; // rcx
  CTetherVisual *v37; // rcx
  CContactManager *v38; // rcx
  char v39; // r9
  struct CTouchVisual *v40; // r14
  int v41; // r14d
  CContactManager *v42; // r12
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // r8
  char v46; // al
  int started; // eax
  __int64 v48; // rdx
  unsigned int v49; // eax
  unsigned int v50; // r8d
  CContactManager *v51; // rcx
  int v52; // eax
  struct CTouchVisual *v53; // r14
  CContactManager *v54; // r14
  CContactManager *v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // edx
  int v58; // r14d
  unsigned int v59; // r13d
  int v60; // eax
  volatile signed __int32 *v61; // rdx
  unsigned int v62; // eax
  unsigned int v63; // edx
  int v64; // r9d
  unsigned int v65; // eax
  CBaseObject *v66; // rcx
  __int64 v67; // rdx
  unsigned int v68; // eax
  unsigned int v69; // r8d
  CContactManager *v70; // rcx
  CBaseObject *v71; // rcx
  struct CTouchVisual *v72; // r14
  CContactManager *v73; // rcx
  unsigned int v74; // eax
  unsigned int v75; // edx
  int v76; // eax
  int v77; // eax
  CBaseObject *v78; // rcx
  void *v79; // rdx
  struct tagRECT v80; // xmm0
  CContactManager *v81; // rcx
  CContactManager *v82; // rcx
  unsigned int v84; // [rsp+20h] [rbp-E0h]
  char v85; // [rsp+40h] [rbp-C0h]
  CContactManager *v86; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT v87; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v88; // [rsp+58h] [rbp-A8h]
  struct tagRECT *v89; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v90; // [rsp+68h] [rbp-98h] BYREF
  struct CTouchVisual *v91; // [rsp+70h] [rbp-90h] BYREF
  __int128 v92; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v93[2]; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v94; // [rsp+98h] [rbp-68h]
  struct tagPOINT v95; // [rsp+A0h] [rbp-60h]
  struct tagRECT v96; // [rsp+A8h] [rbp-58h]
  unsigned int v97; // [rsp+B8h] [rbp-48h]
  int v98; // [rsp+BCh] [rbp-44h]
  struct CVisual *v99[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v100; // [rsp+D0h] [rbp-30h]
  __int64 v101; // [rsp+D8h] [rbp-28h]
  __int64 v102; // [rsp+E0h] [rbp-20h]
  __int64 v103; // [rsp+E8h] [rbp-18h]
  char v104; // [rsp+F0h] [rbp-10h]
  char v105; // [rsp+F1h] [rbp-Fh]
  int v106; // [rsp+F2h] [rbp-Eh]
  __int16 v107; // [rsp+F6h] [rbp-Ah]

  v8 = 0xFFFFFFFFLL;
  v9 = 0;
  v89 = a4;
  v10 = 0;
  v86 = (CContactManager *)a1;
  v11 = a3;
  v12 = a1;
  v87 = a3;
  v88 = -1;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v13 = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      a1 = 104LL * v9;
      if ( *(_DWORD *)(a1 + v13) == a2 )
        break;
      if ( ++v9 >= *(_DWORD *)(v12 + 80) )
      {
        v8 = v88;
        goto LABEL_7;
      }
    }
    v8 = v9;
    v88 = v9;
  }
LABEL_7:
  v14 = a5;
  if ( (a6 & 0x80) == 0 && a5 == 1 )
    v14 = 3;
  if ( (int)v8 < 0 )
  {
    if ( v14 != 2 && (v14 != 1 || (a6 & 0x80) == 0) )
      return v10;
    if ( a6 < 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0 )
        goto LABEL_163;
      v79 = &UdwmIndirectTouchVisual_Received_Info;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0 )
        goto LABEL_163;
      v79 = &UdwmDirectTouchDownAnimation_Start;
    }
    McTemplateU0q_EtwEventWriteTransfer(a1, (int)v79, a2);
LABEL_163:
    v94 = v11;
    v95 = v11;
    v98 = 0;
    v106 = 0;
    v107 = 0;
    v80 = *v89;
    v97 = -1;
    v101 = 0LL;
    v102 = 0LL;
    v100 = 0LL;
    v103 = 0LL;
    v93[0] = a2;
    v93[1] = v14 == 2;
    *(_OWORD *)v99 = 0LL;
    v104 = 0;
    v96 = v80;
    if ( a6 < 0 )
    {
      v105 = 0;
      Touch = CreateTouchVisual<CIndirectTouchVisual>(a7, &v99[1]);
      v10 = Touch;
      if ( Touch < 0 )
      {
        v84 = 1379;
        goto LABEL_45;
      }
      *((_DWORD *)v99[1] + 106) = a2;
      CContactManager::AddToTouchNode(v82, a7, v99[1]);
      if ( v14 == 1 )
        CIndirectTouchVisual::StartHover(v99[1], &v87, v97);
      else
        CIndirectTouchVisual::StartEngage(v99[1], &v87, v97);
    }
    else
    {
      v105 = 1;
      Touch = CreateTouchVisual<CDirectTouchVisual>(a7, v99);
      v10 = Touch;
      if ( Touch < 0 )
      {
        v84 = 1373;
        goto LABEL_45;
      }
      CContactManager::AddToTouchNode(v81, a7, v99[0]);
      CDirectTouchVisual::StartDown(v99[0], &v87, v89, v97);
    }
    DynArray<CTouchContact,0>::AddMultipleAndSet(v12 + 56, (__int64)v93);
    return v10;
  }
  v15 = *(_QWORD *)(v12 + 56);
  v16 = 104 * v8;
  if ( v14 != 1 )
  {
    if ( v14 == 2 )
    {
      if ( *(_BYTE *)(v16 + v15 + 97) )
      {
        if ( *(_BYTE *)(v16 + v15 + 96) )
        {
          v25 = *(struct CTouchVisual **)(v16 + v15 + 80);
          CContactManager::StopAndRemoveFromRootNode((CContactManager *)a1, v25);
          if ( v25 )
            CBaseObject::Release(v25);
          *(_QWORD *)(v16 + v15 + 80) = 0LL;
          *(_BYTE *)(v16 + v15 + 96) = 0;
        }
        if ( !*((_BYTE *)v86 + 324)
          && !*(_QWORD *)(v16 + v15 + 72)
          && !*(_QWORD *)(v16 + v15 + 88)
          && !*(_QWORD *)(v16 + v15 + 64) )
        {
          if ( *(_DWORD *)(v16 + v15 + 40) )
          {
            v26 = *(CDirectTouchVisual **)(v16 + v15 + 48);
            if ( !v26 || !CDirectTouchVisual::IsInInitialDelay(v26) )
            {
              v27 = v16 + v15;
              if ( !*(_QWORD *)(v16 + v15 + 80) )
              {
                v28 = (unsigned int)((v11.x - *(_DWORD *)(v16 + v15 + 16)) * (v11.x - *(_DWORD *)(v16 + v15 + 16))
                                   + (v87.y - *(_DWORD *)(v16 + v15 + 20)) * (v87.y - *(_DWORD *)(v16 + v15 + 20)));
                if ( (int)v28 > (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 51) * 225.0) )
                {
                  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
                    McTemplateU0q_EtwEventWriteTransfer(v28, (int)&UdwmTouchDragVisual_Start, a2);
                  Touch = CreateTouchVisual<CTouchDragVisual>(a7, (CBaseObject **)(v27 + 80));
                  v10 = Touch;
                  if ( Touch < 0 )
                  {
                    v84 = 1163;
LABEL_45:
                    v30 = Touch;
LABEL_46:
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, v84);
                    return v10;
                  }
                  CTouchDragVisual::UpdateShowContact(*(_QWORD *)(v27 + 80), *(_DWORD *)(v16 + v15 + 40));
                  Touch = CContactManager::AddToTouchNode(v31, a7, *(struct CVisual **)(v27 + 80));
                  v10 = Touch;
                  if ( Touch < 0 )
                  {
                    v84 = 1165;
                    goto LABEL_45;
                  }
                  *(_QWORD *)(*(_QWORD *)(v27 + 80) + 456LL) = v86;
                  v32 = *(CDirectTouchVisual **)(v16 + v15 + 48);
                  *(_BYTE *)(v16 + v15 + 96) = 0;
                  if ( v32 )
                    CDirectTouchVisual::FadeOut(v32);
                }
              }
              v33 = *(CTouchDragVisual **)(v27 + 80);
              if ( v33 )
              {
                CTouchDragVisual::NotifyTouchDrag(v33, &v87);
                v11 = v87;
              }
            }
          }
        }
      }
      v34 = v89;
      v35 = *(float **)(v16 + v15 + 48);
      *(struct tagPOINT *)(v16 + v15 + 8) = v11;
      *(struct tagRECT *)(v16 + v15 + 24) = *v34;
      if ( v35 )
        CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)v35, &v87, v34, v35[89]);
      v36 = *(CIndirectTouchVisual **)(v16 + v15 + 56);
      if ( v36 )
      {
        if ( *(_DWORD *)(v16 + v15 + 4) == 1 )
        {
          CIndirectTouchVisual::UpdateLocation(v36, &v87);
        }
        else
        {
          CIndirectTouchVisual::StartEngage(v36, &v87, *(unsigned int *)(v16 + v15 + 40));
          *(_DWORD *)(v16 + v15 + 4) = 1;
        }
      }
      v37 = *(CTetherVisual **)(v16 + v15 + 72);
      if ( v37 )
        CTetherVisual::UpdatePosition(v37, 0LL, &v87);
      return 0;
    }
    if ( v14 != 3 )
    {
      v10 = -2147024809;
      v30 = -2147024809;
      v84 = 1338;
      goto LABEL_46;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(a1, (int)&UdwmTouchUpReceived_Info, a2);
    CContactManager::CleanupFinishedAnimations(v86);
    v39 = 0;
    if ( *(_BYTE *)(v16 + v15 + 97) )
    {
      v40 = *(struct CTouchVisual **)(v16 + v15 + 48);
      if ( !v40 || (v85 = 1, !CDirectTouchVisual::IsInInitialDelay(*(CDirectTouchVisual **)(v16 + v15 + 48))) )
        v85 = v39;
      CContactManager::StopAndRemoveFromRootNode(v38, v40);
      if ( v40 )
        CBaseObject::Release(v40);
      v41 = *(_DWORD *)(v16 + v15 + 40);
      if ( !CContactManager::CheckShowContact((__int64)v86, v41, 2)
        || !*(_DWORD *)(v16 + v15 + 4)
        || *(_QWORD *)(v16 + v15 + 80) && CContactManager::CheckShowContact((__int64)v38, v41, 4)
        || *(_QWORD *)(v16 + v15 + 64)
        || *(_QWORD *)(v16 + v15 + 88) )
      {
        v42 = v38;
      }
      else
      {
        v42 = v38;
        if ( (int)CContactManager::FindStationaryAnimation((__int64)v38, a2, 2) < 0
          && (int)CContactManager::FindStationaryAnimation((__int64)v38, v43, 3) < 0 )
        {
          v46 = !CContactManager::CheckShowContact((__int64)v38, v41, 1) || v85 ? v45 : 0;
          started = CContactManager::StartStationaryAnimationWithDelay(v44, a2, v45, &v87, v89, a7, v46);
          v10 = started;
          if ( started < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x4DCu);
            return v10;
          }
        }
      }
LABEL_98:
      v53 = *(struct CTouchVisual **)(v16 + v15 + 80);
      CContactManager::StopAndRemoveFromRootNode(v38, v53);
      if ( v53 )
        CBaseObject::Release(v53);
      v54 = *(CContactManager **)(v16 + v15 + 64);
      if ( !v54 )
      {
        v59 = 181;
        goto LABEL_128;
      }
      if ( CTouchPressHoldVisual::IsHolding(*(CTouchPressHoldVisual **)(v16 + v15 + 64)) )
      {
        LODWORD(v92) = *(_DWORD *)(v16 + v15);
        v56 = *((unsigned int *)v42 + 76);
        *((_QWORD *)&v92 + 1) = v54;
        v57 = v56 + 1;
        if ( (int)v56 + 1 >= (unsigned int)v56 )
        {
          v58 = 0;
          if ( v57 > *((_DWORD *)v42 + 75) )
          {
            v60 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v42 + 280, 0x10u, 1, &v92);
            v58 = v60;
            if ( v60 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v60, 0xC0u);
          }
          else
          {
            v55 = (CContactManager *)(2 * v56);
            *(_OWORD *)(*((_QWORD *)v42 + 35) + 16 * v56) = v92;
            *((_DWORD *)v42 + 76) = v57;
          }
          v59 = 181;
        }
        else
        {
          v58 = -2147024362;
          v59 = 181;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v61 = *(volatile signed __int32 **)(v16 + v15 + 64);
        if ( v58 >= 0 )
          goto LABEL_118;
LABEL_124:
        CContactManager::StopAndRemoveFromRootNode(v55, (struct CTouchVisual *)v61);
LABEL_125:
        v66 = *(CBaseObject **)(v16 + v15 + 64);
        if ( v66 )
          CBaseObject::Release(v66);
LABEL_128:
        v67 = *(_QWORD *)(v16 + v15 + 72);
        if ( !v67 )
          goto LABEL_136;
        v90 = *(_QWORD *)(v16 + v15 + 72);
        v68 = *((_DWORD *)v42 + 44);
        v69 = v68 + 1;
        if ( v68 + 1 < v68 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_142:
          CContactManager::StopAndRemoveFromRootNode(v70, *(struct CTouchVisual **)(v16 + v15 + 72));
LABEL_134:
          v71 = *(CBaseObject **)(v16 + v15 + 72);
          if ( v71 )
            CBaseObject::Release(v71);
LABEL_136:
          v72 = *(struct CTouchVisual **)(v16 + v15 + 88);
          if ( !v72 )
          {
LABEL_152:
            DynArray<CTouchContact,0>::RemoveAt((char *)v42 + 56, v88);
            return v10;
          }
          if ( CPressTapVisual::IsOKToCleanup(*(CPressTapVisual **)(v16 + v15 + 88)) )
            goto LABEL_149;
          v91 = v72;
          v74 = *((_DWORD *)v42 + 44);
          v75 = v74 + 1;
          if ( v74 + 1 < v74 )
          {
            v76 = -2147024362;
LABEL_148:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v76, v59);
            v72 = *(struct CTouchVisual **)(v16 + v15 + 88);
LABEL_149:
            CContactManager::StopAndRemoveFromRootNode(v73, v72);
LABEL_150:
            v78 = *(CBaseObject **)(v16 + v15 + 88);
            if ( v78 )
              CBaseObject::Release(v78);
            goto LABEL_152;
          }
          if ( v75 > *((_DWORD *)v42 + 43) )
          {
            v76 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v42 + 152, 8u, 1, &v91);
            if ( v76 < 0 )
            {
              v59 = 192;
              goto LABEL_148;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)v42 + 19) + 8LL * *((unsigned int *)v42 + 44)) = v72;
            *((_DWORD *)v42 + 44) = v75;
          }
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + v15 + 88) + 8LL));
          goto LABEL_150;
        }
        if ( v69 > *((_DWORD *)v42 + 43) )
        {
          v77 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v42 + 152, 8u, 1, &v90);
          if ( v77 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v77, 0xC0u);
            goto LABEL_142;
          }
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)v42 + 19) + 8LL * *((unsigned int *)v42 + 44)) = v67;
          *((_DWORD *)v42 + 44) = v69;
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + v15 + 72) + 8LL));
        CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v16 + v15 + 72));
        goto LABEL_134;
      }
      if ( *((_DWORD *)v54 + 76) == 1 || CTouchPressHoldVisual::IsOKToCleanup(v55) )
      {
        v59 = 181;
        goto LABEL_123;
      }
      v86 = v54;
      v62 = *((_DWORD *)v42 + 44);
      v63 = v62 + 1;
      if ( v62 + 1 < v62 )
      {
        v59 = 181;
        v64 = -2147024362;
        v65 = 181;
LABEL_121:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v64, v65);
LABEL_123:
        v61 = *(volatile signed __int32 **)(v16 + v15 + 64);
        goto LABEL_124;
      }
      if ( v63 > *((_DWORD *)v42 + 43) )
      {
        v64 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v42 + 152, 8u, 1, &v86);
        if ( v64 < 0 )
        {
          v65 = 192;
          v59 = 181;
          goto LABEL_121;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v42 + 19) + 8LL * *((unsigned int *)v42 + 44)) = v54;
        *((_DWORD *)v42 + 44) = v63;
      }
      v61 = *(volatile signed __int32 **)(v16 + v15 + 64);
      v59 = 181;
LABEL_118:
      _InterlockedIncrement(v61 + 2);
      goto LABEL_125;
    }
    v48 = *(_QWORD *)(v16 + v15 + 56);
    v42 = v86;
    if ( !v48 )
      goto LABEL_98;
    v89 = *(struct tagRECT **)(v16 + v15 + 56);
    v49 = *((_DWORD *)v86 + 44);
    v50 = v49 + 1;
    if ( v49 + 1 < v49 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_96:
      CContactManager::StopAndRemoveFromRootNode(v51, *(struct CTouchVisual **)(v16 + v15 + 56));
LABEL_92:
      v38 = *(CContactManager **)(v16 + v15 + 56);
      if ( v38 )
        CBaseObject::Release(v38);
      goto LABEL_98;
    }
    if ( v50 > *((_DWORD *)v86 + 43) )
    {
      v52 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v86 + 152, 8u, 1, &v89);
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0xC0u);
        goto LABEL_96;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v86 + 19) + 8LL * *((unsigned int *)v86 + 44)) = v48;
      *((_DWORD *)v42 + 44) = v50;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + v15 + 56) + 8LL));
    CIndirectTouchVisual::StartIdle(*(_QWORD *)(v16 + v15 + 56), &v87, *(unsigned int *)(v16 + v15 + 40));
    goto LABEL_92;
  }
  v17 = *(CIndirectTouchVisual **)(v16 + v15 + 56);
  if ( v17 )
  {
    if ( !*(_DWORD *)(v16 + v15 + 4) )
    {
      CIndirectTouchVisual::UpdateLocation(v17, &v87);
      return v10;
    }
    CIndirectTouchVisual::StartHover(v17, &v87, *(unsigned int *)(v16 + v15 + 40));
    v18 = *(struct tagRECT **)(v16 + v15 + 72);
    *(_DWORD *)(v16 + v15 + 4) = 0;
    if ( v18 )
    {
      v19 = v86;
      v89 = v18;
      v20 = *((_DWORD *)v86 + 44);
      v21 = v20 + 1;
      if ( v20 + 1 < v20 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_24:
        CContactManager::StopAndRemoveFromRootNode(v22, *(struct CTouchVisual **)(v16 + v15 + 72));
LABEL_20:
        v23 = *(CBaseObject **)(v16 + v15 + 72);
        if ( v23 )
        {
          CBaseObject::Release(v23);
          *(_QWORD *)(v16 + v15 + 72) = 0LL;
        }
        return v10;
      }
      if ( v21 > *((_DWORD *)v86 + 43) )
      {
        v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v86 + 152, 8u, 1, &v89);
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xC0u);
          goto LABEL_24;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v86 + 19) + 8LL * *((unsigned int *)v86 + 44)) = v18;
        *((_DWORD *)v19 + 44) = v21;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + v15 + 72) + 8LL));
      CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v16 + v15 + 72));
      goto LABEL_20;
    }
  }
  return v10;
}
