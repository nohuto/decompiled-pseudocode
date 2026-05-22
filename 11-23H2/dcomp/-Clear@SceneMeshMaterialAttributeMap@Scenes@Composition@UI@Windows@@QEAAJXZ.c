/*
 * XREFs of ?Clear@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x18018D0DC
 * Callers:
 *     ?Clear@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJXZ @ 0x18018D060 (-Clear@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?Destroy@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x18018D1C0 (-Destroy@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Clear@?$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18018CF10 (-Clear@-$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U-$Defau.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Clear(RTL_SRWLOCK **this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Clear(this[23]);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAB,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemeshmaterialattributemap.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
