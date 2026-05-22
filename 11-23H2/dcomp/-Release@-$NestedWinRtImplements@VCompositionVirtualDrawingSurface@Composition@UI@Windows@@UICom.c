/*
 * XREFs of ?Release@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AEC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionVirtualDrawingSurface,Windows::UI::Composition::ICompositionVirtualDrawingSurface,Windows::UI::Composition::ICompositionDrawingSurface2,Windows::UI::Composition::ICompositionDrawingSurface,Windows::UI::Composition::ICompositionSurface>::Release(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::Internal::ICompositionGraphicsDeviceInternal>::Release(a1 - 8);
}
