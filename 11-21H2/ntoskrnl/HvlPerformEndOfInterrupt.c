/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x140459C10
 * Callers:
 *     sub_140543130 @ 0x140543130 (sub_140543130.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 */

__int64 __fastcall HvlPerformEndOfInterrupt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL, a2, a3);
  _enable();
  return result;
}
