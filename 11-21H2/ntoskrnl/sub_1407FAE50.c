/*
 * XREFs of sub_1407FAE50 @ 0x1407FAE50
 * Callers:
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 */

char __fastcall sub_1407FAE50(PCUNICODE_STRING String2, BOOLEAN a2)
{
  const WCHAR *v4; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !word_140CF68A0 )
    return 0;
  v4 = &word_140CF68A0;
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, v4);
    if ( DestinationString.Length )
    {
      if ( RtlPrefixUnicodeString(&DestinationString, String2, a2) )
        break;
    }
    v4 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
    if ( !DestinationString.Length )
      return 0;
  }
  return 1;
}
