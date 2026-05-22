/*
 * XREFs of ?Thunk_UpdatePrimaryClickZone_367@?$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18012B660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IVirtualTouchpadControllerProxy_Receive<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::Thunk_UpdatePrimaryClickZone_367(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *a1,
        const struct Windows::UI::Internal::Input::PhysicalClickZone **a2)
{
  return BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdatePrimaryClickZone(a1, 1, *a2);
}
