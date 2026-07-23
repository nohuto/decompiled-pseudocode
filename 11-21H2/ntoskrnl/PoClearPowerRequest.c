/*
 * XREFs of PoClearPowerRequest @ 0x140369EA0
 * Callers:
 *     sub_1403698C4 @ 0x1403698C4 (sub_1403698C4.c)
 * Callees:
 *     sub_140369FDC @ 0x140369FDC (sub_140369FDC.c)
 */

NTSTATUS __stdcall PoClearPowerRequest(PVOID PowerRequest, POWER_REQUEST_TYPE Type)
{
  __int32 v2; // edx

  if ( Type && (v2 = Type - 1) != 0 && (unsigned int)(v2 - 1) >= 2 )
    return -1073741637;
  else
    return sub_140369FDC(PowerRequest);
}
