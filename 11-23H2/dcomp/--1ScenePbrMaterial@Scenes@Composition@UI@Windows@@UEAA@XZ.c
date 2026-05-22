/*
 * XREFs of ??1ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAA@XZ @ 0x18013F0DC
 * Callers:
 *     ??1SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAA@XZ @ 0x18013F0A8 (--1SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??_EScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013F1D0 (--_EScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 */

void __fastcall Windows::UI::Composition::Scenes::ScenePbrMaterial::~ScenePbrMaterial(
        Windows::UI::Composition::Scenes::ScenePbrMaterial *this)
{
  __int64 v2; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 25);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 24);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 23);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v2);
}
