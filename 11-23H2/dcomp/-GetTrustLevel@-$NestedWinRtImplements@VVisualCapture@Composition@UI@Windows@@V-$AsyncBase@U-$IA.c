/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VVisualCapture@Composition@UI@Windows@@V?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008F980
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionTarget@Composition@UI@Windows@@UICompositionTarget@234@UICompositionSupportsSystemBackdrop@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AE830 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionTarget@Composition@UI@Windows@@UICompositionT.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UICompositionSurfaceBrush@234@UICompositionSurfaceBrush2@234@UICompositionSurfaceBrush3@234@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AE8D0 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Wind_ea_1800AE8D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualCapture,Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 144) + 32LL);
  return result;
}
