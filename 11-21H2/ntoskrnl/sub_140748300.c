/*
 * XREFs of sub_140748300 @ 0x140748300
 * Callers:
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_1409346B0 @ 0x1409346B0 (sub_1409346B0.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     sub_140933C14 @ 0x140933C14 (sub_140933C14.c)
 */

void __fastcall sub_140748300(PCUNICODE_STRING Source, char a2)
{
  PUNICODE_STRING v4; // rdi
  const UNICODE_STRING *v5; // rdx
  unsigned __int16 Length; // bx
  wchar_t *Data; // rsi
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING Sourcea; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v10; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v11; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+78h] [rbp-90h] BYREF
  WCHAR SourceString[256]; // [rsp+88h] [rbp-80h] BYREF
  char v14; // [rsp+288h] [rbp+180h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)&v14;
  v11 = 0LL;
  ValueName = 0LL;
  v10 = 0LL;
  Sourcea = 0LL;
  if ( qword_140D3B028 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140D3B028[4], 1u);
    v4 = qword_140D3B028;
    v5 = qword_140D3B028;
    if ( !a2 )
      v5 = qword_140D3B028 + 1;
    RtlCopyUnicodeString(&DestinationString, v5);
    RtlInitUnicodeString(&Sourcea, L" ");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    RtlAppendUnicodeStringToString(&DestinationString, Source);
    RtlInitUnicodeString(&v10, L"\r\n");
    RtlAppendUnicodeStringToString(&DestinationString, &v10);
    Length = DestinationString.Length;
    Data = DestinationString.Buffer;
    if ( DestinationString.Length == DestinationString.MaximumLength )
    {
      Length = DestinationString.Length - 2;
      DestinationString.Length = Length;
      DestinationString.Buffer[(unsigned __int64)Length >> 1] = 0;
    }
    ++LODWORD(v4[10].Buffer);
    sub_1402E0198(SourceString, 256LL, L"%d");
    RtlInitUnicodeString(&v11, SourceString);
    RtlInitUnicodeString(&ValueName, &word_140867F00);
    if ( BYTE4(qword_140D3B028[10].Buffer) )
    {
      sub_140933C14(&DestinationString);
    }
    else
    {
      *(_QWORD *)&Sourcea.Length = 0LL;
      *(_QWORD *)&DestinationString.Length = 0LL;
      if ( sub_1406DE960((HANDLE *)&DestinationString, 0LL, &stru_140D3CF98, 0xF003Fu, 1) >= 0 )
      {
        if ( sub_1406DE960((HANDLE *)&Sourcea, *(void **)&DestinationString.Length, &v11, 0xF003Fu, 1) >= 0 )
        {
          ZwSetValueKey(*(HANDLE *)&Sourcea.Length, &ValueName, 0, 1u, Data, Length + 2);
          ZwClose(*(HANDLE *)&Sourcea.Length);
        }
        ZwClose(*(HANDLE *)&DestinationString.Length);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&qword_140D3B028[4]);
  }
}
