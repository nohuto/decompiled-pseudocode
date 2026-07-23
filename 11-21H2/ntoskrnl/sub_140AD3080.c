/*
 * XREFs of sub_140AD3080 @ 0x140AD3080
 * Callers:
 *     sub_140AD5530 @ 0x140AD5530 (sub_140AD5530.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_140AD3080(unsigned __int16 a1)
{
  unsigned __int8 result; // al

  _enable();
  result = __inbyte(a1);
  _disable();
  return result;
}
