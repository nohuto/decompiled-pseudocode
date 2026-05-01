/*
 * XREFs of _UwpWindowEventDispatcher::UwpWindowActivationRequested_::_1_::dtor$18 @ 0x1803F4FFB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowEventDispatcher::UwpWindowActivationRequested_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(a2 + 48);
}
