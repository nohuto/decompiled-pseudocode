/*
 * XREFs of _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$71 @ 0x18006D740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMInputRouter::UpdateForegroundTarget_::_1_::dtor_71(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>((Microsoft::BamoImpl::BamoImplObject **)(a2 + 104));
}
