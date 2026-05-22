/*
 * XREFs of ?Thunk_UpdateSourceType_42@?$IDragManagerClientProxy_Receive@VBamoDragManagerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragManagerClientProxy_Receive<BamoImpl::BamoDragManagerClientProxyImpl>::Thunk_UpdateSourceType_42(
        BamoImpl::BamoDragManagerClientProxyImpl *a1,
        const struct _GUID **a2)
{
  return BamoImpl::BamoDragManagerClientProxyImpl::UpdateSourceType(a1, 1, *a2);
}
