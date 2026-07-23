/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x1408100F0
 * Callers:
 *     CmpSetSystemRegistryString @ 0x140374C28 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140944EF8 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140B9BD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9C180 (CimfsInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140374CD0 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, PCSTR SourceString)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, SourceString) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
