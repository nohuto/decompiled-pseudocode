/*
 * XREFs of _wil::com_weak_copy_failfast_wil::com_ptr_t_Windows::Internal::Input::MPCManager::IMPCManagerClient_wil::err_exception_policy__&__::_1_::dtor$0 @ 0x1801583B2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::com_weak_copy_failfast_wil::com_ptr_t_Windows::Internal::Input::MPCManager::IMPCManagerClient_wil::err_exception_policy_____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 64));
  }
  return result;
}
