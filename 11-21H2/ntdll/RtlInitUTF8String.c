/*
 * XREFs of RtlInitUTF8String @ 0x1800340F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUTF8String(PSTRING DestinationString, PCSZ SourceString)
{
  RtlInitAnsiString(DestinationString, SourceString);
}
