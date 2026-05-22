/*
 * XREFs of ??_GSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180133470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileHashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801336B0 (-InternalRelease@-$ComPtr@V-$AgileHashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composi.c)
 */

void **__fastcall Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::`scalar deleting destructor'(
        void **this,
        char a2)
{
  __int64 v4; // rdx

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileHashMap<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,0>>::InternalRelease(this + 23);
  CSparseStorage::~CSparseStorage(this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass((Microsoft::WRL2::ContextRuntimeClass *)this, v4);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
