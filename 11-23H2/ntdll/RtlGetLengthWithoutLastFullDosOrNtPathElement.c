/*
 * XREFs of RtlGetLengthWithoutLastFullDosOrNtPathElement @ 0x180077DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetLengthWithoutLastFullDosOrNtPathElement(ULONG Flags, PUNICODE_STRING PathString, PULONG Length)
{
  return RtlpGetLengthWithoutLastPathElement(Flags, PathString, PathString, Length);
}
