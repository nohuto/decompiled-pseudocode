/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1403749F4
 * Callers:
 *     IopCreateArcName @ 0x14086F828 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140B39DF0 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773C00 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
