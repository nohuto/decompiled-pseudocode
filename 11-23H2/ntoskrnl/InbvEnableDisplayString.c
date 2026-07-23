/*
 * XREFs of InbvEnableDisplayString @ 0x1403B6DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140C6AB4C;
  byte_140C6AB4C = a1;
  return result;
}
