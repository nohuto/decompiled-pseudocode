/*
 * XREFs of _DeviceDockServer::OnDockInput_::_1_::dtor$2 @ 0x18017DF06
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceDockServer::OnDockInput_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
