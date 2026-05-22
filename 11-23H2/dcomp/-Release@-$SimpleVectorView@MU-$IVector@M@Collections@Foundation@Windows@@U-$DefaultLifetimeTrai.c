/*
 * XREFs of ?Release@?$SimpleVectorView@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x180143E90
 * Callers:
 *     ?Release@?$SimpleVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@W7EAAKXZ @ 0x1800B0620 (-Release@-$SimpleVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U-$IVector@.c)
 *     ?Release@?$SimpleVectorView@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAKXZ @ 0x1800B0640 (-Release@-$SimpleVectorView@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U-$IVector@PEAVSce.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::Release(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionColorGradientStop *>>::Release(a1);
}
