/*
 * XREFs of ?GetForegroundOperations@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1803EDEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18032B684 (--0-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPriv.c)
 */

_QWORD *__fastcall UwpWindowEventDispatcher::GetForegroundOperations(__int64 a1, _QWORD *a2)
{
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>(
    a2,
    *(_QWORD *)(a1 + 288));
  return a2;
}
