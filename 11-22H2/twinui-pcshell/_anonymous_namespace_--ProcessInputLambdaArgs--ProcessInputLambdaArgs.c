/*
 * XREFs of _anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs @ 0x18054C338
 * Callers:
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const_&_ @ 0x18054B3F4 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa.c)
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x18054D31C (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ??0?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIApplicationViewCollection@@@Z @ 0x1801BCD60 (--0-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIApplicati.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x1802DF0B8 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 32),
    *(_QWORD *)(a2 + 32));
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 48),
    *(_QWORD *)(a2 + 48));
  v5 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 56) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>(
    (_QWORD *)(a1 + 64),
    *(_QWORD *)(a2 + 64));
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  return a1;
}
