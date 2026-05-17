/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800ECAC0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x1800A43F0 (NtSetInformationProcess.c)
 */

__int64 RtlFreeUserFiberShadowStack()
{
  return NtSetInformationProcess();
}
