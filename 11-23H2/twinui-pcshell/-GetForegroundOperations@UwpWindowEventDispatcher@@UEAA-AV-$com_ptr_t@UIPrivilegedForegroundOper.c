/*
 * XREFs of ?GetForegroundOperations@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180065F20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180065F48 (--0-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPriv.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::GetForegroundOperations(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>(
    a2,
    *(_QWORD *)(a1 + 296));
  return a2;
}
