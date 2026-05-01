/*
 * XREFs of ??0?$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18054EE80
 * Callers:
 *     _lambda_0ccf2911bb3556e965c79eb60c053427_::_lambda_0ccf2911bb3556e965c79eb60c053427__0 @ 0x1801B6564 (_lambda_0ccf2911bb3556e965c79eb60c053427_--_lambda_0ccf2911bb3556e965c79eb60c053427__0.c)
 *     _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d__0 @ 0x1801B66BC (_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_--_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d__0.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(
        _QWORD *a1,
        volatile int *a2)
{
  _QWORD *v2; // r9
  __int64 v3; // rcx

  v2 = a1;
  v3 = *(_QWORD *)a2;
  *v2 = *(_QWORD *)a2;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 28), a2);
  return v2;
}
