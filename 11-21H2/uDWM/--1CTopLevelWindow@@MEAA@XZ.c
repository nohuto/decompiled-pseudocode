/*
 * XREFs of ??1CTopLevelWindow@@MEAA@XZ @ 0x180028668
 * Callers:
 *     ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x1800100E0 (--_GCTopLevelWindow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x180010560 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180010F54 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800111D0 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800111F0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x1800E41C4 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180103CE0 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 */

void __fastcall CTopLevelWindow::~CTopLevelWindow(CBaseObject **this)
{
  unsigned int v2; // esi
  CBaseObject **v3; // rbx
  unsigned int v4; // esi
  CBaseObject **v5; // rbx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rax
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  CBaseObject *v33; // rcx
  CBaseObject *v34; // rcx
  CWindowList *v35; // rbx
  int ProjectedShadowSceneForDesktop; // eax
  CBaseObject *v37; // rcx
  bool v38; // zf
  char v39; // al
  int v40; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CProjectedShadowScene *v42; // [rsp+40h] [rbp+8h] BYREF

  *this = (CBaseObject *)&CTopLevelWindow::`vftable';
  CTopLevelWindow::StopIconicAnimation((CTopLevelWindow *)this);
  CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)this);
  if ( (*((_BYTE *)this + 249) & 0x20) != 0 )
  {
    v42 = 0LL;
    v35 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v42);
    ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                       v35,
                                       *((_QWORD *)this[94] + 17),
                                       0,
                                       &v42);
    if ( ProjectedShadowSceneForDesktop >= 0 )
      CTopLevelWindow::AddProjectedShadowCaster((CTopLevelWindow *)this, v42, 0LL, 0LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x88,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)ProjectedShadowSceneForDesktop,
        v40);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v42);
  }
  v2 = 0;
  v3 = this + 63;
  do
  {
    if ( *v3 )
    {
      CBaseObject::Release(*v3);
      *v3 = 0LL;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  v4 = 0;
  v5 = this + 40;
  do
  {
    if ( *v5 )
    {
      CBaseObject::Release(*v5);
      *v5 = 0LL;
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x16 );
  CTopLevelWindow::ReleaseHolographicSlate((CTopLevelWindow *)this);
  v6 = this[109];
  if ( v6 )
  {
    (*(void (__fastcall **)(CBaseObject *, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
    v37 = this[109];
    if ( v37 )
    {
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v37 + 16LL))(v37);
      this[109] = 0LL;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL)
                                 + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL));
  CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget((CTopLevelWindow *)this, (bool *)&v42);
  v7 = this[103];
  if ( v7 )
  {
    CBaseObject::Release(v7);
    this[103] = 0LL;
  }
  v8 = this[71];
  if ( v8 )
  {
    CBaseObject::Release(v8);
    this[71] = 0LL;
  }
  v9 = this[72];
  if ( v9 )
  {
    CBaseObject::Release(v9);
    this[72] = 0LL;
  }
  v10 = this[33];
  if ( v10 )
  {
    CBaseObject::Release(v10);
    this[33] = 0LL;
  }
  v11 = this[34];
  if ( v11 )
  {
    CBaseObject::Release(v11);
    this[34] = 0LL;
  }
  v12 = this[67];
  if ( v12 )
  {
    CBaseObject::Release(v12);
    this[67] = 0LL;
  }
  v13 = this[35];
  if ( v13 )
  {
    CBaseObject::Release(v13);
    this[35] = 0LL;
  }
  v14 = this[69];
  if ( v14 )
  {
    CBaseObject::Release(v14);
    this[69] = 0LL;
  }
  v15 = this[70];
  if ( v15 )
  {
    CBaseObject::Release(v15);
    this[70] = 0LL;
  }
  v16 = this[36];
  if ( v16 )
  {
    CBaseObject::Release(v16);
    this[36] = 0LL;
  }
  v17 = this[62];
  if ( v17 )
  {
    CBaseObject::Release(v17);
    this[62] = 0LL;
  }
  v18 = this[68];
  if ( v18 )
  {
    CBaseObject::Release(v18);
    this[68] = 0LL;
  }
  v19 = this[96];
  if ( v19 )
  {
    CBaseObject::Release(v19);
    this[96] = 0LL;
  }
  v20 = this[97];
  if ( v20 )
  {
    CBaseObject::Release(v20);
    this[97] = 0LL;
  }
  v21 = this[73];
  if ( v21 )
  {
    CBaseObject::Release(v21);
    this[73] = 0LL;
  }
  v22 = this[39];
  if ( v22 )
  {
    CBaseObject::Release(v22);
    this[39] = 0LL;
  }
  v23 = this[37];
  if ( v23 )
  {
    CBaseObject::Release(v23);
    this[37] = 0LL;
  }
  v24 = this[74];
  if ( v24 )
  {
    CBaseObject::Release(v24);
    this[74] = 0LL;
  }
  v25 = this[75];
  if ( v25 )
  {
    CBaseObject::Release(v25);
    this[75] = 0LL;
  }
  (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this[87]);
  v26 = this[88];
  if ( v26 )
  {
    v38 = (*((_DWORD *)v26 + 2))-- == 1;
    v39 = CDesktopManager::s_fTimelineDirty;
    if ( v38 )
      v39 = 1;
    CDesktopManager::s_fTimelineDirty = v39;
    this[88] = 0LL;
  }
  v27 = this[98];
  if ( v27 )
  {
    CBaseObject::Release(v27);
    this[98] = 0LL;
  }
  v28 = this[99];
  if ( v28 )
  {
    CBaseObject::Release(v28);
    this[99] = 0LL;
  }
  v29 = this[100];
  if ( v29 )
  {
    CBaseObject::Release(v29);
    this[100] = 0LL;
  }
  v30 = this[107];
  if ( v30 )
  {
    CBaseObject::Release(v30);
    this[107] = 0LL;
  }
  v31 = this[105];
  if ( v31 )
  {
    CBaseObject::Release(v31);
    this[105] = 0LL;
  }
  v32 = this[106];
  if ( v32 )
  {
    CBaseObject::Release(v32);
    this[106] = 0LL;
  }
  v33 = this[110];
  if ( v33 )
    CBaseObject::Release(v33);
  v34 = this[38];
  if ( v34 )
  {
    this[38] = 0LL;
    CBaseObject::Release(v34);
  }
  CVisual::~CVisual((CVisual *)this);
}
