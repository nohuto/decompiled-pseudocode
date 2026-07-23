/*
 * XREFs of sub_140960D50 @ 0x140960D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x1407E18E0 (PcwAddInstance.c)
 *     sub_1409E93FC @ 0x1409E93FC (sub_1409E93FC.c)
 *     sub_1409E9458 @ 0x1409E9458 (sub_1409E9458.c)
 */

NTSTATUS __fastcall sub_140960D50(int a1, __int64 a2)
{
  int v2; // ecx
  struct _PCW_BUFFER *v3; // r14
  ULONG v4; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 *i; // rsi
  __int64 v7; // rbx
  NTSTATUS result; // eax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  WCHAR SourceString[12]; // [rsp+50h] [rbp-38h] BYREF

  DestinationString = 0LL;
  if ( !a1 )
  {
    sub_1409E9458();
    return 0;
  }
  v2 = a1 - 1;
  if ( !v2 )
  {
    sub_1409E93FC();
    return 0;
  }
  if ( (unsigned int)(v2 - 1) > 1 )
    return 0;
  v3 = *(struct _PCW_BUFFER **)(a2 + 24);
  v4 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( !ActiveProcessorCount )
    return 0;
  for ( i = qword_140D088C0; ; ++i )
  {
    v7 = *i;
    sub_1402E1280(SourceString, 0x16uLL, L"%u", v4);
    RtlInitUnicodeString(&DestinationString, SourceString);
    Data.Size = 184;
    Data.Data = (const void *)(v7 + 35008);
    result = PcwAddInstance(v3, &DestinationString, v4, 1u, &Data);
    if ( result < 0 )
      break;
    if ( ++v4 >= ActiveProcessorCount )
      return 0;
  }
  return result;
}
