/*
 * XREFs of ?Release@GammaFlashAsyncOperation@@UEAAKXZ @ 0x180337C20
 * Callers:
 *     ?Release@GammaFlashAsyncOperation@@W7EAAKXZ @ 0x1801F15A0 (-Release@GammaFlashAsyncOperation@@W7EAAKXZ.c)
 *     ?Release@GammaFlashAsyncOperation@@WBA@EAAKXZ @ 0x1801F15C0 (-Release@GammaFlashAsyncOperation@@WBA@EAAKXZ.c)
 *     ?Release@GammaFlashAsyncOperation@@WFI@EAAKXZ @ 0x1801F15E0 (-Release@GammaFlashAsyncOperation@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall GammaFlashAsyncOperation::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::Release(this);
}
