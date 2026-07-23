/*
 * XREFs of LdrpLoadPatchImage @ 0x1800DA320
 * Callers:
 *     LdrHotPatchNotify @ 0x1800D9A20 (LdrHotPatchNotify.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB68C (LdrpLogEtwHotPatchStatus.c)
 */

__int64 __fastcall LdrpLoadPatchImage(const void *a1)
{
  char *v2; // rbx
  __int64 v4; // [rsp+50h] [rbp-B0h] BYREF
  char *v5; // [rsp+58h] [rbp-A8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  int v7[4]; // [rsp+68h] [rbp-98h] BYREF
  PWSTR Path[15]; // [rsp+80h] [rbp-80h] BYREF
  char v9; // [rsp+FCh] [rbp-4h]

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    298,
    (__int64)"LdrpLoadPatchImage",
    3u,
    "Loading patch image with Base image at: 0x%p\n",
    a1);
  *(_OWORD *)v7 = 0LL;
  LdrpInitializeDllPath(0LL, 0LL, (const WCHAR **)Path);
  LODWORD(v4) = 0;
  LdrpLoadDllInternal((__int64)v7, (int)Path, 0x200u, 9, 0LL, 0LL, &BaseAddress, (int *)&v4, (unsigned __int64)a1);
  v2 = 0LL;
  v5 = 0LL;
  if ( (int)v4 < 0 )
  {
    LdrpFindLoadedDllByHandle((unsigned __int64)a1, (__int64 *)&v5, 0LL);
    v2 = v5;
    LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, (_DWORD)v5, (unsigned int)v7, v4, 1);
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      353,
      (__int64)"LdrpLoadPatchImage",
      0,
      "Failed to load patch image with base address 0x%p. Status: 0x%08lx\n",
      a1,
      v4);
  }
  LdrpFreeUnicodeString((__int64)v7);
  if ( v9 )
    RtlReleasePath(Path[0]);
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  if ( v2 )
    LdrpDereferenceModule(v2);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    368,
    (__int64)"LdrpLoadPatchImage",
    4u,
    "Status: 0x%08lx\n",
    v4);
  return (unsigned int)v4;
}
