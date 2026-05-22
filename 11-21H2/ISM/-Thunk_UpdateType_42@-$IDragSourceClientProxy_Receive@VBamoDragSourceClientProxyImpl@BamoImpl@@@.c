/*
 * XREFs of ?Thunk_UpdateType_42@?$IDragSourceClientProxy_Receive@VBamoDragSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragSourceClientProxy_Receive<BamoImpl::BamoDragSourceClientProxyImpl>::Thunk_UpdateType_42(
        BamoImpl::BamoDragSourceClientProxyImpl *a1,
        const struct _GUID **a2)
{
  return BamoImpl::BamoDragSourceClientProxyImpl::UpdateType(a1, 1, *a2);
}
