/*
 * XREFs of _BamoControllerNavigationManagerPrincipal::SetEnabled_::_1_::dtor$1 @ 0x18006B7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall BamoControllerNavigationManagerPrincipal::SetEnabled_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>((Microsoft::BamoImpl::BamoImplObject **)(a2 + 64));
}
