/*
 * XREFs of ?Thunk_UpdateData_28@?$IAnimationTargetClientProxy_Receive@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180055DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IAnimationTargetClientProxy_Receive<BamoImpl::BamoAnimationTargetClientProxyImpl>::Thunk_UpdateData_28(
        BamoImpl::BamoAnimationTargetClientProxyImpl *a1,
        const struct Windows::UI::Internal::Input::GestureAnimationData **a2)
{
  const struct Windows::UI::Internal::Input::GestureAnimationData *v2; // r8

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoAnimationTargetClientProxyImpl::UpdateData(a1, (__int64)a2, v2);
}
