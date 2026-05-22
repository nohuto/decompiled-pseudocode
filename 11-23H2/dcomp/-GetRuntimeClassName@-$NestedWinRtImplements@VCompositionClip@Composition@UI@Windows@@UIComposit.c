/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionClip@Composition@UI@Windows@@UICompositionClip@234@UICompositionClip2@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AC3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionClip,Windows::UI::Composition::ICompositionClip,Windows::UI::Composition::ICompositionClip2>::GetRuntimeClassName(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::HolographicCompositor,Windows::UI::Composition::Internal::IHolographicCompositor>::GetRuntimeClassName(a1 - 8);
}
