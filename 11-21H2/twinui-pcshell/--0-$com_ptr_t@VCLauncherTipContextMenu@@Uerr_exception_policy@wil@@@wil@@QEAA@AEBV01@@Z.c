/*
 * XREFs of ??0?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1805D81C0
 * Callers:
 *     _lambda_66881fa05591413bac4099d171e5aec0_::_lambda_66881fa05591413bac4099d171e5aec0_ @ 0x1801D7390 (_lambda_66881fa05591413bac4099d171e5aec0_--_lambda_66881fa05591413bac4099d171e5aec0_.c)
 *     _lambda_ead74eb18ddaf5d60afd1f95853bb976_::_lambda_ead74eb18ddaf5d60afd1f95853bb976_ @ 0x1801D73D8 (_lambda_ead74eb18ddaf5d60afd1f95853bb976_--_lambda_ead74eb18ddaf5d60afd1f95853bb976_.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
        _QWORD *a1,
        volatile int *a2)
{
  _QWORD *v2; // r9
  __int64 v3; // rcx

  v2 = a1;
  v3 = *(_QWORD *)a2;
  *v2 = *(_QWORD *)a2;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 116), a2);
  return v2;
}
