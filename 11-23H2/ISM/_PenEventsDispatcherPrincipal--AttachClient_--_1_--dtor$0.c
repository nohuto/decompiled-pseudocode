/*
 * XREFs of _PenEventsDispatcherPrincipal::AttachClient_::_1_::dtor$0 @ 0x18006E3A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenEventsDispatcherPrincipal::AttachClient_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
