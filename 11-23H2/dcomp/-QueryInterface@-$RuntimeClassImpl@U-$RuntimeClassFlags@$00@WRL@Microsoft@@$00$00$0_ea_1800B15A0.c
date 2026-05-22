/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVCompositionShape@Composition@UI@Windows@@@567@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B15A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionShape *>>::QueryInterface(
        __int64 a1)
{
  return Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::QueryInterface(a1 - 16);
}
