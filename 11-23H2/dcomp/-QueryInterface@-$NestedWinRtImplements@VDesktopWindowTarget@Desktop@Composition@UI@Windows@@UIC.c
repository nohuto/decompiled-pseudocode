/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@UICompositionSupportsSystemBackdrop@345@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074F50
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234@UICompositionLight2@234@UICompositionLight3@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC710 (-QueryInterface@-$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionL.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@UICompositionLight@234@UICompositionLight2@234@UICompositionLight3@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEA50 (-QueryInterface@-$NestedWinRtImplements@VCompositionLight@Composition@UI@Windows@@U_ea_1800AEA50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Desktop::DesktopWindowTarget,Windows::UI::Composition::ICompositionSupportsSystemBackdrop>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 144),
           a2,
           a3);
}
