/*
 * XREFs of ?Thunk_UpdateSourceType_47@?$IDragManagerClientProxy_Receive@VBamoDragManagerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180054D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragManagerClientProxy_Receive<BamoImpl::BamoDragManagerClientProxyImpl>::Thunk_UpdateSourceType_47(
        BamoImpl::BamoDragManagerClientProxyImpl *a1,
        const struct _GUID **a2)
{
  const struct _GUID *v2; // r8

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoDragManagerClientProxyImpl::UpdateSourceType(a1, (__int64)a2, v2);
}
