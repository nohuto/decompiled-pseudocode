/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031A20
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800318A0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180035E5C (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180002A18 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800056C0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180006D20 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000CE7C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180013838 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x1800166B4 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18003211C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180034310 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800369CC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18003721C (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800379C8 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800551B4 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memmove_0 @ 0x180066364 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800AD25C (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800C268C (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800C3C28 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800C3EE0 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@@Z @ 0x1800C45D4 (-Remove@-$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQE.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x1800E76DC (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x1801058A8 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180107510 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x18010B9F8 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18010C36C (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18010CACC (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  struct CWindowData *v2; // rdi
  CWindowList *v3; // r12
  _BYTE *v4; // rsi
  __int64 v5; // rbx
  int v6; // ecx
  CBaseObject *v7; // rcx
  CWindowIconic **v8; // r13
  CBaseObject *v9; // rcx
  int j; // eax
  CDesktopManager *v11; // rbx
  __int64 v12; // rax
  CWindowPropertyTracker *v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 k; // rbp
  CBaseObject *v20; // rcx
  CTopLevelWindow3D **v21; // r14
  struct CVisual *v22; // rdx
  struct CVisual *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  CVisual *v26; // rcx
  __int64 v27; // rbx
  CBaseObject *v28; // rcx
  __int64 v29; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v30; // rbp
  __int64 v31; // rdx
  unsigned int v32; // ecx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource ***v33; // r15
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v34; // rbp
  unsigned int v35; // ecx
  unsigned int v36; // eax
  __int64 m; // rbp
  __int64 v38; // rbx
  struct CWindowData **v39; // r9
  __int64 v40; // r8
  unsigned int v41; // ecx
  CBaseObject *v42; // rcx
  struct CWindowData **v43; // r8
  unsigned int v44; // eax
  struct CWindowData *v45; // rdx
  CDesktopManager *v46; // rbx
  CWindowList *v47; // rbx
  CDisplayAnimatedVisual *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  signed int v53; // r14d
  __int64 *v54; // r12
  __int64 v55; // rbx
  __int64 v56; // r15
  CBaseObject *v57; // rcx
  __int64 v58; // rcx
  CTopLevelWindow3D *v59; // rbx
  __int64 v60; // rcx
  CBaseObject *v61; // rcx
  int v62; // ecx
  int v63; // ecx
  __int64 v64; // r8
  __int64 i; // rbx
  __int64 v66; // rcx
  struct CVisual *v67; // rdx
  __int64 v68; // rax
  CBaseObject *v69; // rcx
  unsigned int v70; // r8d
  unsigned int v71; // r9d
  __int64 v72; // rdx
  struct CWindowData *v73; // rcx
  int v74; // eax
  int v75; // eax
  struct CSecondaryWindowRepresentation **v76; // rax
  struct CSecondaryWindowRepresentation *v77; // rbx
  CWindowData *v78; // rcx
  CWindowData *v79; // rcx
  CBaseObject *v80; // rcx
  int v81; // eax
  struct CVisual *v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rcx
  unsigned int v85; // edx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **v86; // r8
  unsigned int v87; // edx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  CWindowIconic *v92; // rbx
  struct CWindowData **v93; // rcx
  int v94; // edx
  __int64 v95; // rsi
  struct CWindowData **v96; // rcx
  struct CWindowData **v97; // rdx
  int v98; // eax
  unsigned int v99; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CWindowData *v102; // [rsp+88h] [rbp+10h] BYREF
  struct CWindowData *v103; // [rsp+90h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v104; // [rsp+98h] [rbp+20h]

  v102 = a2;
  v2 = a2;
  v3 = this;
  v4 = (char *)a2 + 674;
  if ( (*((_BYTE *)a2 + 674) & 2) != 0 )
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 62, &v102);
  while ( *((_DWORD *)v2 + 140) )
    CWindowList::UnregisterThumbnail(v3, **((struct CVisual ****)v2 + 67));
  while ( *((_DWORD *)v2 + 148) )
    CWindowList::UnregisterThumbnail(v3, **((struct CVisual ****)v2 + 71));
  v103 = v2;
  v5 = *((_QWORD *)v2 + 75);
  if ( v5 )
  {
    CWindowData::UpdateOwnerLists(v2, 0);
    *((_QWORD *)v103 + 75) = 0LL;
    DynArray<CWindowData *,0>::Remove((__int64 *)(v5 + 608), &v103);
    v70 = 0;
    v71 = *(_DWORD *)(v5 + 520);
    if ( !v71 )
      goto LABEL_112;
    v72 = *(_QWORD *)(v5 + 496);
    v73 = v103;
    while ( *(struct CWindowData **)(*(_QWORD *)v72 + 64LL) != v103 )
    {
      ++v70;
      v72 += 8LL;
      if ( v70 >= v71 )
        goto LABEL_113;
    }
    v74 = CWindowData::NotifyRepresentationChanged((CWindowData *)v5);
    if ( v74 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0x1183u, 0LL);
    }
    else
    {
LABEL_112:
      v73 = v103;
LABEL_113:
      *((_QWORD *)v73 + 75) = 0LL;
      v75 = CWindowList::ReevaluateAutoParenting(v3, v103, 0);
      if ( v75 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1198,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v75,
          v99);
    }
  }
  while ( *((_DWORD *)v2 + 130) )
  {
    v76 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)v2 + 62);
    v77 = *v76;
    v78 = (CWindowData *)*((_QWORD *)*v76 + 4);
    if ( v2 == v78 )
    {
      if ( *((_BYTE *)v77 + 160) )
      {
        CWindowData::RemoveSecondaryWindowRepresentation(v78, *v76);
        *((_BYTE *)v77 + 160) = 0;
      }
      *((_QWORD *)v77 + 4) = 0LL;
    }
    CWindowData::RemoveSecondaryWindowRepresentation(v2, v77);
  }
  v6 = *((_DWORD *)v2 + 33);
  if ( (v6 < 8 || (v62 = v6 - 8) != 0 && (v63 = v62 - 1) != 0 && (unsigned int)(v63 - 1) > 1) && *((char *)v2 + 676) < 0 )
    GetPropW(*((HWND *)v2 + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow");
  v7 = (CBaseObject *)*((_QWORD *)v2 + 60);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)v2 + 60) = 0LL;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v2 + 158); i = (unsigned int)(i + 1) )
    {
      v79 = *(CWindowData **)(*((_QWORD *)v2 + 76) + 8 * i);
      if ( (*((_DWORD *)v79 + 29) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v79, 0, v64, 0);
    }
  }
  v8 = (CWindowIconic **)((char *)v2 + 488);
  v9 = (CBaseObject *)*((_QWORD *)v2 + 61);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *v8 = 0LL;
  }
  for ( j = *((_DWORD *)v2 + 158); j; j = *((_DWORD *)v2 + 158) )
    CWindowList::SetOwner(v3, *(struct CWindowData **)(*((_QWORD *)v2 + 76) + 8LL * (unsigned int)(j - 1)), 0LL);
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), v2, 0LL, 1);
  v11 = CDesktopManager::s_pDesktopManagerInstance;
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  if ( v12 )
  {
    v13 = (CWindowPropertyTracker *)(v12 + 48);
    v14 = *((_QWORD *)v2 + 5);
    v104 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = 0LL;
    v16 = *((_DWORD *)v13 + 6);
    if ( v16 )
    {
      while ( **(_QWORD **)(*(_QWORD *)v13 + 8 * v15) != v14 )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v16 )
          goto LABEL_21;
      }
      if ( (int)v15 >= 0 )
        CWindowPropertyTracker::_StopTrackingWindowByIndex(v13, v15);
    }
LABEL_21:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v11 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v17 = *((_QWORD *)v11 + 24);
  if ( v17 )
  {
    v18 = *((_QWORD *)v2 + 55);
    if ( v18 )
    {
      v53 = *(_DWORD *)(v17 + 48) - 1;
      if ( v53 >= 0 )
      {
        v54 = (__int64 *)(v17 + 24);
        v55 = 24LL * v53;
        do
        {
          v56 = v55 + *v54;
          v57 = *(CBaseObject **)v56;
          if ( *(_QWORD *)v56 == v18 )
          {
            v67 = *(struct CVisual **)(v56 + 8);
            v68 = *((_QWORD *)v67 + 3);
            if ( v68 && *(_BYTE *)(v56 + 16) )
            {
              VisualCollection::Remove((VisualCollection *)(v68 + 32), v67);
              v57 = *(CBaseObject **)v56;
            }
            if ( v57 )
              CBaseObject::Release(v57);
            v69 = *(CBaseObject **)(v56 + 8);
            if ( v69 )
              CBaseObject::Release(v69);
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v54, v53);
          }
          v55 -= 24LL;
          --v53;
        }
        while ( v53 >= 0 );
        v11 = CDesktopManager::s_pDesktopManagerInstance;
        v3 = this;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)v11 + 188); k = (unsigned int)(k + 1) )
  {
    v66 = *(_QWORD *)(*((_QWORD *)v11 + 91) + 8 * k);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v66 + 208LL))(v66, v2);
  }
  v20 = (CBaseObject *)*((_QWORD *)v2 + 80);
  if ( v20 )
  {
    CBaseObject::Release(v20);
    *((_QWORD *)v2 + 80) = 0LL;
  }
  v21 = (CTopLevelWindow3D **)((char *)v2 + 448);
  v22 = (struct CVisual *)*((_QWORD *)v2 + 56);
  if ( v22 )
  {
    v58 = *((_QWORD *)v22 + 3);
    if ( v58 )
      VisualCollection::Remove((VisualCollection *)(v58 + 32), v22);
    v59 = *v21;
    if ( *v21 )
    {
      if ( *((_QWORD *)v59 + 42) )
        CTopLevelWindow3D::StopAnimation(*v21);
      *((_QWORD *)v59 + 42) = 0LL;
    }
    if ( *v21 )
    {
      CBaseObject::Release(*v21);
      *v21 = 0LL;
    }
  }
  v23 = (struct CVisual *)*((_QWORD *)v2 + 55);
  if ( v23 )
  {
    v60 = *((_QWORD *)v23 + 3);
    if ( v60 )
      VisualCollection::Remove((VisualCollection *)(v60 + 32), v23);
    v61 = (CBaseObject *)*((_QWORD *)v2 + 55);
    if ( v61 )
    {
      CBaseObject::Release(v61);
      *((_QWORD *)v2 + 55) = 0LL;
    }
  }
  v24 = *((_QWORD *)v2 + 82);
  if ( v24 )
  {
    *(_QWORD *)(v24 + 648) = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 58)
                                                           + 80LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
      *(_QWORD *)(*((_QWORD *)v2 + 82) + 40LL),
      0LL,
      *((_QWORD *)v2 + 5));
  }
  v25 = *((_QWORD *)v2 + 81);
  if ( v25 )
  {
    *(_QWORD *)(v25 + 656) = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 58)
                                                           + 80LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
      *((_QWORD *)v2 + 5),
      0LL,
      *(_QWORD *)(*((_QWORD *)v2 + 81) + 40LL));
  }
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v26 = (CVisual *)*((_QWORD *)v2 + 58);
  if ( v26 )
  {
    CVisual::RemoveSelfFromParent(v26);
    v80 = (CBaseObject *)*((_QWORD *)v2 + 58);
    if ( v80 )
    {
      CBaseObject::Release(v80);
      *((_QWORD *)v2 + 58) = 0LL;
    }
    v81 = CWindowList::ReevaluateAutoParenting(v3, v2, 0);
    if ( v81 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x1F6Au, 0LL);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  v27 = *((_QWORD *)v2 + 55);
  if ( v27 )
  {
    if ( (*(_BYTE *)(v27 + 249) & 2) != 0 )
      CTopLevelWindow::ReleaseHolographicSlate(*((CTopLevelWindow **)v2 + 55));
    v82 = *(struct CVisual **)(v27 + 520);
    if ( v82 )
    {
      v83 = *((_QWORD *)v82 + 3);
      if ( v83 )
        VisualCollection::Remove((VisualCollection *)(v83 + 32), v82);
      v84 = *(_QWORD *)(v27 + 520);
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v84 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v84)(v84, 1LL);
        *(_QWORD *)(v27 + 520) = 0LL;
        v2 = v102;
      }
    }
  }
  v28 = (CBaseObject *)*((_QWORD *)v2 + 18);
  if ( v28 )
  {
    CBaseObject::Release(v28);
    *((_QWORD *)v2 + 18) = 0LL;
  }
  v29 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v30 = 0LL;
  v31 = 0LL;
  v32 = *(_DWORD *)(v29 + 40);
  if ( v32 )
  {
    while ( 1 )
    {
      v30 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)(*(_QWORD *)(v29 + 16) + 8 * v31);
      if ( *(_QWORD *)v30 == *((_QWORD *)v2 + 5) )
        break;
      v31 = (unsigned int)(v31 + 1);
      if ( (unsigned int)v31 >= v32 )
        goto LABEL_39;
    }
  }
  v102 = v30;
  if ( v30 )
  {
    v33 = (CImmersiveIconicBitmapRegistry::CImmersiveIconicResource ***)(v29 + 16);
    DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove(v29 + 16, &v102);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v30, v85);
  }
  else
  {
LABEL_39:
    v33 = (CImmersiveIconicBitmapRegistry::CImmersiveIconicResource ***)(v29 + 16);
  }
  v34 = 0LL;
  v35 = 0;
  v36 = *(_DWORD *)(v29 + 40);
  if ( v36 )
  {
    v86 = *v33;
    while ( 1 )
    {
      v34 = *v86;
      if ( *(_QWORD *)*v86 == *((_QWORD *)v2 + 5) )
        break;
      ++v35;
      ++v86;
      if ( v35 >= v36 )
        goto LABEL_43;
    }
  }
  v102 = v34;
  if ( v34 )
  {
    DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove(v33, &v102);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v34, v87);
  }
LABEL_43:
  for ( m = 0LL; (unsigned int)m < *(_DWORD *)(v29 + 72); m = (unsigned int)(m + 1) )
  {
    v88 = *(_QWORD *)(*(_QWORD *)(v29 + 48) + 8 * m);
    v89 = *(_QWORD *)(v88 + 304);
    if ( v89 )
      v89 = *(_QWORD *)(v89 + 40);
    if ( *((_QWORD *)v2 + 5) == v89 )
      CIconicAnimatedVisual::SetIconicData(v88, 0LL, 0LL, 0LL);
  }
  v38 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
  *v4 &= ~4u;
  *v4 &= 0xE7u;
  CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)v38, v2, 0);
  if ( (unsigned __int64)v2 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_BYTE *)(v38 + 88) = 0;
    v92 = *(CWindowIconic **)(v38 + 96);
  }
  else
  {
    v40 = 0LL;
    v39 = *(struct CWindowData ***)(v38 + 16);
    v41 = *(_DWORD *)(v38 + 40);
    if ( v41 )
    {
      do
      {
        if ( v2 == v39[v40] )
          break;
        v40 = (unsigned int)(v40 + 1);
      }
      while ( (unsigned int)v40 < v41 );
    }
    if ( (unsigned int)v40 < v41 )
    {
      if ( (unsigned int)v40 < v41 - 1 )
      {
        do
        {
          v90 = (unsigned int)(v40 + 1);
          v39[(unsigned int)v40] = v39[v90];
          LODWORD(v40) = v40 + 1;
          v41 = *(_DWORD *)(v38 + 40);
        }
        while ( (unsigned int)v90 < v41 - 1 );
      }
      *(_DWORD *)(v38 + 40) = v41 - 1;
    }
    else if ( !*((_QWORD *)v2 + 54) )
    {
      goto LABEL_48;
    }
    CWindowData::SetIconicBitmap(v2, 0LL);
    v92 = *v8;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v91, &UdwmManageIconicThumbnail_Info, 2LL);
  }
  if ( v92 )
    CWindowIconic::SetBitmap(v92, 0LL, 0, 1);
LABEL_48:
  v42 = (CBaseObject *)*((_QWORD *)v2 + 53);
  if ( v42 )
  {
    CBaseObject::Release(v42);
    *((_QWORD *)v2 + 53) = 0LL;
  }
  v43 = 0LL;
  v44 = *((_DWORD *)v3 + 150);
  if ( v44 )
  {
    v39 = (struct CWindowData **)*((_QWORD *)v3 + 72);
    v93 = v39;
    while ( *v93 != v2 )
    {
      v43 = (struct CWindowData **)(unsigned int)((_DWORD)v43 + 1);
      v93 += 2;
      if ( (unsigned int)v43 >= v44 )
        goto LABEL_51;
    }
    v94 = *((_DWORD *)v3 + 150);
    if ( (unsigned int)v43 < v44 )
    {
      if ( (unsigned int)v43 < v44 - 1 )
      {
        do
        {
          *(_OWORD *)&v39[2 * (unsigned int)v43] = *(_OWORD *)&v39[2 * (unsigned int)((_DWORD)v43 + 1)];
          v43 = (struct CWindowData **)(unsigned int)((_DWORD)v43 + 1);
          v94 = *((_DWORD *)v3 + 150);
        }
        while ( (unsigned int)v43 < v94 - 1 );
      }
      *((_DWORD *)v3 + 150) = v94 - 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u, 0LL);
    }
  }
LABEL_51:
  v45 = (struct CWindowData *)*((_QWORD *)v2 + 2);
  if ( v45 != (struct CWindowData *)((char *)v2 + 804) )
    (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *, struct CWindowData **, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v45,
      v43,
      v39);
  v46 = CDesktopManager::s_pDesktopManagerInstance;
  if ( (*((_BYTE *)v2 + 678) & 2) != 0 )
  {
    v95 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    v43 = *(struct CWindowData ***)(v95 + 504);
    v96 = *(struct CWindowData ***)(v95 + 496);
    if ( v96 != v43 )
    {
      while ( 1 )
      {
        v97 = v96 + 1;
        if ( *v96 == v2 )
          break;
        ++v96;
        if ( v97 == v43 )
          goto LABEL_54;
      }
      memmove_0(v96, v97, (char *)v43 - (char *)v97);
      *(_QWORD *)(v95 + 504) -= 8LL;
    }
  }
LABEL_54:
  v47 = (CWindowList *)*((_QWORD *)v46 + 54);
  if ( v2 == *((struct CWindowData **)v47 + 88) )
  {
    v98 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(v47, 1);
    if ( v98 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCBB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v98,
        v99);
    *((_QWORD *)v47 + 88) = 0LL;
  }
  v48 = (CDisplayAnimatedVisual *)*((_QWORD *)v47 + 71);
  if ( v48 )
    CDisplayAnimatedVisual::OnWindowDataDestroyed(v48, v2);
  if ( *v21 )
    CTopLevelWindow3D::SetWindowData(*v21, 0LL);
  v49 = *((_QWORD *)v2 + 76);
  if ( v49 != *((_QWORD *)v2 + 77) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v49,
      v43,
      v39);
    *((_QWORD *)v2 + 76) = 0LL;
  }
  v50 = *((_QWORD *)v2 + 71);
  if ( v50 != *((_QWORD *)v2 + 72) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v50,
      v43,
      v39);
    *((_QWORD *)v2 + 71) = 0LL;
  }
  v51 = *((_QWORD *)v2 + 67);
  if ( v51 != *((_QWORD *)v2 + 68) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v51,
      v43,
      v39);
    *((_QWORD *)v2 + 67) = 0LL;
  }
  v52 = *((_QWORD *)v2 + 62);
  if ( v52 != *((_QWORD *)v2 + 63) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v52,
      v43,
      v39);
    *((_QWORD *)v2 + 62) = 0LL;
  }
  (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *, struct CWindowData **, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v2,
    v43,
    v39);
}
