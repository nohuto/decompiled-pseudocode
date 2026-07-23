/*
 * XREFs of sub_1408452CC @ 0x1408452CC
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140845380 @ 0x140845380 (sub_140845380.c)
 */

__int64 __fastcall sub_1408452CC(
        _DWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        UNICODE_STRING *a4,
        _BYTE *a5,
        PUNICODE_STRING DestinationString,
        _BYTE *a7)
{
  int v11; // eax
  unsigned int v12; // ebx

  v11 = sub_140845380(a1, a4, DestinationString, a2);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( *a1 != 999 || a1[1] )
    {
      if ( v11 != -1073741729 )
        return v12;
      RtlInitUnicodeString(a4, L"-");
      RtlInitUnicodeString(DestinationString, L"-");
      *a5 = 0;
      *a7 = 0;
      if ( a2 )
      {
        *a3 = 0;
        *a2 = &unk_140D3CDE0;
      }
    }
    else
    {
      RtlInitUnicodeString(a4, L"SYSTEM");
      RtlInitUnicodeString(DestinationString, L"SYSTEM");
      *a5 = 0;
      *a7 = 0;
    }
    return 0;
  }
  if ( a4->Buffer )
    *a5 = 1;
  else
    RtlInitUnicodeString(a4, L"-");
  if ( DestinationString->Buffer )
    *a7 = 1;
  else
    RtlInitUnicodeString(DestinationString, L"-");
  if ( a2 && a3 )
    *a3 = 1;
  return v12;
}
