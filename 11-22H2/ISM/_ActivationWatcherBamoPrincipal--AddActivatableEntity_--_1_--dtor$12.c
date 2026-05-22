/*
 * XREFs of _ActivationWatcherBamoPrincipal::AddActivatableEntity_::_1_::dtor$12 @ 0x1800811C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ActivationWatcherBamoPrincipal::AddActivatableEntity_::_1_::dtor_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
           (Microsoft::BamoImpl::BamoImplObject **)(a2 + 56),
           a2,
           a3,
           a4);
}
