/*
 * XREFs of CrmRpcSrvActivityWindowClosedReasonSubscribe @ 0x180003BC0
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180003BDC (CrmSrvActivityWindowClosedReasonSubscribe.c)
 */

__int64 CrmRpcSrvActivityWindowClosedReasonSubscribe()
{
  __int64 result; // rax

  result = CrmSrvActivityWindowClosedReasonSubscribe();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
