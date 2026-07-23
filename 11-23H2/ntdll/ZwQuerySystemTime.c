/*
 * XREFs of ZwQuerySystemTime @ 0x1800A19F0
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180072880 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18008D040 (RtlInstallFunctionTableCallback.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     RtlAddFunctionTable @ 0x1800EC510 (RtlAddFunctionTable.c)
 *     RtlRunEncodeUnicodeString @ 0x1800F2E20 (RtlRunEncodeUnicodeString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  return RtlQuerySystemTime(SystemTime);
}
