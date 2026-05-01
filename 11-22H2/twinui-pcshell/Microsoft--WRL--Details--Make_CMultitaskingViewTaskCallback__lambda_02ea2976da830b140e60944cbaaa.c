/*
 * XREFs of Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const_&_ @ 0x18054B3F4
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176___ @ 0x18054B48C (MakeMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800582D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs @ 0x18054C338 (_anonymous_namespace_--ProcessInputLambdaArgs--ProcessInputLambdaArgs.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_____lambda_02ea2976da830b140e60944cbaaa9176__const___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>((__int64)v4);
    *v5 = off_1807E2298;
    v5[4] = off_1807E2278;
    anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs(v5 + 6, a2);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
