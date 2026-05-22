/*
 * XREFs of ?InternalRelease@?$ComPtr@V?$SimpleVectorView@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18014385C
 * Callers:
 *     ?GetView@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@4@@Z @ 0x180142FC0 (-GetView@-$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@C.c)
 *     ?GetView@?$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@4@@Z @ 0x180143090 (-GetView@-$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Compos.c)
 *     ?GetView@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAPEAU?$IVectorView@M@Collections@Foundation@4@@Z @ 0x180170E30 (-GetView@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Compos.c)
 *     ?GetView@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@@Z @ 0x180173A60 (-GetView@-$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows.c)
 *     ?GetView@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@@Z @ 0x1801A1080 (-GetView@-$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Compos.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@567@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180143DE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180143DE0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::Scenes::SceneComponent *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionColorGradientStop *>>::Release(v1);
  }
  return result;
}
