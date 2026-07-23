/*
 * XREFs of sub_1403C4550 @ 0x1403C4550
 * Callers:
 *     NaptrDnsRecordConvert_3 @ 0x140B0BC60 (NaptrDnsRecordConvert_3.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlPrefixString @ 0x1406B0020 (RtlPrefixString.c)
 *     RtlCharToInteger @ 0x14082D330 (RtlCharToInteger.c)
 */

char __fastcall sub_1403C4550(const STRING *a1, const STRING *a2, ULONG *a3)
{
  char v6; // bl
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0;
  DestinationString = 0LL;
  v6 = 0;
  if ( RtlPrefixString(a1, a2, 0) )
  {
    v6 = 1;
    RtlInitAnsiString(&DestinationString, &a2->Buffer[a1->Length]);
    if ( DestinationString.Length > 0xAu )
    {
      if ( RtlPrefixString(&stru_1400036C0, &DestinationString, 0) )
        RtlCharToInteger((PCSZ)DestinationString.Buffer + 10, 0xAu, a3);
    }
  }
  return v6;
}
