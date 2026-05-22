/*
 * XREFs of _KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180058C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>((__int64 *)&qword_180242D58);
}
