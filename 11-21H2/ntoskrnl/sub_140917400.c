/*
 * XREFs of sub_140917400 @ 0x140917400
 * Callers:
 *     sub_1406B656C @ 0x1406B656C (sub_1406B656C.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077CB98 @ 0x14077CB98 (sub_14077CB98.c)
 *     sub_140917930 @ 0x140917930 (sub_140917930.c)
 */

char __fastcall sub_140917400(__int64 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  char v7; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 184) & 0x800000) != 0 && (int)sub_14077CB98(a1, 0LL, a3, &DestinationString) >= 0 )
  {
    v7 = sub_140917930(&DestinationString);
    if ( v7 )
    {
      *a4 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  return v7;
}
