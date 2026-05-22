/*
 * XREFs of ??1SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAA@XZ @ 0x1801333D0
 * Callers:
 *     ??_GSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801334E0 (--_GSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneMeshRendererComponent::~SceneMeshRendererComponent(
        Windows::UI::Composition::Scenes::SceneMeshRendererComponent *this)
{
  void *v2; // rcx
  __int64 v3; // rdx

  v2 = (void *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 34) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 31);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 30);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 29);
  *((_QWORD *)this + 23) = &DirectComposition::CRebuildableObject::`vftable';
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v3);
}
