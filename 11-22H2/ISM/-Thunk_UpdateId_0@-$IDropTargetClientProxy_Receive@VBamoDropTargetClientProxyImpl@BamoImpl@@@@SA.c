/*
 * XREFs of ?Thunk_UpdateId_0@?$IDropTargetClientProxy_Receive@VBamoDropTargetClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180055950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDropTargetClientProxy_Receive<BamoImpl::BamoDropTargetClientProxyImpl>::Thunk_UpdateId_0(
        BamoImpl::BamoDropTargetClientProxyImpl *a1,
        __int64 **a2)
{
  __int64 *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoDropTargetClientProxyImpl::UpdateId(a1, (__int64)a2, *v2);
}
