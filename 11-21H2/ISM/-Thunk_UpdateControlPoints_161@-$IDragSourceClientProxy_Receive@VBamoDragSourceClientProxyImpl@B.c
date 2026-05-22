/*
 * XREFs of ?Thunk_UpdateControlPoints_161@?$IDragSourceClientProxy_Receive@VBamoDragSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801186D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragSourceClientProxy_Receive<BamoImpl::BamoDragSourceClientProxyImpl>::Thunk_UpdateControlPoints_161(
        BamoImpl::BamoDragSourceClientProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDragSourceClientProxyImpl::UpdateControlPoints(
           a1,
           1,
           *(const struct tagPOINT **)a2,
           *(_DWORD *)(a2 + 8));
}
