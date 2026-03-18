/*
 * XREFs of PopPowerRequestTableDeleteEntry @ 0x140981AFC
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x14032BD78 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14031E9D0 (RtlDeleteElementGenericTableAvl.c)
 */

BOOLEAN __fastcall PopPowerRequestTableDeleteEntry(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
}
