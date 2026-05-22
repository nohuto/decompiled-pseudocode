/*
 * XREFs of _ActivationWatcherBamoPrincipal::TryUpdateApplicationActivationState_::_1_::dtor$16 @ 0x180058030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ActivationWatcherBamoPrincipal::TryUpdateApplicationActivationState_::_1_::dtor_16(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>::~com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>(a2 + 144);
}
