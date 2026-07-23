/*
 * XREFs of sub_14082848C @ 0x14082848C
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403C5514 @ 0x1403C5514 (sub_1403C5514.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     sub_140933C14 @ 0x140933C14 (sub_140933C14.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char sub_14082848C()
{
  _UNKNOWN **v0; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int i; // ebx
  NTSTATUS v3; // eax
  void *QuadPart; // rdi
  PUNICODE_STRING v5; // rcx
  LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  _TIME_FIELDS TimeFields_8; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString_8; // [rsp+80h] [rbp-88h] BYREF
  _STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v13; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v14; // [rsp+B0h] [rbp-58h] BYREF
  CHAR SourceString[256]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR v16[256]; // [rsp+1C8h] [rbp+C0h] BYREF
  _UNKNOWN *retaddr; // [rsp+3E0h] [rbp+2D8h] BYREF

  v0 = &retaddr;
  KeyHandle = 0LL;
  TimeFields = 0LL;
  LocalTime.QuadPart = 0LL;
  v13 = 0LL;
  TimeFields_8 = 0LL;
  DestinationString = 0LL;
  UnicodeString_8 = 0LL;
  v14 = 0LL;
  if ( qword_140D3B028 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140D3B028[4], 1u);
    sub_140933C14(&qword_140D3B028[3]);
    ExSystemTimeToLocalTime(&stru_140D06BB8, &LocalTime);
    RtlTimeToTimeFields(&LocalTime, &TimeFields_8);
    sub_1403C5514(
      SourceString,
      256LL,
      "%2d %2d %4d %02d:%02d:%02d.%03d\r\n",
      TimeFields_8.Month,
      TimeFields_8.Day,
      TimeFields_8.Year,
      TimeFields_8.Hour,
      TimeFields_8.Minute,
      TimeFields_8.Second,
      TimeFields_8.Milliseconds);
    RtlInitAnsiString(&DestinationString, SourceString);
    RtlAnsiStringToUnicodeString(&UnicodeString_8, &DestinationString, 1u);
    sub_140933C14(&UnicodeString_8);
    RtlFreeUnicodeString(&UnicodeString_8);
    if ( sub_1406DE960(&TimeFields, 0LL, &stru_140D3CF98, 0xF003Fu, 0) < 0 )
    {
      v5 = qword_140D3B028;
    }
    else
    {
      for ( i = 0; i < LODWORD(qword_140D3B028[10].Buffer); ++i )
      {
        sub_1402E0198(v16, 256LL, L"%d", i);
        RtlCreateUnicodeString(&v13, v16);
        if ( sub_1406DE960(&KeyHandle, TimeFields, &v13, 0xF003Fu, 0) >= 0 )
        {
          LocalTime.QuadPart = 0LL;
          v3 = sub_14067B838(KeyHandle, &word_140867F00, 256, &LocalTime);
          QuadPart = (void *)LocalTime.QuadPart;
          if ( v3 >= 0 )
          {
            RtlInitUnicodeString(&v14, (PCWSTR)(LocalTime.QuadPart + *(unsigned int *)(LocalTime.QuadPart + 8)));
            sub_140933C14(&v14);
          }
          ExFreePoolWithTag(QuadPart, 0);
          ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
      }
      ZwDeleteKey(TimeFields);
      ZwClose(TimeFields);
      v5 = qword_140D3B028;
      BYTE4(qword_140D3B028[10].Buffer) = 1;
    }
    ExReleaseResourceLite((PERESOURCE)&v5[4]);
    LOBYTE(v0) = sub_1402F9540((__int64)CurrentThread);
  }
  return (char)v0;
}
