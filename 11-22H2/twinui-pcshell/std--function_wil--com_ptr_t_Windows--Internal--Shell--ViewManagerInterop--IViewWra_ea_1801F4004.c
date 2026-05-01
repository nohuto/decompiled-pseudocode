/*
 * XREFs of std::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl(Windows::Internal::ApplicationModel::WindowManagement::WindowId)_::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl(Windows::Internal::ApplicationModel::WindowManagement::WindowId)___lambda_386f393653fa3b324229df568a487d77__0_ @ 0x1801F4004
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804CFCC0 (-ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     std::_Func_impl_no_alloc__lambda_386f393653fa3b324229df568a487d77__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__Windows::Internal::ApplicationModel::WindowManagement::WindowId_::_Func_impl_no_alloc__lambda_386f393653fa3b324229df568a487d77__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__Windows::Internal::ApplicationModel::WindowManagement::WindowId___lambda_386f393653fa3b324229df568a487d77__0_ @ 0x1801F3FD0 (std--_Func_impl_no_alloc__lambda_386f393653fa3b324229df568a487d77__wil--com_ptr_t_W_ea_1801F3FD0.c)
 */

_QWORD *__fastcall std::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl_Windows::Internal::ApplicationModel::WindowManagement::WindowId__::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl_Windows::Internal::ApplicationModel::WindowManagement::WindowId____lambda_386f393653fa3b324229df568a487d77__0_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rdx

  a1[7] = 0LL;
  v3 = std::_Func_impl_no_alloc__lambda_386f393653fa3b324229df568a487d77__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__Windows::Internal::ApplicationModel::WindowManagement::WindowId_::_Func_impl_no_alloc__lambda_386f393653fa3b324229df568a487d77__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__Windows::Internal::ApplicationModel::WindowManagement::WindowId___lambda_386f393653fa3b324229df568a487d77__0_(
         a1,
         a2);
  *(_QWORD *)(v4 + 56) = v3;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v5);
  return a1;
}
