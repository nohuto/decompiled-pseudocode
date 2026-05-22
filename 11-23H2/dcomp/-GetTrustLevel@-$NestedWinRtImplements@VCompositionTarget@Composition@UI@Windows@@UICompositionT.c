/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionTarget@Composition@UI@Windows@@UICompositionTarget@234@UICompositionSupportsSystemBackdrop@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AE830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionTarget,Windows::UI::Composition::ICompositionTarget,Windows::UI::Composition::ICompositionSupportsSystemBackdrop>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualCapture,Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::GetTrustLevel(
           a1 - 8,
           a2);
}
