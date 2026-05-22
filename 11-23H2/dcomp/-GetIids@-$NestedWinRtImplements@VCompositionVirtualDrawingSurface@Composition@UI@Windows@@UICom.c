/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B0B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionVirtualDrawingSurface,Windows::UI::Composition::ICompositionVirtualDrawingSurface,Windows::UI::Composition::ICompositionDrawingSurface2,Windows::UI::Composition::ICompositionDrawingSurface,Windows::UI::Composition::ICompositionSurface>::GetIids(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::Internal::ICompositionGraphicsDeviceInternal>::GetIids(a1 - 24);
}
