/*
 * XREFs of LdrpLoadPatchImage @ 0x1800DA410
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrHotPatchNotify @ 0x1800D9A90 (LdrHotPatchNotify.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011348 (LdrpFreeUnicodeString.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002C1CC (LdrpFindLoadedDllByHandle.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DBBA4 (LdrpLogEtwHotPatchStatus.c)
 */

__int64 __fastcall LdrpLoadPatchImage(const void *a1)
{
  __int64 v2; // rbx
  unsigned int v4; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v5; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v7; // [rsp+68h] [rbp-98h] BYREF
  __int64 v8[15]; // [rsp+80h] [rbp-80h] BYREF
  char v9; // [rsp+FCh] [rbp-4h]

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    298LL,
    (__int64)"LdrpLoadPatchImage",
    3LL,
    "Loading patch image with Base image at: 0x%p\n",
    a1);
  v7 = 0LL;
  LdrpInitializeDllPath(0LL, 0LL, v8);
  v4 = 0;
  LdrpLoadDllInternal((__int64)&v7, (int)v8, 0x10000200u, 9, 0LL, 0LL, &v6, (int *)&v4, (__int64)a1);
  v2 = 0LL;
  v5 = 0LL;
  if ( (v4 & 0x80000000) != 0 )
  {
    LdrpFindLoadedDllByHandle((unsigned __int64)a1, &v5, 0LL);
    v2 = v5;
    LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, v5, (unsigned int)&v7, v4, 1);
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      353LL,
      (__int64)"LdrpLoadPatchImage",
      0LL,
      "Failed to load patch image with base address 0x%p. Status: 0x%08lx\n",
      a1,
      v4);
  }
  LdrpFreeUnicodeString((__int64)&v7);
  if ( v9 )
    RtlReleasePath(v8[0]);
  if ( v6 )
    LdrpDereferenceModule(v6);
  if ( v2 )
    LdrpDereferenceModule(v2);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    368LL,
    (__int64)"LdrpLoadPatchImage",
    4LL,
    "Status: 0x%08lx\n",
    v4);
  return v4;
}
