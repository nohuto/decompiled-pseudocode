/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800B0B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionVirtualDrawingSurface,Windows::UI::Composition::ICompositionVirtualDrawingSurface,Windows::UI::Composition::ICompositionDrawingSurface2,Windows::UI::Composition::ICompositionDrawingSurface,Windows::UI::Composition::ICompositionSurface>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::SharedWriteCaptureController,Windows::UI::Composition::Internal::IWriteCaptureController>::GetTrustLevel(
           a1 - 24,
           a2);
}
