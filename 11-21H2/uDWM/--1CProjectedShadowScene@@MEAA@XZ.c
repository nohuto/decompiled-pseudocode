/*
 * XREFs of ??1CProjectedShadowScene@@MEAA@XZ @ 0x1800C9CE0
 * Callers:
 *     ??_GCProjectedShadowScene@@MEAAPEAXI@Z @ 0x1800C9E00 (--_GCProjectedShadowScene@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(CProjectedShadowScene *this)
{
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  if ( *((_QWORD *)this + 7) )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                             *((_QWORD *)this + 2));
    VisualCollection::Remove(
      (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
      *((struct CVisual **)this + 7));
    v3 = (CBaseObject *)*((_QWORD *)this + 7);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v5 )
    CBaseObject::Release(v5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
