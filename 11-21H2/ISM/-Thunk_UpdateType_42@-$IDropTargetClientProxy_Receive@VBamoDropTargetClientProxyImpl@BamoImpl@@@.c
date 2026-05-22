/*
 * XREFs of ?Thunk_UpdateType_42@?$IDropTargetClientProxy_Receive@VBamoDropTargetClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDropTargetClientProxy_Receive<BamoImpl::BamoDropTargetClientProxyImpl>::Thunk_UpdateType_42(
        BamoImpl::BamoDropTargetClientProxyImpl *a1,
        const struct _GUID **a2)
{
  return BamoImpl::BamoDropTargetClientProxyImpl::UpdateType(a1, 1, *a2);
}
