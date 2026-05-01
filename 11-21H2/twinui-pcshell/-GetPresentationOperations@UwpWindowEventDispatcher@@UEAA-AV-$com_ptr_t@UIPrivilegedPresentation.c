/*
 * XREFs of ?GetPresentationOperations@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1803EE1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1800634E4 (--0-$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPr.c)
 */

_QWORD *__fastcall UwpWindowEventDispatcher::GetPresentationOperations(__int64 a1, _QWORD *a2)
{
  wil::com_ptr_t<IPrivilegedPresentationOperations,wil::err_exception_policy>::com_ptr_t<IPrivilegedPresentationOperations,wil::err_exception_policy>(
    a2,
    *(_QWORD *)(a1 + 264));
  return a2;
}
