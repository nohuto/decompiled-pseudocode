/*
 * XREFs of ?Thunk_UpdateSize_362@?$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18012B6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IVirtualTouchpadControllerProxy_Receive<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::Thunk_UpdateSize_362(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *a1,
        const struct Windows::UI::Internal::Input::VirtualTouchpadSize **a2)
{
  return BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateSize(a1, 1, *a2);
}
