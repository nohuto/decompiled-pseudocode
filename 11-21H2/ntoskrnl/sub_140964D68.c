/*
 * XREFs of sub_140964D68 @ 0x140964D68
 * Callers:
 *     sub_140964124 @ 0x140964124 (sub_140964124.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlCompareString @ 0x1406AFF70 (RtlCompareString.c)
 *     RtlFreeAnsiString @ 0x14070AFC0 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 */

__int64 __fastcall sub_140964D68(PCWSTR SourceString, _DWORD *a2, _QWORD *a3)
{
  NTSTATUS v5; // ebx
  int v6; // ebx
  __int64 v7; // rbp
  _STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING SourceStringa; // [rsp+30h] [rbp-28h] BYREF
  _STRING String1; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  String1 = 0LL;
  SourceStringa = 0LL;
  if ( !SourceString || !a3 || !a2 )
    return 3221225485LL;
  RtlInitUnicodeString(&SourceStringa, SourceString);
  v5 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceStringa, 1u);
  if ( v5 >= 0 )
  {
    v6 = 0;
    if ( *a2 )
    {
      while ( 1 )
      {
        v7 = (__int64)&a2[74 * v6 + 2];
        RtlInitAnsiString(&String1, (PCSZ)(v7 + *(unsigned __int16 *)(v7 + 38) + 40LL));
        if ( !RtlCompareString(&String1, &DestinationString, 1u) )
          break;
        if ( (unsigned int)++v6 >= *a2 )
          goto LABEL_8;
      }
      v5 = 0;
      *a3 = *(_QWORD *)(v7 + 16);
    }
    else
    {
LABEL_8:
      v5 = -1073741275;
    }
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v5;
}
