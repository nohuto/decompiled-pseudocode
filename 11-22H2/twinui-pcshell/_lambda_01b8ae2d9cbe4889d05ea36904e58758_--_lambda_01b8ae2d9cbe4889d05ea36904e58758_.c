/*
 * XREFs of _lambda_01b8ae2d9cbe4889d05ea36904e58758_::_lambda_01b8ae2d9cbe4889d05ea36904e58758_ @ 0x1801E111C
 * Callers:
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801E15D0 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall lambda_01b8ae2d9cbe4889d05ea36904e58758_::_lambda_01b8ae2d9cbe4889d05ea36904e58758_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  *a1 = a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1, a3);
  return a1;
}
