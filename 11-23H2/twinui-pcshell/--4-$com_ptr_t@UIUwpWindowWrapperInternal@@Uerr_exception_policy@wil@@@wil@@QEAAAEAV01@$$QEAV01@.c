/*
 * XREFs of ??4?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009E8A0
 * Callers:
 *     _lambda_66cb15f8422cbf2e3f8eb7fe6565be68_::operator() @ 0x1801F4C3C (_lambda_66cb15f8422cbf2e3f8eb7fe6565be68_--operator().c)
 * Callees:
 *     ?attach@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18009D078 (-attach@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWi.c)
 */

__int64 *__fastcall wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach(a1, v4);
  return a1;
}
