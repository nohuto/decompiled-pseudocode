/*
 * XREFs of ??1CTopLevelWindow@@EEAA@XZ @ 0x180034FF8
 * Callers:
 *     ??_GCTopLevelWindow@@EEAAPEAXI@Z @ 0x1800372B0 (--_GCTopLevelWindow@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x1800371D8 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18003721C (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003865C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x1800E53A8 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x1800E61D0 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18010A54C (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 */

void __fastcall CTopLevelWindow::~CTopLevelWindow(CTopLevelWindow *this)
{
  char v2; // al
  unsigned int v3; // esi
  CBaseObject **v4; // rbx
  unsigned int v5; // esi
  CBaseObject **v6; // rbx
  __int64 v7; // rcx
  CBaseObject *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  CBaseObject *v26; // rcx
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  __int64 v33; // rcx
  struct CVisual *v34; // rcx
  struct CVisual *v35; // rcx
  __int64 v36; // rax
  bool v37; // zf
  char v38; // al
  CWindowList *v39; // rbx
  int ProjectedShadowSceneForDesktop; // eax
  __int64 v41; // rcx
  char v42; // al
  int v43; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v45; // [rsp+50h] [rbp+8h] BYREF
  struct CProjectedShadowScene *v46; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)this = &CTopLevelWindow::`vftable';
  v2 = *((_BYTE *)this + 248);
  if ( (v2 & 0x40) != 0 )
  {
    *((_BYTE *)this + 248) = v2 & 0xBF;
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(v34);
  }
  if ( *((_DWORD *)this + 63) )
  {
    *((_DWORD *)this + 63) = 0;
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(v35);
    v36 = *((_QWORD *)this + 90);
    if ( v36 )
    {
      v37 = (*(_DWORD *)(v36 + 8))-- == 1;
      v38 = CDesktopManager::s_fTimelineDirty;
      if ( v37 )
        v38 = 1;
      CDesktopManager::s_fTimelineDirty = v38;
      *((_QWORD *)this + 90) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 249) & 0x10) != 0 )
  {
    v46 = 0LL;
    v39 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v46);
    ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                       v39,
                                       *(_QWORD *)(*((_QWORD *)this + 94) + 136LL),
                                       0,
                                       &v46);
    if ( ProjectedShadowSceneForDesktop >= 0 )
      CTopLevelWindow::AddProjectedShadowCaster(this, v46, 0LL, 0LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x96,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)ProjectedShadowSceneForDesktop,
        v43);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v46);
  }
  v3 = 0;
  v4 = (CBaseObject **)((char *)this + 528);
  do
  {
    if ( *v4 )
    {
      CBaseObject::Release(*v4);
      *v4 = 0LL;
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 4 );
  v5 = 0;
  v6 = (CBaseObject **)((char *)this + 344);
  do
  {
    if ( *v6 )
    {
      CBaseObject::Release(*v6);
      *v6 = 0LL;
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 0x16 );
  CTopLevelWindow::ReleaseHolographicSlate(this);
  v7 = *((_QWORD *)this + 106);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, 0LL);
    v41 = *((_QWORD *)this + 106);
    if ( v41 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      *((_QWORD *)this + 106) = 0LL;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL)
                                 + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL));
  CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget(this, &v45);
  v8 = (CBaseObject *)*((_QWORD *)this + 101);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 101) = 0LL;
  }
  v9 = *((_QWORD *)this + 34);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1LL);
    *((_QWORD *)this + 34) = 0LL;
  }
  v10 = *((_QWORD *)this + 35);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1LL);
    *((_QWORD *)this + 35) = 0LL;
  }
  v11 = *((_QWORD *)this + 36);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
    *((_QWORD *)this + 36) = 0LL;
  }
  v12 = (CBaseObject *)*((_QWORD *)this + 70);
  if ( v12 )
  {
    CBaseObject::Release(v12);
    *((_QWORD *)this + 70) = 0LL;
  }
  *((_QWORD *)this + 71) = 0LL;
  v13 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)this + 37) = 0LL;
  }
  v14 = *((_QWORD *)this + 73);
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v14)(v14, 1LL);
    *((_QWORD *)this + 73) = 0LL;
  }
  v15 = *((_QWORD *)this + 74);
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1LL);
    *((_QWORD *)this + 74) = 0LL;
  }
  v16 = *((_QWORD *)this + 38);
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v16)(v16, 1LL);
    *((_QWORD *)this + 38) = 0LL;
  }
  v17 = (CBaseObject *)*((_QWORD *)this + 65);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)this + 65) = 0LL;
  }
  v18 = (CBaseObject *)*((_QWORD *)this + 72);
  if ( v18 )
  {
    CBaseObject::Release(v18);
    *((_QWORD *)this + 72) = 0LL;
  }
  v19 = (CBaseObject *)*((_QWORD *)this + 96);
  if ( v19 )
  {
    CBaseObject::Release(v19);
    *((_QWORD *)this + 96) = 0LL;
  }
  v20 = (CBaseObject *)*((_QWORD *)this + 97);
  if ( v20 )
  {
    CBaseObject::Release(v20);
    *((_QWORD *)this + 97) = 0LL;
  }
  v21 = (CBaseObject *)*((_QWORD *)this + 75);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)this + 75) = 0LL;
  }
  v22 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v22 )
  {
    CBaseObject::Release(v22);
    *((_QWORD *)this + 42) = 0LL;
  }
  v23 = *((_QWORD *)this + 76);
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v23)(v23, 1LL);
    *((_QWORD *)this + 76) = 0LL;
  }
  v24 = *((_QWORD *)this + 77);
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v24)(v24, 1LL);
    *((_QWORD *)this + 77) = 0LL;
  }
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 89));
  v25 = *((_QWORD *)this + 90);
  if ( v25 )
  {
    v37 = (*(_DWORD *)(v25 + 8))-- == 1;
    v42 = CDesktopManager::s_fTimelineDirty;
    if ( v37 )
      v42 = 1;
    CDesktopManager::s_fTimelineDirty = v42;
    *((_QWORD *)this + 90) = 0LL;
  }
  v26 = (CBaseObject *)*((_QWORD *)this + 98);
  if ( v26 )
  {
    CBaseObject::Release(v26);
    *((_QWORD *)this + 98) = 0LL;
  }
  v27 = (CBaseObject *)*((_QWORD *)this + 103);
  if ( v27 )
  {
    CBaseObject::Release(v27);
    *((_QWORD *)this + 103) = 0LL;
  }
  v28 = (CBaseObject *)*((_QWORD *)this + 104);
  if ( v28 )
  {
    CBaseObject::Release(v28);
    *((_QWORD *)this + 104) = 0LL;
  }
  v29 = (CBaseObject *)*((_QWORD *)this + 107);
  if ( v29 )
    CBaseObject::Release(v29);
  v30 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v30 )
  {
    *((_QWORD *)this + 41) = 0LL;
    CBaseObject::Release(v30);
  }
  v31 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v31 )
  {
    *((_QWORD *)this + 40) = 0LL;
    CBaseObject::Release(v31);
  }
  v32 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v32 )
  {
    *((_QWORD *)this + 39) = 0LL;
    CBaseObject::Release(v32);
  }
  v33 = *((_QWORD *)this + 33);
  if ( v33 )
  {
    *((_QWORD *)this + 33) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v33)(v33, 1LL);
  }
  CVisual::~CVisual(this);
}
