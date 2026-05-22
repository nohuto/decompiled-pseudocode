/*
 * XREFs of ?Thunk_UpdateDeviceType_16@?$IDockableDeviceProxy_Receive@VBamoDockableDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180133D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDockableDeviceProxy_Receive<BamoImpl::BamoDockableDeviceProxyImpl>::Thunk_UpdateDeviceType_16(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceType(a1, a2, *v2);
}
