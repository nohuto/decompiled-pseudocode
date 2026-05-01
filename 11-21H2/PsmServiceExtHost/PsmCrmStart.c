/*
 * XREFs of PsmCrmStart @ 0x180048860
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsStart @ 0x180048884 (CrmGlobalsStart.c)
 *     CrmGlobalsInitialize @ 0x180049028 (CrmGlobalsInitialize.c)
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
