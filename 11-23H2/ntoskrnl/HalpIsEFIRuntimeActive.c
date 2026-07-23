/*
 * XREFs of HalpIsEFIRuntimeActive @ 0x1403B5E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIsEFIRuntimeActive()
{
  return HalpEfiCalls != 0;
}
