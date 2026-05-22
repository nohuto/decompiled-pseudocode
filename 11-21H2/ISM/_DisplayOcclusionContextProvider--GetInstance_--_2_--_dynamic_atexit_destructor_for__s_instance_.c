/*
 * XREFs of _DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180058DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>((__int64 *)&qword_180242DE0);
}
