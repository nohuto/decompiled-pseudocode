/*
 * XREFs of _Microsoft::Bamo::Lock::Lock_::_1_::dtor$0 @ 0x1800A414E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::Bamo::Lock::Lock_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(*(Microsoft::BamoImpl::BamoImplObject ***)(a2 + 48));
}
