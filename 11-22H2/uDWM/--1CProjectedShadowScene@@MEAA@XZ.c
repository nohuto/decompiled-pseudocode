/*
 * XREFs of ??1CProjectedShadowScene@@MEAA@XZ @ 0x1800CE2C0
 * Callers:
 *     ??_GCProjectedShadowScene@@MEAAPEAXI@Z @ 0x1800CE3C0 (--_GCProjectedShadowScene@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x1801058A8 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(CProjectedShadowScene *this)
{
  CVisual *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  v2 = (CVisual *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    CVisual::RemoveSelfFromParent(v2);
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
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
