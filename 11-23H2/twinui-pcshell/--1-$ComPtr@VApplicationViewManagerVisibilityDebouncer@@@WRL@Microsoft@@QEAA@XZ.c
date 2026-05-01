/*
 * XREFs of ??1?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@QEAA@XZ @ 0x1803CC9E0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ApplicationViewManagerVisibilityDebouncer_ApplicationViewManagerVisibilityDebouncer_IApplicationViewCollection___&__::_1_::dtor$2 @ 0x1802BC230 (_Microsoft--WRL--Details--MakeAndInitialize_ApplicationViewManagerVisibilityDebouncer_Applicatio.c)
 *     _CApplicationViewManager::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1802C19F5 (_CApplicationViewManager--RuntimeClassInitialize_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::~ComPtr<ApplicationViewManagerVisibilityDebouncer>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(a1);
}
