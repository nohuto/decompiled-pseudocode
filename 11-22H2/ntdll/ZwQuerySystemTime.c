/*
 * XREFs of ZwQuerySystemTime @ 0x18009F930
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180072210 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18008C840 (RtlInstallFunctionTableCallback.c)
 *     RtlCreateProcessReflection @ 0x1800E0CE0 (RtlCreateProcessReflection.c)
 *     RtlAddFunctionTable @ 0x1800EB1E0 (RtlAddFunctionTable.c)
 *     RtlRunEncodeUnicodeString @ 0x1800F1A10 (RtlRunEncodeUnicodeString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  return RtlQuerySystemTime(SystemTime);
}
