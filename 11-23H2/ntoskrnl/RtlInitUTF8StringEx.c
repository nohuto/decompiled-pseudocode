/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405A7BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140374820 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitUTF8StringEx(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
