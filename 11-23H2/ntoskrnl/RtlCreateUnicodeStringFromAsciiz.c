/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x14080DB70
 * Callers:
 *     CmpSetSystemRegistryString @ 0x1403745D4 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140944E48 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140B9AD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9B180 (CimfsInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140374680 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773C00 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
