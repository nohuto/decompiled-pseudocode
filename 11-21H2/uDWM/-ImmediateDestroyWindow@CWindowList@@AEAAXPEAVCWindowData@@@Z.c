/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001EFD0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800223E0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18000AE08 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180010F54 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?Remove@?$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@@Z @ 0x18001370C (-Remove@-$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQE.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001F180 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18001F274 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002254C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180022F34 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180022F70 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180023BB8 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180023C58 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180023CF0 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030AC4 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800488C8 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x180049ED4 (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18005B3D0 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash@@@details@wil@@QEAA_NXZ @ 0x180063230 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3.c)
 *     ?OnHostWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z @ 0x1800633B8 (-OnHostWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z.c)
 *     ?OnProxyWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z @ 0x180063414 (-OnProxyWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z.c)
 *     memmove_0 @ 0x180063707 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800AD98C (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800BE32C (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800BF0D0 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x1800D1750 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180105C50 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  struct CSecondaryWindowRepresentation **v4; // rax
  struct CSecondaryWindowRepresentation *v5; // rbx
  CWindowData *v6; // rcx
  CBaseObject *v7; // rcx
  __int64 v8; // r8
  unsigned int i; // ebx
  CWindowData *v10; // rcx
  CBaseObject *v11; // rcx
  int j; // eax
  CDesktopManager *v13; // rsi
  __int64 v14; // rax
  CWindowPropertyTracker *v15; // rsi
  __int64 v16; // rbx
  int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rbp
  int v21; // ebx
  _QWORD *v22; // r15
  __int64 v23; // r14
  __int64 v24; // rsi
  CBaseObject *v25; // rcx
  struct CVisual *v26; // rdx
  __int64 v27; // rax
  CBaseObject *v28; // rcx
  unsigned int k; // ebx
  __int64 v30; // rcx
  CBaseObject *v31; // rcx
  CVisual *v32; // rcx
  char IsEnabled; // al
  CTopLevelWindow3D *v34; // rcx
  CBaseObject *v35; // rcx
  CVisual *v36; // rcx
  CBaseObject *v37; // rcx
  CVisual *v38; // rcx
  CBaseObject *v39; // rcx
  int v40; // eax
  __int64 v41; // rbx
  CBaseObject *v42; // rax
  __int64 v43; // rcx
  CBaseObject *v44; // rcx
  __int64 v45; // rsi
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v46; // rbx
  unsigned int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // edx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v50; // rbx
  unsigned int v51; // ecx
  unsigned int v52; // edx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **v53; // rax
  unsigned int v54; // edx
  unsigned int m; // ebx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  CIconicBitmapRegistry *v59; // rbx
  CBaseObject *v60; // rcx
  struct CWindowData **v61; // r8
  unsigned int v62; // ecx
  struct CWindowData **v63; // r9
  struct CWindowData **v64; // rax
  int v65; // edx
  struct CWindowData *v66; // rdx
  CDesktopManager *v67; // rsi
  __int64 v68; // rbx
  struct CWindowData **v69; // rcx
  struct CWindowData **v70; // rdx
  __int64 v71; // rbx
  int v72; // eax
  CDisplayAnimatedVisual *v73; // rcx
  CTopLevelWindow3D *v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  unsigned int v79; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v81; // [rsp+68h] [rbp+10h] BYREF

  v81 = (struct _RTL_CRITICAL_SECTION *)a2;
  if ( (*((_BYTE *)a2 + 666) & 2) != 0 )
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 62, &v81);
  while ( *((_DWORD *)a2 + 140) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 67));
  while ( *((_DWORD *)a2 + 148) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 71));
  CWindowList::SetOwner(this, a2, 0LL);
  while ( *((_DWORD *)a2 + 130) )
  {
    v4 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 62);
    v5 = *v4;
    v6 = (CWindowData *)*((_QWORD *)*v4 + 4);
    if ( a2 == v6 )
    {
      if ( *((_BYTE *)v5 + 160) )
      {
        CWindowData::RemoveSecondaryWindowRepresentation(v6, *v4);
        *((_BYTE *)v5 + 160) = 0;
      }
      *((_QWORD *)v5 + 4) = 0LL;
    }
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v5);
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 33) - 8) > 3 )
    CWindowData::IsShellManaged(a2);
  v7 = (CBaseObject *)*((_QWORD *)a2 + 60);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)a2 + 60) = 0LL;
    for ( i = 0; i < *((_DWORD *)a2 + 158); ++i )
    {
      v10 = *(CWindowData **)(*((_QWORD *)a2 + 76) + 8LL * i);
      if ( (*((_DWORD *)v10 + 29) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v10, 0, v8, 0);
    }
  }
  v11 = (CBaseObject *)*((_QWORD *)a2 + 61);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)a2 + 61) = 0LL;
  }
  for ( j = *((_DWORD *)a2 + 158); j; j = *((_DWORD *)a2 + 158) )
    CWindowList::SetOwner(this, *(struct CWindowData **)(*((_QWORD *)a2 + 76) + 8LL * (unsigned int)(j - 1)), 0LL);
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 55), a2, 0LL, 1);
  v13 = CDesktopManager::s_pDesktopManagerInstance;
  v14 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  if ( v14 )
  {
    v15 = (CWindowPropertyTracker *)(v14 + 48);
    v16 = *((_QWORD *)a2 + 5);
    v81 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v17 = 0;
    v18 = *((_DWORD *)v15 + 6);
    if ( v18 )
    {
      while ( **(_QWORD **)(*(_QWORD *)v15 + 8LL * (unsigned int)v17) != v16 )
      {
        if ( ++v17 >= v18 )
          goto LABEL_31;
      }
      if ( v17 >= 0 )
        CWindowPropertyTracker::_StopTrackingWindowByIndex(v15, v17);
    }
LABEL_31:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v13 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v19 = *((_QWORD *)v13 + 23);
  if ( v19 )
  {
    v20 = *((_QWORD *)a2 + 55);
    if ( v20 )
    {
      v21 = *(_DWORD *)(v19 + 48) - 1;
      if ( v21 >= 0 )
      {
        v22 = (_QWORD *)(v19 + 24);
        v23 = 24LL * v21;
        do
        {
          v24 = v23 + *v22;
          v25 = *(CBaseObject **)v24;
          if ( *(_QWORD *)v24 == v20 )
          {
            v26 = *(struct CVisual **)(v24 + 8);
            v27 = *((_QWORD *)v26 + 3);
            if ( v27 && *(_BYTE *)(v24 + 16) )
            {
              VisualCollection::Remove((VisualCollection *)(v27 + 32), v26);
              v25 = *(CBaseObject **)v24;
            }
            if ( v25 )
              CBaseObject::Release(v25);
            v28 = *(CBaseObject **)(v24 + 8);
            if ( v28 )
              CBaseObject::Release(v28);
            DynArray<CStationaryAnimation,0>::RemoveAt(v22, (unsigned int)v21);
          }
          v23 -= 24LL;
          --v21;
        }
        while ( v21 >= 0 );
        v13 = CDesktopManager::s_pDesktopManagerInstance;
      }
    }
  }
  for ( k = 0; k < *((_DWORD *)v13 + 184); ++k )
  {
    v30 = *(_QWORD *)(*((_QWORD *)v13 + 89) + 8LL * k);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v30 + 200LL))(v30, a2);
  }
  v31 = (CBaseObject *)*((_QWORD *)a2 + 80);
  if ( v31 )
  {
    CBaseObject::Release(v31);
    *((_QWORD *)a2 + 80) = 0LL;
  }
  v32 = (CVisual *)*((_QWORD *)a2 + 56);
  if ( v32 )
  {
    CVisual::RemoveSelfFromParent(v32);
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::GetImpl'::`2'::impl);
    v34 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
    if ( IsEnabled )
    {
      if ( !v34 )
        goto LABEL_59;
      CTopLevelWindow3D::SetWindowData(v34, 0LL);
    }
    else if ( v34 )
    {
      CTopLevelWindow3D::StopAnimation(v34);
    }
    v35 = (CBaseObject *)*((_QWORD *)a2 + 56);
    if ( v35 )
    {
      CBaseObject::Release(v35);
      *((_QWORD *)a2 + 56) = 0LL;
    }
  }
LABEL_59:
  v36 = (CVisual *)*((_QWORD *)a2 + 55);
  if ( v36 )
  {
    CVisual::RemoveSelfFromParent(v36);
    v37 = (CBaseObject *)*((_QWORD *)a2 + 55);
    if ( v37 )
    {
      CBaseObject::Release(v37);
      *((_QWORD *)a2 + 55) = 0LL;
    }
  }
  if ( *((_QWORD *)a2 + 82) )
    CWindowList::OnProxyWindowDying(a2);
  if ( *((_QWORD *)a2 + 81) )
    CWindowList::OnHostWindowDying(a2);
  v81 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v38 = (CVisual *)*((_QWORD *)a2 + 58);
  if ( v38 )
  {
    CVisual::RemoveSelfFromParent(v38);
    v39 = (CBaseObject *)*((_QWORD *)a2 + 58);
    if ( v39 )
    {
      CBaseObject::Release(v39);
      *((_QWORD *)a2 + 58) = 0LL;
    }
    v40 = CWindowList::ReevaluateAutoParenting(this, a2, 0);
    if ( v40 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x1F12u);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  v41 = *((_QWORD *)a2 + 55);
  if ( v41 )
  {
    if ( (*(_BYTE *)(v41 + 249) & 2) != 0 )
      CTopLevelWindow::ReleaseHolographicSlate(*((CTopLevelWindow **)a2 + 55));
    v42 = *(CBaseObject **)(v41 + 496);
    if ( v42 )
    {
      v43 = *((_QWORD *)v42 + 3);
      if ( !v43
        || (VisualCollection::Remove((VisualCollection *)(v43 + 32), *(struct CVisual **)(v41 + 496)),
            (v42 = *(CBaseObject **)(v41 + 496)) != 0LL) )
      {
        CBaseObject::Release(v42);
        *(_QWORD *)(v41 + 496) = 0LL;
      }
    }
  }
  v44 = (CBaseObject *)*((_QWORD *)a2 + 18);
  if ( v44 )
  {
    CBaseObject::Release(v44);
    *((_QWORD *)a2 + 18) = 0LL;
  }
  v45 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
  v46 = 0LL;
  v47 = 0;
  v48 = *(_DWORD *)(v45 + 40);
  if ( v48 )
  {
    while ( 1 )
    {
      v46 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)(*(_QWORD *)(v45 + 16) + 8LL * v47);
      if ( *(_QWORD *)v46 == *((_QWORD *)a2 + 5) )
        break;
      if ( ++v47 >= v48 )
        goto LABEL_86;
    }
  }
  v81 = (struct _RTL_CRITICAL_SECTION *)v46;
  if ( v46 )
  {
    DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove((__int64 *)(v45 + 16), &v81);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v46, v49);
  }
LABEL_86:
  v50 = 0LL;
  v51 = 0;
  v52 = *(_DWORD *)(v45 + 40);
  if ( v52 )
  {
    v53 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource ***)(v45 + 16);
    while ( 1 )
    {
      v50 = *v53;
      if ( *(_QWORD *)*v53 == *((_QWORD *)a2 + 5) )
        break;
      ++v51;
      ++v53;
      if ( v51 >= v52 )
        goto LABEL_93;
    }
  }
  v81 = (struct _RTL_CRITICAL_SECTION *)v50;
  if ( v50 )
  {
    DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove((__int64 *)(v45 + 16), &v81);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v50, v54);
  }
LABEL_93:
  for ( m = 0; m < *(_DWORD *)(v45 + 72); ++m )
  {
    v56 = *(_QWORD *)(*(_QWORD *)(v45 + 48) + 8LL * m);
    v57 = *(_QWORD *)(v56 + 304);
    if ( v57 )
      v58 = *(_QWORD *)(v57 + 40);
    else
      v58 = 0LL;
    if ( *((_QWORD *)a2 + 5) == v58 )
      CIconicAnimatedVisual::SetIconicData(v56, 0LL, 0LL, 0LL);
  }
  v59 = (CIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
  *((_BYTE *)a2 + 666) &= 0xE3u;
  CIconicBitmapRegistry::RequestBitmap(v59, a2, 0);
  CIconicBitmapRegistry::ClearBitmap(v59, a2);
  v60 = (CBaseObject *)*((_QWORD *)a2 + 53);
  if ( v60 )
  {
    CBaseObject::Release(v60);
    *((_QWORD *)a2 + 53) = 0LL;
  }
  v61 = 0LL;
  v62 = *((_DWORD *)this + 154);
  if ( v62 )
  {
    v63 = (struct CWindowData **)*((_QWORD *)this + 74);
    v64 = v63;
    while ( *v64 != a2 )
    {
      v61 = (struct CWindowData **)(unsigned int)((_DWORD)v61 + 1);
      v64 += 2;
      if ( (unsigned int)v61 >= v62 )
        goto LABEL_112;
    }
    v65 = *((_DWORD *)this + 154);
    if ( (unsigned int)v61 < v62 )
    {
      if ( (unsigned int)v61 < v62 - 1 )
      {
        do
        {
          *(_OWORD *)&v63[2 * (unsigned int)v61] = *(_OWORD *)&v63[2 * (unsigned int)((_DWORD)v61 + 1)];
          v61 = (struct CWindowData **)(unsigned int)((_DWORD)v61 + 1);
          v65 = *((_DWORD *)this + 154);
        }
        while ( (unsigned int)v61 < v65 - 1 );
      }
      *((_DWORD *)this + 154) = v65 - 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
    }
  }
LABEL_112:
  v66 = (struct CWindowData *)*((_QWORD *)a2 + 2);
  if ( v66 != (struct CWindowData *)((char *)a2 + 780) )
    (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 32LL))(
      WPF::g_pProcessHeap,
      v66,
      v61);
  v67 = CDesktopManager::s_pDesktopManagerInstance;
  if ( (*((_BYTE *)a2 + 670) & 1) != 0 )
  {
    v68 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 55);
    v61 = *(struct CWindowData ***)(v68 + 536);
    v69 = *(struct CWindowData ***)(v68 + 528);
    if ( v69 != v61 )
    {
      while ( 1 )
      {
        v70 = v69 + 1;
        if ( *v69 == a2 )
          break;
        ++v69;
        if ( v70 == v61 )
          goto LABEL_120;
      }
      memmove_0(v69, v70, (char *)v61 - (char *)v70);
      *(_QWORD *)(v68 + 536) -= 8LL;
    }
  }
LABEL_120:
  v71 = *((_QWORD *)v67 + 52);
  if ( a2 == *(struct CWindowData **)(v71 + 704) )
  {
    v72 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(*((CWindowList **)v67 + 52), 1);
    if ( v72 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC68,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v72,
        v79);
    *(_QWORD *)(v71 + 704) = 0LL;
  }
  v73 = *(CDisplayAnimatedVisual **)(v71 + 584);
  if ( v73 )
    CDisplayAnimatedVisual::OnWindowDataDestroyed(v73, a2);
  v74 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
  if ( v74 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::GetImpl'::`2'::impl)
      && *((_QWORD *)v74 + 42) )
    {
      CTopLevelWindow3D::StopAnimation(v74);
    }
    *((_QWORD *)v74 + 42) = 0LL;
  }
  v75 = *((_QWORD *)a2 + 76);
  if ( v75 != *((_QWORD *)a2 + 77) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v75,
      v61);
    *((_QWORD *)a2 + 76) = 0LL;
  }
  v76 = *((_QWORD *)a2 + 71);
  if ( v76 != *((_QWORD *)a2 + 72) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v76,
      v61);
    *((_QWORD *)a2 + 71) = 0LL;
  }
  v77 = *((_QWORD *)a2 + 67);
  if ( v77 != *((_QWORD *)a2 + 68) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v77,
      v61);
    *((_QWORD *)a2 + 67) = 0LL;
  }
  v78 = *((_QWORD *)a2 + 62);
  if ( v78 != *((_QWORD *)a2 + 63) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v78,
      v61);
    *((_QWORD *)a2 + 62) = 0LL;
  }
  (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 32LL))(
    WPF::g_pProcessHeap,
    a2,
    v61);
}
