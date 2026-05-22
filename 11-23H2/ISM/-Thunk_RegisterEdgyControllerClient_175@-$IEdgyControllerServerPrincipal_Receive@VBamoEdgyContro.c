/*
 * XREFs of ?Thunk_RegisterEdgyControllerClient_175@?$IEdgyControllerServerPrincipal_Receive@VBamoEdgyControllerServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016C010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IEdgyControllerServerPrincipal_Receive<BamoImpl::BamoEdgyControllerServerPrincipalImpl>::Thunk_RegisterEdgyControllerClient_175(
        BamoImpl::BamoEdgyControllerServerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoEdgyControllerServerPrincipalImpl::RegisterEdgyControllerClient(
           a1,
           *(const unsigned __int16 **)a2,
           **(_DWORD **)(a2 + 8));
}
