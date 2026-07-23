/*
 * XREFs of PoSetPowerRequest @ 0x140369FB0
 * Callers:
 *     sub_1403698C4 @ 0x1403698C4 (sub_1403698C4.c)
 * Callees:
 *     sub_14036A2C8 @ 0x14036A2C8 (sub_14036A2C8.c)
 */

NTSTATUS __stdcall PoSetPowerRequest(PVOID PowerRequest, POWER_REQUEST_TYPE Type)
{
  __int32 v2; // edx

  if ( Type && (v2 = Type - 1) != 0 && (unsigned int)(v2 - 1) >= 2 )
    return -1073741637;
  else
    return sub_14036A2C8(PowerRequest);
}
