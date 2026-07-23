/*
 * XREFs of HalStartProfileInterrupt @ 0x140507430
 * Callers:
 *     <none>
 * Callees:
 *     HalpStartProfileInterruptEx @ 0x140508520 (HalpStartProfileInterruptEx.c)
 */

__int64 __fastcall HalStartProfileInterrupt(__int64 a1)
{
  return HalpStartProfileInterruptEx(a1, 0LL, 0LL, 0LL);
}
