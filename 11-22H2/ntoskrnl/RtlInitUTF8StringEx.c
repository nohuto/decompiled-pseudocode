/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405A76D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140374CD0 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitUTF8StringEx(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
