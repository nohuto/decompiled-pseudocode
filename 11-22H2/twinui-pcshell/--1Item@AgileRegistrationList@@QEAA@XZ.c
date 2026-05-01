/*
 * XREFs of ??1Item@AgileRegistrationList@@QEAA@XZ @ 0x180396F1C
 * Callers:
 *     _AgileRegistrationList::Register_::_1_::dtor$0 @ 0x1802C2BEB (_AgileRegistrationList--Register_--_1_--dtor$0.c)
 *     _Win32AppStateManager::TerminateApp_::_1_::dtor$3 @ 0x1806266DA (_Win32AppStateManager--TerminateApp_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall AgileRegistrationList::Item::~Item(AgileRegistrationList::Item *this)
{
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)this + 1);
}
