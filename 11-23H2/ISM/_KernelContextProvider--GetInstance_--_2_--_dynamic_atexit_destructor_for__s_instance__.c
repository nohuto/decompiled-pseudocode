/*
 * XREFs of _KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180070050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>((__int64 *)&qword_180268E78);
}
