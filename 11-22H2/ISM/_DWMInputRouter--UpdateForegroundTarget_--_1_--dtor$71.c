/*
 * XREFs of _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$71 @ 0x1800818C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::UpdateForegroundTarget_::_1_::dtor_71(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
           (Microsoft::BamoImpl::BamoImplObject **)(a2 + 104),
           a2,
           a3,
           a4);
}
