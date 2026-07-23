/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x1800D5FE0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800109E4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlQueryPackageIdentity @ 0x18006E480 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     RtlCaptureContext @ 0x1800A51D0 (RtlCaptureContext.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D61D4 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D625C (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800D6354 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800D649C (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  NTSTATUS RemediationRegistryKey; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR PackageSize; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h]
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+100h] [rbp+0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+5D0h] [rbp+4D0h] BYREF
  int v12; // [rsp+5D4h] [rbp+4D4h]
  int v13; // [rsp+5D8h] [rbp+4D8h]
  WCHAR PackageFullName[128]; // [rsp+620h] [rbp+520h] BYREF

  PackageSize = 256LL;
  *(_DWORD *)&ValueName.Length = 1441812;
  ValueName.Buffer = L"BinaryHash";
  RemediationRegistryKey = RtlQueryPackageIdentity(
                             (HANDLE)0xFFFFFFFFFFFFFFFCLL,
                             PackageFullName,
                             &PackageSize,
                             0LL,
                             0LL,
                             0LL);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_11;
  RemediationRegistryKey = LdrpAppxGetRemediationRegistryKey(a1, PackageFullName, &KeyHandle);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_11;
  RemediationRegistryKey = LdrpAppxGetBinaryNameKeyInformation(KeyHandle);
  if ( RemediationRegistryKey >= 0 )
  {
    memset_thunk_772440563353939046(KeyValueInformation, 0, 0x50uLL);
    RemediationRegistryKey = NtQueryValueKey(
                               KeyHandle,
                               &ValueName,
                               KeyValuePartialInformation,
                               KeyValueInformation,
                               0x50u,
                               &ResultLength);
    if ( RemediationRegistryKey >= 0 )
    {
      if ( v12 == 3 && v13 )
        LdrpAppxEtwIntegrityFailure(a1, PackageFullName, PackageSize);
      else
        RemediationRegistryKey = -1073739509;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  NtClose(KeyHandle);
  if ( RemediationRegistryKey < 0 )
LABEL_11:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)RemediationRegistryKey);
  if ( a1 != -1073740673 )
  {
    memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
    ExceptionRecord.ExceptionCode = 101457950;
    ExceptionRecord.ExceptionAddress = LdrAppxHandleIntegrityFailure;
    ExceptionRecord.ExceptionFlags = 1;
    memset_thunk_772440563353939046(&ContextRecord, 0, 0x4D0uLL);
    RtlCaptureContext(&ContextRecord);
    RtlReportException(&ExceptionRecord, &ContextRecord, 2u);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord.ExceptionCode);
  }
  return 3221225781LL;
}
