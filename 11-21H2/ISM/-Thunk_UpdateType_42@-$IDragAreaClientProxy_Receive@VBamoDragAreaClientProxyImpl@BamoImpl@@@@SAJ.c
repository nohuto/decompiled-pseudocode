/*
 * XREFs of ?Thunk_UpdateType_42@?$IDragAreaClientProxy_Receive@VBamoDragAreaClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragAreaClientProxy_Receive<BamoImpl::BamoDragAreaClientProxyImpl>::Thunk_UpdateType_42(
        BamoImpl::BamoDragAreaClientProxyImpl *a1,
        const struct _GUID **a2)
{
  return BamoImpl::BamoDragAreaClientProxyImpl::UpdateType(a1, 1, *a2);
}
