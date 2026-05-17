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
  int PackageIdentity; // ebx
  __int64 v3; // rdi
  __int64 v4; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h] BYREF
  int v9; // [rsp+50h] [rbp-B0h]
  const wchar_t *v10; // [rsp+58h] [rbp-A8h]
  _QWORD v11[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v13[20]; // [rsp+5D0h] [rbp+4D0h] BYREF
  _BYTE v14[256]; // [rsp+620h] [rbp+520h] BYREF

  v7 = 256LL;
  v9 = 1441812;
  v10 = L"BinaryHash";
  PackageIdentity = RtlQueryPackageIdentity(-4, (int)v14, (int)&v7, 0, 0LL, 0LL);
  if ( PackageIdentity < 0 )
    goto LABEL_13;
  PackageIdentity = LdrpAppxGetRemediationRegistryKey(a1, v14, &Handle);
  if ( PackageIdentity < 0 )
    goto LABEL_13;
  PackageIdentity = LdrpAppxGetBinaryNameKeyInformation(Handle, &v7, &v8);
  if ( PackageIdentity >= 0 )
  {
    v3 = v7;
    LODWORD(v4) = 0;
    if ( *(_WORD *)v7 )
    {
      do
        v4 = (unsigned int)(v4 + 1);
      while ( *(_WORD *)(v7 + 2 * v4) );
    }
    memset(v13, 0, sizeof(v13));
    PackageIdentity = NtQueryValueKey();
    if ( PackageIdentity >= 0 )
    {
      if ( v13[1] == 3 && v13[2] )
        LdrpAppxEtwIntegrityFailure(a1, v14, v3);
      else
        PackageIdentity = -1073739509;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  }
  NtClose(Handle);
  if ( PackageIdentity < 0 )
LABEL_13:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)PackageIdentity);
  if ( a1 != -1073740673 )
  {
    memset(v11, 0, 0x98uLL);
    v11[0] = 0x1060C201ELL;
    v11[2] = LdrAppxHandleIntegrityFailure;
    memset(&ContextRecord, 0, sizeof(ContextRecord));
    RtlCaptureContext(&ContextRecord);
    RtlReportException(v11, &ContextRecord, 2LL);
    ZwTerminateProcess();
  }
  return 3221225781LL;
}
