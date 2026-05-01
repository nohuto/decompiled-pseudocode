/*
 * XREFs of PsmCrmStart @ 0x180043610
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsStart @ 0x180043634 (CrmGlobalsStart.c)
 *     CrmGlobalsInitialize @ 0x1800464A0 (CrmGlobalsInitialize.c)
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
