/*
 * XREFs of IopCopyBootLogRegistryToFile @ 0x1408655B8
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080A920 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14022A90C (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     ExSystemTimeToLocalTime @ 0x14033B2F0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14033B6B0 (RtlTimeToTimeFields.c)
 *     RtlStringCchPrintfA @ 0x140374A2C (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwDeleteKey @ 0x14041C8A0 (ZwDeleteKey.c)
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773C00 (RtlAnsiStringToUnicodeString.c)
 *     IopOpenRegistryKey @ 0x1407CEF1C (IopOpenRegistryKey.c)
 *     RtlCreateUnicodeString @ 0x1407FB060 (RtlCreateUnicodeString.c)
 *     IopBootLogToFile @ 0x1409441B4 (IopBootLogToFile.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

_QWORD *IopCopyBootLogRegistryToFile()
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int i; // ebx
  NTSTATUS RegistryValue; // eax
  void *QuadPart; // rdi
  PUNICODE_STRING v5; // rcx
  LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  TIME_FIELDS TimeFields_8; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString_8; // [rsp+80h] [rbp-88h] BYREF
  STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v12; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v13; // [rsp+B0h] [rbp-58h] BYREF
  char pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+1C8h] [rbp+C0h] BYREF
  _UNKNOWN *retaddr; // [rsp+3E0h] [rbp+2D8h] BYREF

  result = &retaddr;
  KeyHandle = 0LL;
  TimeFields = 0LL;
  LocalTime.QuadPart = 0LL;
  v12 = 0LL;
  TimeFields_8 = 0LL;
  DestinationString = 0LL;
  UnicodeString_8 = 0LL;
  v13 = 0LL;
  if ( qword_140D53028 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140D53028[4], 1u);
    IopBootLogToFile(&qword_140D53028[3]);
    ExSystemTimeToLocalTime(&KeBootTime, &LocalTime);
    RtlTimeToTimeFields(&LocalTime, &TimeFields_8);
    RtlStringCchPrintfA(
      pszDest,
      0x100uLL,
      "%2d %2d %4d %02d:%02d:%02d.%03d\r\n",
      TimeFields_8.Month,
      TimeFields_8.Day,
      TimeFields_8.Year,
      TimeFields_8.Hour,
      TimeFields_8.Minute,
      TimeFields_8.Second,
      TimeFields_8.Milliseconds);
    RtlInitAnsiString(&DestinationString, pszDest);
    RtlAnsiStringToUnicodeString(&UnicodeString_8, &DestinationString, 1u);
    IopBootLogToFile(&UnicodeString_8);
    RtlFreeUnicodeString(&UnicodeString_8);
    if ( IopOpenRegistryKey(&TimeFields, 0LL, &CmRegistryMachineSystemCurrentControlSetControlBootLog, 0xF003Fu, 0) < 0 )
    {
      v5 = qword_140D53028;
    }
    else
    {
      for ( i = 0; i < LODWORD(qword_140D53028[10].Buffer); ++i )
      {
        RtlStringCchPrintfW(SourceString, 0x100uLL, L"%d", i);
        RtlCreateUnicodeString(&v12, SourceString);
        if ( IopOpenRegistryKey(&KeyHandle, TimeFields, &v12, 0xF003Fu, 0) >= 0 )
        {
          LocalTime.QuadPart = 0LL;
          RegistryValue = IopGetRegistryValue(KeyHandle, &word_140887DD0, 256, &LocalTime);
          QuadPart = (void *)LocalTime.QuadPart;
          if ( RegistryValue >= 0 )
          {
            RtlInitUnicodeString(&v13, (PCWSTR)(LocalTime.QuadPart + *(unsigned int *)(LocalTime.QuadPart + 8)));
            IopBootLogToFile(&v13);
          }
          ExFreePoolWithTag(QuadPart, 0);
          ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
      }
      ZwDeleteKey(TimeFields);
      ZwClose(TimeFields);
      v5 = qword_140D53028;
      BYTE4(qword_140D53028[10].Buffer) = 1;
    }
    ExReleaseResourceLite((PERESOURCE)&v5[4]);
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
