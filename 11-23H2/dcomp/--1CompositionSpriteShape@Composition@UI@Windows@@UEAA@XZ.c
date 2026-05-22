/*
 * XREFs of ??1CompositionSpriteShape@Composition@UI@Windows@@UEAA@XZ @ 0x18000E684
 * Callers:
 *     ??_ECompositionSpriteShape@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000E640 (--_ECompositionSpriteShape@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionSpriteShape::~CompositionSpriteShape(
        Windows::UI::Composition::CompositionSpriteShape *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 29);
  if ( v2 )
  {
    *((_QWORD *)this + 29) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 28);
  if ( v3 )
  {
    *((_QWORD *)this + 28) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock((char *)this + 216);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock((char *)this + 208);
  *((_QWORD *)this + 20) = &DirectComposition::CRebuildableObject::`vftable';
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 19);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::CompositionSpriteShape *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
}
