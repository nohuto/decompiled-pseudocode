/*
 * XREFs of std::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl(unsigned_int)_::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl(unsigned_int)___lambda_7161037552807ecb21c9cc43a3bfdd2b__0_ @ 0x1801F2A8C
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C1A70 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     std::_Func_impl_no_alloc__lambda_7161037552807ecb21c9cc43a3bfdd2b__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Func_impl_no_alloc__lambda_7161037552807ecb21c9cc43a3bfdd2b__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int___lambda_7161037552807ecb21c9cc43a3bfdd2b__0_ @ 0x1801F2A58 (std--_Func_impl_no_alloc__lambda_7161037552807ecb21c9cc43a3bfdd2b__wil--com_ptr_t_Windows--Inter.c)
 */

_QWORD *__fastcall std::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl_unsigned_int__::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl_unsigned_int____lambda_7161037552807ecb21c9cc43a3bfdd2b__0_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rdx

  a1[7] = 0LL;
  v3 = std::_Func_impl_no_alloc__lambda_7161037552807ecb21c9cc43a3bfdd2b__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Func_impl_no_alloc__lambda_7161037552807ecb21c9cc43a3bfdd2b__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int___lambda_7161037552807ecb21c9cc43a3bfdd2b__0_(
         a1,
         a2);
  *(_QWORD *)(v4 + 56) = v3;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v5);
  return a1;
}
