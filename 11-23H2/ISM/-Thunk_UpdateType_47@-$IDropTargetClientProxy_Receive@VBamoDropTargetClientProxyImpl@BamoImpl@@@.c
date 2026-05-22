/*
 * XREFs of ?Thunk_UpdateType_47@?$IDropTargetClientProxy_Receive@VBamoDropTargetClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180054D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDropTargetClientProxy_Receive<BamoImpl::BamoDropTargetClientProxyImpl>::Thunk_UpdateType_47(
        BamoImpl::BamoDropTargetClientProxyImpl *a1,
        const struct _GUID **a2)
{
  const struct _GUID *v2; // r8

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoDropTargetClientProxyImpl::UpdateType(a1, (__int64)a2, v2);
}
