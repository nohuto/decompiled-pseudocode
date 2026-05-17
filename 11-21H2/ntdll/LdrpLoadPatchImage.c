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
  unsigned __int64 v2; // r9
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned int v8; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v11; // [rsp+68h] [rbp-98h] BYREF
  __int64 v12[15]; // [rsp+80h] [rbp-80h] BYREF
  char v13; // [rsp+FCh] [rbp-4h]

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    298,
    (__int64)"LdrpLoadPatchImage",
    3u,
    "Loading patch image with Base image at: 0x%p\n",
    a1);
  v11 = 0LL;
  LdrpInitializeDllPath(0LL, 0LL, v12);
  v8 = 0;
  LdrpLoadDllInternal((__int64)&v11, (int)v12, 0x200u, 9, 0LL, 0LL, &v10, (int *)&v8, (unsigned __int64)a1);
  v3 = 0LL;
  v9 = 0LL;
  if ( (v8 & 0x80000000) != 0 )
  {
    LdrpFindLoadedDllByHandle((unsigned __int64)a1, &v9, 0LL, v2);
    v3 = v9;
    LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, v9, (unsigned int)&v11, v8, 1);
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      353,
      (__int64)"LdrpLoadPatchImage",
      0,
      "Failed to load patch image with base address 0x%p. Status: 0x%08lx\n",
      a1,
      v8);
  }
  LdrpFreeUnicodeString((__int64)&v11);
  if ( v13 )
    RtlReleasePath(v12[0], v4, v5, v6);
  if ( v10 )
    LdrpDereferenceModule(v10, v4, v5, v6);
  if ( v3 )
    LdrpDereferenceModule(v3, v4, v5, v6);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    368,
    (__int64)"LdrpLoadPatchImage",
    4u,
    "Status: 0x%08lx\n",
    v8);
  return v8;
}
