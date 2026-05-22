/*
 * XREFs of ?Thunk_UpdateRegion_16@?$IResizeAreaClientProxy_Receive@VBamoResizeAreaClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IResizeAreaClientProxy_Receive<BamoImpl::BamoResizeAreaClientProxyImpl>::Thunk_UpdateRegion_16(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoResizeAreaClientProxyImpl::UpdateRegion(a1, a2, *v2);
}
