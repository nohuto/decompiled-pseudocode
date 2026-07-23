/*
 * XREFs of sub_14092EC30 @ 0x14092EC30
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PcwAddInstance @ 0x1407E18E0 (PcwAddInstance.c)
 *     sub_14092EB58 @ 0x14092EB58 (sub_14092EB58.c)
 */

int __fastcall sub_14092EC30(int a1, __int64 a2)
{
  int v3; // ecx
  int result; // eax
  struct _PCW_BUFFER *v5; // rcx
  struct _PCW_DATA Data; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v3 = a1 - 2;
  if ( v3 )
  {
    if ( v3 == 1 )
      return sub_14092EB58(*(PPCW_BUFFER *)(a2 + 24));
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"default");
    v5 = *(struct _PCW_BUFFER **)(a2 + 24);
    Data.Data = 0LL;
    Data.Size = 16;
    result = PcwAddInstance(v5, &DestinationString, 0, 1u, &Data);
    if ( result < 0 )
      return result;
  }
  return 0;
}
