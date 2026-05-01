/*
 * XREFs of _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$27 @ 0x1804D0A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor_27(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
