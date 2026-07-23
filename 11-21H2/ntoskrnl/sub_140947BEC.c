/*
 * XREFs of sub_140947BEC @ 0x140947BEC
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140947068 @ 0x140947068 (sub_140947068.c)
 */

void __fastcall sub_140947BEC(PCWSTR SourceString, PCWSTR a2)
{
  unsigned __int16 Length; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v5; // [rsp+40h] [rbp-10h] BYREF

  DestinationString = 0LL;
  v5 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v5, a2);
  if ( (unsigned __int64)v5.MaximumLength + 2 > 0xF0 )
  {
    v5.Length = 238;
    Length = 0;
    goto LABEL_6;
  }
  if ( v5.MaximumLength + (unsigned int)DestinationString.MaximumLength > 0xF0 )
  {
    Length = 238 - v5.MaximumLength;
LABEL_6:
    DestinationString.Length = Length;
    goto LABEL_7;
  }
  Length = DestinationString.Length;
LABEL_7:
  sub_140947068(
    (const void **)((unsigned __int64)&DestinationString & -(__int64)(Length != 0)),
    (const void **)&v5,
    -1073479624,
    0LL,
    0);
}
