/*
 * XREFs of ?Thunk_UpdateRoutingMode_16@?$IEdgyNotificationSourceClientProxy_Receive@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801341E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IEdgyNotificationSourceClientProxy_Receive<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::Thunk_UpdateRoutingMode_16(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateRoutingMode(a1, a2, *v2);
}
