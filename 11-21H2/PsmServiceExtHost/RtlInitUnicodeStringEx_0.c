/*
 * XREFs of RtlInitUnicodeStringEx_0 @ 0x18004F248
 * Callers:
 *     CompatCacheLookupPackage @ 0x18002FE90 (CompatCacheLookupPackage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInitUnicodeStringEx_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  return RtlInitUnicodeStringEx(DestinationString, SourceString);
}
