/*
 * XREFs of HalpIsEFIRuntimeActive @ 0x1403B55F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIsEFIRuntimeActive()
{
  return HalpEfiCalls != 0;
}
