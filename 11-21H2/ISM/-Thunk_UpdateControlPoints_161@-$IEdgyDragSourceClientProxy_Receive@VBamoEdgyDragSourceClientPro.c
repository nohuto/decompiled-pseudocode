/*
 * XREFs of ?Thunk_UpdateControlPoints_161@?$IEdgyDragSourceClientProxy_Receive@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801186F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IEdgyDragSourceClientProxy_Receive<BamoImpl::BamoEdgyDragSourceClientProxyImpl>::Thunk_UpdateControlPoints_161(
        BamoImpl::BamoEdgyDragSourceClientProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateControlPoints(
           a1,
           1,
           *(const struct tagPOINT **)a2,
           *(_DWORD *)(a2 + 8));
}
