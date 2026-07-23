/*
 * XREFs of sub_140AFFEF4 @ 0x140AFFEF4
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     sub_140B231D8 @ 0x140B231D8 (sub_140B231D8.c)
 *     sub_140B30050 @ 0x140B30050 (sub_140B30050.c)
 *     sub_140B30770 @ 0x140B30770 (sub_140B30770.c)
 *     sub_140B30E74 @ 0x140B30E74 (sub_140B30E74.c)
 */

char __fastcall sub_140AFFEF4(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  if ( (_DWORD)a1 )
  {
    sub_140B231D8(a1, a2);
    return 1;
  }
  sub_140B30050(a1, a2);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\WMIxWDM");
  if ( (int)IoCreateDriver(&DestinationString, (unsigned __int64)sub_140B22C40) >= 0 )
  {
    sub_140B30E74(a2);
    sub_140B30770(v5, v4);
    return 1;
  }
  return v2;
}
