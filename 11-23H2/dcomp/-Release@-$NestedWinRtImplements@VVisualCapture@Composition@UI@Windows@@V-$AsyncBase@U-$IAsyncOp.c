/*
 * XREFs of ?Release@?$NestedWinRtImplements@VVisualCapture@Composition@UI@Windows@@V?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@@WRL2@Microsoft@@UEAAKXZ @ 0x180012FB0
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VCompositionTarget@Composition@UI@Windows@@UICompositionTarget@234@UICompositionSupportsSystemBackdrop@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AED10 (-Release@-$NestedWinRtImplements@VCompositionTarget@Composition@UI@Windows@@UICompositionTarget@.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualCapture,Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::Release(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 152));
}
