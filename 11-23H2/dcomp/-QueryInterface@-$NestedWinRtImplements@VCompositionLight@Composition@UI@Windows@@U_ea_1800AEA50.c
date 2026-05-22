/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234@UICompositionLight2@234@UICompositionLight3@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionLight,Windows::UI::Composition::ICompositionLight,Windows::UI::Composition::ICompositionLight2,Windows::UI::Composition::ICompositionLight3>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Desktop::DesktopWindowTarget,Windows::UI::Composition::ICompositionSupportsSystemBackdrop>::QueryInterface(
           a1 - 16,
           a2,
           a3);
}
