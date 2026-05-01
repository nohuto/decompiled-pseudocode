/*
 * XREFs of _lambda_3415c00afb736d6d54203eb8c7c58983_::__lambda_3415c00afb736d6d54203eb8c7c58983_ @ 0x18065ECE0
 * Callers:
 *     _winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983____::_1_::dtor$0 @ 0x18065CD7E (_winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_3415c00afb7.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_3415c00afb736d6d54203eb8c7c58983_::__lambda_3415c00afb736d6d54203eb8c7c58983_(__int64 *a1)
{
  __int64 *v2; // rcx

  v2 = a1 + 1;
  if ( *v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v2);
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(a1);
}
