/*
 * XREFs of VmCallSkSvc @ 0x1405F8E80
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x14054D214 (VslSvcEnterIumSecureMode.c)
 */

__int64 __fastcall VmCallSkSvc(_OWORD *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
