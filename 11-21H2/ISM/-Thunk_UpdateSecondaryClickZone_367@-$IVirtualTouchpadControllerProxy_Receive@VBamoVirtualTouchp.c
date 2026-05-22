/*
 * XREFs of ?Thunk_UpdateSecondaryClickZone_367@?$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18012B680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IVirtualTouchpadControllerProxy_Receive<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::Thunk_UpdateSecondaryClickZone_367(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *a1,
        const struct Windows::UI::Internal::Input::PhysicalClickZone **a2)
{
  return BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateSecondaryClickZone(a1, 1, *a2);
}
