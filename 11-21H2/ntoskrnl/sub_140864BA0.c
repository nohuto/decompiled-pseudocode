/*
 * XREFs of sub_140864BA0 @ 0x140864BA0
 * Callers:
 *     sub_1406E5154 @ 0x1406E5154 (sub_1406E5154.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall sub_140864BA0(__int64 a1, __int64 a2, UNICODE_STRING *a3, _QWORD *a4)
{
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a4 = &stru_140C16490;
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, "SMBiosData");
  return RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
}
