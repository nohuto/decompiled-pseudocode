/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x14080DE40
 * Callers:
 *     CmpSetSystemRegistryString @ 0x140374774 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140945048 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140B9AD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9B180 (CimfsInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140374820 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, PCSTR SourceString)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, SourceString) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
