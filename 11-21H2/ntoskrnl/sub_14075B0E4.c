/*
 * XREFs of sub_14075B0E4 @ 0x14075B0E4
 * Callers:
 *     sub_14075B48C @ 0x14075B48C (sub_14075B48C.c)
 *     sub_140A146FC @ 0x140A146FC (sub_140A146FC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14075B0E4(char *a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int16 MaximumLength; // bx
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-30h] BYREF
  _STRING v9; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  *(_DWORD *)(&v9.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  MaximumLength = DestinationString.MaximumLength;
  SourceString.Buffer = (wchar_t *)sub_14075B444(v5, DestinationString.MaximumLength);
  if ( SourceString.Buffer )
  {
    SourceString.MaximumLength = MaximumLength;
    SourceString.Length = 0;
    v6 = RtlUpcaseUnicodeString(&SourceString, &DestinationString, 0);
    if ( v6 < 0
      || (v9.Buffer = a1,
          *(_DWORD *)&v9.Length = 0x1000000,
          v6 = RtlUnicodeStringToAnsiString(&v9, &SourceString, 0),
          v6 < 0) )
    {
      sub_1406E0C3C(1LL, (__int64)"AslStringUpcaseToMultiByteN");
    }
    else
    {
      v6 = 0;
      a1[v9.Length] = 0;
    }
    if ( SourceString.Buffer )
      ExFreePoolWithTag(SourceString.Buffer, 0x74705041u);
  }
  else
  {
    v6 = -1073741801;
    sub_1406E0C3C(1LL, (__int64)"AslStringUpcaseToMultiByteN");
  }
  return (unsigned int)v6;
}
