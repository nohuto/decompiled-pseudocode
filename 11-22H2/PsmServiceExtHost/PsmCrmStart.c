/*
 * XREFs of PsmCrmStart @ 0x180043690
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsStart @ 0x1800436B4 (CrmGlobalsStart.c)
 *     CrmGlobalsInitialize @ 0x180046530 (CrmGlobalsInitialize.c)
 */

__int64 PsmCrmStart()
{
  __int64 result; // rax

  CrmGlobalsInitialize();
  result = CrmGlobalsStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
