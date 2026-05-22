/*
 * XREFs of ?Thunk_UpdateDeviceId_75@?$IDockableDeviceProxy_Receive@VBamoDockableDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180133D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDockableDeviceProxy_Receive<BamoImpl::BamoDockableDeviceProxyImpl>::Thunk_UpdateDeviceId_75(
        BamoImpl::BamoDockableDeviceProxyImpl *a1,
        const struct DockableDeviceIdentity **a2)
{
  return BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceId(a1, 1, *a2);
}
