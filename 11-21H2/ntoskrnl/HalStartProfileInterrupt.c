/*
 * XREFs of HalStartProfileInterrupt @ 0x14050AD30
 * Callers:
 *     <none>
 * Callees:
 *     HalpStartProfileInterruptEx @ 0x14050BB90 (HalpStartProfileInterruptEx.c)
 */

__int64 __fastcall HalStartProfileInterrupt(__int64 a1)
{
  return HalpStartProfileInterruptEx(a1, 0LL, 0LL, 0LL);
}
