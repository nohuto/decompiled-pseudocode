/*
 * XREFs of RtlInitUnicodeStringEx_0 @ 0x18004A4A8
 * Callers:
 *     CompatCacheLookupPackage @ 0x180034070 (CompatCacheLookupPackage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInitUnicodeStringEx_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  return RtlInitUnicodeStringEx(DestinationString, SourceString);
}
