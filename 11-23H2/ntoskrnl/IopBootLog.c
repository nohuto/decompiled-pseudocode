/*
 * XREFs of IopBootLog @ 0x1407E34CC
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C8234 (PipCallDriverAddDevice.c)
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 *     IopInitializeBootLogging @ 0x140944E48 (IopInitializeBootLogging.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCchPrintfW @ 0x14022A90C (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     RtlCopyUnicodeString @ 0x1402AEFD0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041B960 (ZwSetValueKey.c)
 *     IopOpenRegistryKey @ 0x1407CEF1C (IopOpenRegistryKey.c)
 *     IopBootLogToFile @ 0x1409441B4 (IopBootLogToFile.c)
 */

void __fastcall IopBootLog(PCUNICODE_STRING Source, char a2)
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
  wchar_t pszDest[256]; // [rsp+88h] [rbp-80h] BYREF
  char v14; // [rsp+288h] [rbp+180h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)&v14;
  v11 = 0LL;
  ValueName = 0LL;
  v10 = 0LL;
  Sourcea = 0LL;
  if ( qword_140D53028 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140D53028[4], 1u);
    v4 = qword_140D53028;
    v5 = qword_140D53028;
    if ( !a2 )
      v5 = qword_140D53028 + 1;
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
    RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d");
    RtlInitUnicodeString(&v11, pszDest);
    RtlInitUnicodeString(&ValueName, &word_140887DD0);
    if ( BYTE4(qword_140D53028[10].Buffer) )
    {
      IopBootLogToFile(&DestinationString);
    }
    else
    {
      *(_QWORD *)&Sourcea.Length = 0LL;
      *(_QWORD *)&DestinationString.Length = 0LL;
      if ( IopOpenRegistryKey(
             (HANDLE *)&DestinationString,
             0LL,
             &CmRegistryMachineSystemCurrentControlSetControlBootLog,
             0xF003Fu,
             1) >= 0 )
      {
        if ( IopOpenRegistryKey((HANDLE *)&Sourcea, *(void **)&DestinationString.Length, &v11, 0xF003Fu, 1) >= 0 )
        {
          ZwSetValueKey(*(HANDLE *)&Sourcea.Length, &ValueName, 0, 1u, Data, Length + 2);
          ZwClose(*(HANDLE *)&Sourcea.Length);
        }
        ZwClose(*(HANDLE *)&DestinationString.Length);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&qword_140D53028[4]);
  }
}
