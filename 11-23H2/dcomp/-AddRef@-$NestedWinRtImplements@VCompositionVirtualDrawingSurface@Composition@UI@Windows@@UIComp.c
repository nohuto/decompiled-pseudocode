/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800B0AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionVirtualDrawingSurface,Windows::UI::Composition::ICompositionVirtualDrawingSurface,Windows::UI::Composition::ICompositionDrawingSurface2,Windows::UI::Composition::ICompositionDrawingSurface,Windows::UI::Composition::ICompositionSurface>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::CaptureController,Windows::UI::Composition::Internal::IWriteCaptureController,Windows::UI::Composition::Internal::IReadCaptureController>::AddRef(a1 - 16);
}
