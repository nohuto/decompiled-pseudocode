/*
 * XREFs of _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$87 @ 0x1800578C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::UpdateForegroundTarget_::_1_::dtor_87(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
           (Microsoft::BamoImpl::BamoImplObject **)(a2 + 136),
           a2,
           a3,
           a4);
}
