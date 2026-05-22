/*
 * XREFs of ?RuntimeClassInitialize@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVSceneMeshRendererComponent@2345@@Z @ 0x18018F348
 * Callers:
 *     ??$MakeAndInitialize2@VSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@PEAVSceneMeshRendererComponent@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@$$QEAPEAVSceneMeshRendererComponent@4567@@Z @ 0x180133048 (--$MakeAndInitialize2@VSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@V12345@AEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x180036B3C (-Initialize@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileHashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801336B0 (-InternalRelease@-$ComPtr@V-$AgileHashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composi.c)
 *     ??0?$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultHash@PEAUHSTRING__@@@1234@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x18018C698 (--0-$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U-$DefaultHa.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::RuntimeClassInitialize(
        Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::Scenes::SceneMeshRendererComponent *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  LPVOID v7; // rax
  __int64 v8; // rax
  _BYTE *v9; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileHashMap<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,0>>::InternalRelease((__int64 *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    v7 = DefaultHeap::Alloc(0xC0uLL);
    if ( v7
      && (v8 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::HashMap<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>((__int64)v7),
          (v9 = (_BYTE *)v8) != 0LL) )
    {
      v5 = XWinRT::SecureVersionTag::TagManager::Initialize((XWinRT::SecureVersionTag::TagManager *)(v8 + 176));
      if ( v5 >= 0 )
      {
        v9[184] = 1;
        *((_QWORD *)this + 23) = v9;
        *((_QWORD *)this + 22) = a3;
        return 0LL;
      }
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      v5 = -2147024882;
    }
    v6 = 44LL;
  }
  else
  {
    v6 = 41LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemeshmaterialattributemap.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
