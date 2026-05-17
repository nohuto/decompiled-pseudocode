/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x18006B4A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180024EF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlInitAnsiStringEx @ 0x18006B4E0 (RtlInitAnsiStringEx.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
