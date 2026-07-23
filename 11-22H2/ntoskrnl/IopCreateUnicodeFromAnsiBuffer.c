/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x140375044
 * Callers:
 *     IopCreateArcName @ 0x14086FCF8 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140B3D4F0 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
