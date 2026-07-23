/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x140837640
 * Callers:
 *     sub_1403C7CF8 @ 0x1403C7CF8 (sub_1403C7CF8.c)
 *     sub_1409346B0 @ 0x1409346B0 (sub_1409346B0.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140B54800 @ 0x140B54800 (sub_140B54800.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403C7DA0 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, PCSTR SourceString)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, SourceString) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
