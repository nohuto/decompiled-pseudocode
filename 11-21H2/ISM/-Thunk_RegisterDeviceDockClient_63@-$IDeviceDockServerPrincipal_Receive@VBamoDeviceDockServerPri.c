/*
 * XREFs of ?Thunk_RegisterDeviceDockClient_63@?$IDeviceDockServerPrincipal_Receive@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18017FB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceDockServerPrincipal_Receive<BamoImpl::BamoDeviceDockServerPrincipalImpl>::Thunk_RegisterDeviceDockClient_63(
        __int64 a1,
        unsigned int **a2)
{
  return BamoImpl::BamoDeviceDockServerPrincipalImpl::RegisterDeviceDockClient(a1, **a2, *a2[1]);
}
