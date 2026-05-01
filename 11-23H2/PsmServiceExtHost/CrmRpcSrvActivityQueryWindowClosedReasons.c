/*
 * XREFs of CrmRpcSrvActivityQueryWindowClosedReasons @ 0x180003D40
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x180003D5C (CrmSrvActivityQueryWindowClosedReasons.c)
 */

__int64 CrmRpcSrvActivityQueryWindowClosedReasons()
{
  __int64 result; // rax

  result = CrmSrvActivityQueryWindowClosedReasons();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
