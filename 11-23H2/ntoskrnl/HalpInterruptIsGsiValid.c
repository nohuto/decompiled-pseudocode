/*
 * XREFs of HalpInterruptIsGsiValid @ 0x1409333B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGsiToLine @ 0x14031FF10 (HalpInterruptGsiToLine.c)
 */

bool __fastcall HalpInterruptIsGsiValid(__int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  return (int)HalpInterruptGsiToLine(a1, &v2) >= 0;
}
