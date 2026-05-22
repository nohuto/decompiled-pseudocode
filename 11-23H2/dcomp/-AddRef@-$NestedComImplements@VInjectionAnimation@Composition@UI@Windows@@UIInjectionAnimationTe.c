/*
 * XREFs of ?AddRef@?$NestedComImplements@VInjectionAnimation@Composition@UI@Windows@@UIInjectionAnimationTest@234@@WRL2@Microsoft@@UEAAKXZ @ 0x1800953A0
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AE430 (-AddRef@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@2.c)
 *     ?AddRef@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AE450 (-AddRef@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFra_ea_1800AE450.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::InjectionAnimation,Windows::UI::Composition::IInjectionAnimationTest>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 344));
}
