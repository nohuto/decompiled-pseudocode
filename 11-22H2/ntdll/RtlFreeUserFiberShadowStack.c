/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800EC390
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18009F170 (NtSetInformationProcess.c)
 */

__int64 RtlFreeUserFiberShadowStack()
{
  return NtSetInformationProcess();
}
