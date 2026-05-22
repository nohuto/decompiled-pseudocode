/*
 * XREFs of ??_EAsyncBase@VisualCapture@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180154550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAA@XZ @ 0x1801543FC (--1-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows.c)
 */

Windows::UI::Composition::VisualCapture::AsyncBase *__fastcall Windows::UI::Composition::VisualCapture::AsyncBase::`vector deleting destructor'(
        Windows::UI::Composition::VisualCapture::AsyncBase *this,
        char a2)
{
  Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::~AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
