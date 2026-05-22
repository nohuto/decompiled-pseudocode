/*
 * XREFs of ?Thunk_OnInputConfigChanged_368@?$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180059200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ISystemContextEndpointPrincipal_Receive<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::Thunk_OnInputConfigChanged_368(
        BamoImpl::BamoSystemContextEndpointPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoSystemContextEndpointPrincipalImpl::OnInputConfigChanged(
           a1,
           *(const unsigned int **)a2,
           *(_DWORD *)(a2 + 8));
}
