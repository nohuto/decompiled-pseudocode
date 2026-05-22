/*
 * XREFs of _Microsoft::Bamo::Lock::Lock_::_1_::dtor$0 @ 0x18008D532
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Bamo::Lock::Lock_::_1_::dtor_0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
           *(Microsoft::BamoImpl::BamoImplObject ***)(a2 + 48),
           a2,
           a3,
           a4);
}
