/*
 * XREFs of _Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage_::_1_::dtor$1 @ 0x18007F280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage_::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
           (Microsoft::BamoImpl::BamoImplObject **)(a2 + 80),
           a2,
           a3,
           a4);
}
