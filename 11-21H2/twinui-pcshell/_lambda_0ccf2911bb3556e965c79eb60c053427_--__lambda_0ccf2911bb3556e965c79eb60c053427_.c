/*
 * XREFs of _lambda_0ccf2911bb3556e965c79eb60c053427_::__lambda_0ccf2911bb3556e965c79eb60c053427_ @ 0x1801B6774
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___ @ 0x1801B6334 (CreationThreadDispatcher--RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___.c)
 *     CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___::_CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___ @ 0x1801B681C (CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___--_CAsyncCallbackWithLambda_.c)
 *     _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::operator() @ 0x1801B6B30 (_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_--operator().c)
 *     __lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::operator()_::_1_::dtor$2 @ 0x1801B6CC0 (__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_0ccf2911bb3556e965c79eb60c053427_::__lambda_0ccf2911bb3556e965c79eb60c053427_(__int64 *a1)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 11);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1 + 9);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 8);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 7);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 6);
  return wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::~com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(a1);
}
