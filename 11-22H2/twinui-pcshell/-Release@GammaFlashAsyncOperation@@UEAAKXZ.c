/*
 * XREFs of ?Release@GammaFlashAsyncOperation@@UEAAKXZ @ 0x180405830
 * Callers:
 *     ?Release@GammaFlashAsyncOperation@@W7EAAKXZ @ 0x180295090 (-Release@GammaFlashAsyncOperation@@W7EAAKXZ.c)
 *     ?Release@GammaFlashAsyncOperation@@WBA@EAAKXZ @ 0x1802950B0 (-Release@GammaFlashAsyncOperation@@WBA@EAAKXZ.c)
 *     ?Release@GammaFlashAsyncOperation@@WFI@EAAKXZ @ 0x1802950D0 (-Release@GammaFlashAsyncOperation@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall GammaFlashAsyncOperation::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::Release(this);
}
