/*
 * XREFs of _VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180058DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>(&qword_180242DD8);
}
