/*
 * XREFs of ??1PendingActivationResumeData@UwpWindowEventDispatcher@@QEAA@XZ @ 0x1804CF088
 * Callers:
 *     _UwpWindowEventDispatcher::AddPendingActivationResumeWithLock_::_1_::dtor$8 @ 0x1802B809A (_UwpWindowEventDispatcher--AddPendingActivationResumeWithLock_--_1_--dtor$8.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall UwpWindowEventDispatcher::PendingActivationResumeData::~PendingActivationResumeData(
        UwpWindowEventDispatcher::PendingActivationResumeData *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this);
}
