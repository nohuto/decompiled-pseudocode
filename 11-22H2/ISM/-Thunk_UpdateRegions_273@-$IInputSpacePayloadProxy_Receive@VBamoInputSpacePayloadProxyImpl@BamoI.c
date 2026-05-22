/*
 * XREFs of ?Thunk_UpdateRegions_273@?$IInputSpacePayloadProxy_Receive@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180070250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInputSpacePayloadProxy_Receive<BamoImpl::BamoInputSpacePayloadProxyImpl>::Thunk_UpdateRegions_273(
        BamoImpl::BamoInputSpacePayloadProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateRegions(
           a1,
           1,
           *(const struct INPUT_SPACE_REGION **)a2,
           *(_DWORD *)(a2 + 8));
}
