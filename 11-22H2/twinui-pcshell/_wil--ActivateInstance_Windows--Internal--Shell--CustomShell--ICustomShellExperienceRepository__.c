/*
 * XREFs of _wil::ActivateInstance_Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository__::_1_::dtor$0 @ 0x1803E57CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivateInstance_Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
