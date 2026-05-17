/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x1800D6680
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlQueryPackageIdentity @ 0x18006E480 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     RtlCaptureContext @ 0x1800A3110 (RtlCaptureContext.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D6874 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D68FC (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800D69F4 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800D6B3C (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlReportException @ 0x1800E6D10 (RtlReportException.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  int PackageIdentity; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+48h] [rbp-B8h] BYREF
  int v7; // [rsp+50h] [rbp-B0h]
  const wchar_t *v8; // [rsp+58h] [rbp-A8h]
  _DWORD v9[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall *v10)(_QWORD); // [rsp+70h] [rbp-90h]
  struct _CONTEXT ContextRecord; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v12[4]; // [rsp+5D0h] [rbp+4D0h] BYREF
  int v13; // [rsp+5D4h] [rbp+4D4h]
  int v14; // [rsp+5D8h] [rbp+4D8h]
  _BYTE v15[256]; // [rsp+620h] [rbp+520h] BYREF

  v5 = 256LL;
  v7 = 1441812;
  v8 = L"BinaryHash";
  PackageIdentity = RtlQueryPackageIdentity(-4, (int)v15, (int)&v5, 0, 0LL, 0LL);
  if ( PackageIdentity < 0 )
    goto LABEL_11;
  PackageIdentity = LdrpAppxGetRemediationRegistryKey(a1, v15, &Handle);
  if ( PackageIdentity < 0 )
    goto LABEL_11;
  PackageIdentity = LdrpAppxGetBinaryNameKeyInformation(Handle, &v5, &v6);
  if ( PackageIdentity >= 0 )
  {
    memset_thunk_772440563353939046(v12, 0, 0x50uLL);
    PackageIdentity = NtQueryValueKey();
    if ( PackageIdentity >= 0 )
    {
      if ( v13 == 3 && v14 )
        LdrpAppxEtwIntegrityFailure(a1, v15, v5);
      else
        PackageIdentity = -1073739509;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  NtClose(Handle);
  if ( PackageIdentity < 0 )
LABEL_11:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)PackageIdentity);
  if ( a1 != -1073740673 )
  {
    memset_thunk_772440563353939046(v9, 0, 0x98uLL);
    v9[0] = 101457950;
    v10 = LdrAppxHandleIntegrityFailure;
    v9[1] = 1;
    memset_thunk_772440563353939046(&ContextRecord, 0, 0x4D0uLL);
    RtlCaptureContext(&ContextRecord);
    RtlReportException(v9, &ContextRecord, 2LL);
    ZwTerminateProcess();
  }
  return 3221225781LL;
}
