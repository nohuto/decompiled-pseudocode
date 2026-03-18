/*
 * XREFs of HalpIsEFIRuntimeActive @ 0x1403B5C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIsEFIRuntimeActive()
{
  return HalpEfiCalls != 0;
}
