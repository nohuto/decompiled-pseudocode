/*
 * XREFs of _ViewEventArgsForWindowingSettings::GetWindowingSettings_::_1_::dtor$1 @ 0x1804C60DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForWindowingSettings::GetWindowingSettings_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
