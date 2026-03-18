/*
 * XREFs of KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403DF52C
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x140A59154 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeDoesSystemHaveHeterogeneousCoreTypes()
{
  return ((unsigned __int64)KeFeatureBits >> 53) & 1;
}
