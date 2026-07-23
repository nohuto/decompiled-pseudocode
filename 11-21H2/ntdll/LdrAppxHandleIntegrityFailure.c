/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x1800D6600
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlQueryPackageIdentity @ 0x180073AA0 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     RtlCaptureContext @ 0x1800A82D0 (RtlCaptureContext.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D6810 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D6898 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800D6990 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800D6AD8 (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlReportException @ 0x1800E7EA0 (RtlReportException.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  NTSTATUS RemediationRegistryKey; // ebx
  ULONG_PTR v3; // rdi
  __int64 v4; // rcx
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR PackageSize; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h]
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+100h] [rbp+0h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+5D0h] [rbp+4D0h] BYREF
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
    goto LABEL_13;
  RemediationRegistryKey = LdrpAppxGetRemediationRegistryKey(a1, PackageFullName, &KeyHandle);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_13;
  RemediationRegistryKey = LdrpAppxGetBinaryNameKeyInformation(KeyHandle);
  if ( RemediationRegistryKey >= 0 )
  {
    v3 = PackageSize;
    LODWORD(v4) = 0;
    if ( *(_WORD *)PackageSize )
    {
      do
        v4 = (unsigned int)(v4 + 1);
      while ( *(_WORD *)(PackageSize + 2 * v4) );
    }
    memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
    RemediationRegistryKey = NtQueryValueKey(
                               KeyHandle,
                               &ValueName,
                               KeyValuePartialInformation,
                               KeyValueInformation,
                               0x50u,
                               &ResultLength);
    if ( RemediationRegistryKey >= 0 )
    {
      if ( KeyValueInformation[1] == 3 && KeyValueInformation[2] )
        LdrpAppxEtwIntegrityFailure(a1, PackageFullName, v3);
      else
        RemediationRegistryKey = -1073739509;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  NtClose(KeyHandle);
  if ( RemediationRegistryKey < 0 )
LABEL_13:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)RemediationRegistryKey);
  if ( a1 != -1073740673 )
  {
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = 101457950;
    ExceptionRecord.ExceptionAddress = LdrAppxHandleIntegrityFailure;
    ExceptionRecord.ExceptionFlags = 1;
    memset(&ContextRecord, 0, sizeof(ContextRecord));
    RtlCaptureContext(&ContextRecord);
    RtlReportException(&ExceptionRecord, &ContextRecord, 2u);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord.ExceptionCode);
  }
  return 3221225781LL;
}
