/*
 * XREFs of _InputInjectionClientProxy::InjectTouchInput_::_1_::dtor$1 @ 0x1801B686B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputInjectionClientProxy::InjectTouchInput_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)(a2 + 144));
}
