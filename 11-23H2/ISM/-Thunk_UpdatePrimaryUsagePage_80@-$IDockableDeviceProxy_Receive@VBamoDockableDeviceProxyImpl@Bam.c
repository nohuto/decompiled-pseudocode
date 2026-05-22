/*
 * XREFs of ?Thunk_UpdatePrimaryUsagePage_80@?$IDockableDeviceProxy_Receive@VBamoDockableDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180134180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDockableDeviceProxy_Receive<BamoImpl::BamoDockableDeviceProxyImpl>::Thunk_UpdatePrimaryUsagePage_80(
        BamoImpl::BamoDockableDeviceProxyImpl *a1,
        unsigned __int16 **a2)
{
  return BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsagePage(a1, 1, **a2);
}
