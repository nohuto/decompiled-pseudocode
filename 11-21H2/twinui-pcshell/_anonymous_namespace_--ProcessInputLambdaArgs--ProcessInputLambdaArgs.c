/*
 * XREFs of _anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs @ 0x180495BC4
 * Callers:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x180230760 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_____lambda_75bac987ac5f971a4d8840925317feb1__const_&_ @ 0x18049545C (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x18004FE34 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x18009D1E4 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIApplicationViewCollection@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationViewCollection@@@Z @ 0x180230724 (--0-$com_ptr_t@UIApplicationViewCollection@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicat.c)
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
  wil::com_ptr_t<IApplicationViewCollection,wil::err_returncode_policy>::com_ptr_t<IApplicationViewCollection,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 64),
    *(_QWORD *)(a2 + 64));
  return a1;
}
