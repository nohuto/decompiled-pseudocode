/*
 * XREFs of ??1PendingActivationResumeData@UwpWindowEventDispatcher@@QEAA@XZ @ 0x1803EA884
 * Callers:
 *     _UwpWindowEventDispatcher::AddPendingActivationResumeWithLock_::_1_::dtor$8 @ 0x1803EB6CA (_UwpWindowEventDispatcher--AddPendingActivationResumeWithLock_--_1_--dtor$8.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 */

void __fastcall UwpWindowEventDispatcher::PendingActivationResumeData::~PendingActivationResumeData(
        UwpWindowEventDispatcher::PendingActivationResumeData *this)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 1);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this);
}
