/*
 * XREFs of VmCallSkSvc @ 0x140628CE0
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x14054FAB4 (VslSvcEnterIumSecureMode.c)
 */

__int64 __fastcall VmCallSkSvc(__int128 *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
