/*
 * XREFs of sub_1406509F8 @ 0x1406509F8
 * Callers:
 *     sub_140650AA8 @ 0x140650AA8 (sub_140650AA8.c)
 *     sub_140650ED8 @ 0x140650ED8 (sub_140650ED8.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     sub_140650B5C @ 0x140650B5C (sub_140650B5C.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14075A820 (RtlxAnsiStringToUnicodeSize.c)
 *     sub_140930250 @ 0x140930250 (sub_140930250.c)
 */

__int64 __fastcall sub_1406509F8(CHAR *SourceString, UNICODE_STRING *a2)
{
  ULONG v4; // eax
  NTSTATUS v5; // ebx
  wchar_t *v6; // rcx
  wchar_t *Buffer; // rcx
  UNICODE_STRING v9; // [rsp+20h] [rbp-28h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  *(_QWORD *)&v9.Length = 0LL;
  sub_140650B5C(SourceString);
  RtlInitAnsiString(&DestinationString, SourceString);
  v4 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v9.MaximumLength = v4;
  v9.Buffer = (wchar_t *)sub_140930250(v4);
  if ( v9.Buffer )
  {
    v5 = RtlAnsiStringToUnicodeString(&v9, &DestinationString, 0);
    if ( v5 < 0 )
    {
      Buffer = v9.Buffer;
    }
    else
    {
      v6 = a2->Buffer;
      if ( v6 )
        sub_1406D9550(v6);
      Buffer = 0LL;
      *a2 = v9;
    }
    if ( Buffer )
      sub_1406D9550(Buffer);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
