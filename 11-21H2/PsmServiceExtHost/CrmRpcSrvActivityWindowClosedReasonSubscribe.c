/*
 * XREFs of CrmRpcSrvActivityWindowClosedReasonSubscribe @ 0x18003B330
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18003B34C (CrmSrvActivityWindowClosedReasonSubscribe.c)
 */

__int64 CrmRpcSrvActivityWindowClosedReasonSubscribe()
{
  __int64 result; // rax

  result = CrmSrvActivityWindowClosedReasonSubscribe();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
