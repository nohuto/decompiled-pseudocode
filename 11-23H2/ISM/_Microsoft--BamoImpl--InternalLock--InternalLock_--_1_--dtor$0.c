/*
 * XREFs of _Microsoft::BamoImpl::InternalLock::InternalLock_::_1_::dtor$0 @ 0x18006BAB6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::BamoImpl::InternalLock::InternalLock_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(*(Microsoft::BamoImpl::BamoImplObject ***)(a2 + 48));
}
