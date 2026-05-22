/*
 * XREFs of ?Thunk_UpdateSecondaryClickZone_408@?$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800723C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IVirtualTouchpadControllerProxy_Receive<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::Thunk_UpdateSecondaryClickZone_408(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *a1,
        const struct Windows::UI::Internal::Input::PhysicalClickZone **a2)
{
  return BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateSecondaryClickZone(a1, 1, *a2);
}
