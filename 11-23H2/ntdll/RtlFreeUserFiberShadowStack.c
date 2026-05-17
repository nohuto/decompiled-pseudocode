/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800ED6C0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x1800A1230 (NtSetInformationProcess.c)
 */

__int64 RtlFreeUserFiberShadowStack()
{
  return NtSetInformationProcess();
}
