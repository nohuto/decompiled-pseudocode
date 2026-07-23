/*
 * XREFs of sub_1409DC2AC @ 0x1409DC2AC
 * Callers:
 *     sub_1409DC230 @ 0x1409DC230 (sub_1409DC230.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

char __fastcall sub_1409DC2AC(PCSZ SourceString, PCUNICODE_STRING String2)
{
  bool v2; // bl
  __int64 v4; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  String1 = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  if ( v4 == 1 && *SourceString == 42 )
    return 1;
  RtlInitAnsiString(&DestinationString, SourceString);
  if ( RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u) >= 0 )
  {
    v2 = RtlCompareUnicodeString(&String1, String2, 0) == 0;
    RtlFreeUnicodeString(&String1);
  }
  return v2;
}
