/*
 * XREFs of ?Thunk_UpdateDisplayOcclusionSupported_11@?$IDockDeviceProxy_Receive@VBamoDockDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801187B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDockDeviceProxy_Receive<BamoImpl::BamoDockDeviceProxyImpl>::Thunk_UpdateDisplayOcclusionSupported_11(
        BamoImpl::BamoDockDeviceProxyImpl *a1,
        bool **a2)
{
  return BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionSupported(a1, 1, **a2);
}
