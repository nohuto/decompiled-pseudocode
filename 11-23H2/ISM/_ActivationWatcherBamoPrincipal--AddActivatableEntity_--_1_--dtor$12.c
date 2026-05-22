/*
 * XREFs of _ActivationWatcherBamoPrincipal::AddActivatableEntity_::_1_::dtor$12 @ 0x18006D079
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ActivationWatcherBamoPrincipal::AddActivatableEntity_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>((Microsoft::BamoImpl::BamoImplObject **)(a2 + 56));
}
