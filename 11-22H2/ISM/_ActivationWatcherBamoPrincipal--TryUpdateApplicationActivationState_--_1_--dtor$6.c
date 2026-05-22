/*
 * XREFs of _ActivationWatcherBamoPrincipal::TryUpdateApplicationActivationState_::_1_::dtor$6 @ 0x180081B77
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ActivationWatcherBamoPrincipal::TryUpdateApplicationActivationState_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)(a2 + 160));
}
