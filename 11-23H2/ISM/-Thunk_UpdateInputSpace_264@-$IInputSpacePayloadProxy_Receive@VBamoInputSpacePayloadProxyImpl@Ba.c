/*
 * XREFs of ?Thunk_UpdateInputSpace_264@?$IInputSpacePayloadProxy_Receive@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18005E5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInputSpacePayloadProxy_Receive<BamoImpl::BamoInputSpacePayloadProxyImpl>::Thunk_UpdateInputSpace_264(
        BamoImpl::BamoInputSpacePayloadProxyImpl *a1,
        const struct INPUT_SPACE **a2)
{
  return BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateInputSpace(a1, 1, *a2);
}
