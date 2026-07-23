/*
 * XREFs of RtlInitUTF8String @ 0x1405A7BD0
 * Callers:
 *     PiGetDefaultMessageString @ 0x140848E70 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402F6EE0 (RtlInitAnsiString.c)
 */

void __cdecl RtlInitUTF8String(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  RtlInitAnsiString(DestinationString, SourceString);
}
