/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UICompositionSurfaceBrush@234@UICompositionSurfaceBrush2@234@UICompositionSurfaceBrush3@234@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AE8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::ICompositionSurfaceBrush,Windows::UI::Composition::ICompositionSurfaceBrush2,Windows::UI::Composition::ICompositionSurfaceBrush3>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualCapture,Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::GetTrustLevel(
           a1 - 16,
           a2);
}
