/*
 * XREFs of PopPowerRequestTableDeleteEntry @ 0x14098A25C
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x14036A698 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 */

BOOLEAN __fastcall PopPowerRequestTableDeleteEntry(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
}
