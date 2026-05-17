/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x180088EBC
 * Callers:
 *     LdrpRelocateImage @ 0x180088D94 (LdrpRelocateImage.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     LdrpLoadCustomNtdll @ 0x1800E0454 (LdrpLoadCustomNtdll.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpSetProtection @ 0x180088FC8 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x18008B610 (LdrRelocateImageWithBias.c)
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpProtectAndRelocateImage(const void *a1)
{
  bool v2; // di
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  int v8; // edx
  const void *v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v2 = 0;
  v9 = a1;
  v3 = ZwQueryVirtualMemory(-1LL, 0LL, 4LL, &v9, 16LL, 0LL);
  if ( v3 < 0 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1935,
      (__int64)"LdrpProtectAndRelocateImage",
      0,
      "Querying large page info failed with status 0x%08lx\n",
      v3);
  }
  else if ( (v10 & 1) != 0 )
  {
    v2 = (v10 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v4 = LdrpSetProtection(a1, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      v8 = 1945;
LABEL_13:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        v8,
        (__int64)"LdrpProtectAndRelocateImage",
        0,
        "Changing the protection of the executable at %p failed with status 0x%08lx\n",
        a1,
        v4);
      goto LABEL_9;
    }
  }
  v5 = LdrRelocateImageWithBias(a1);
  if ( v5 >= 0 && !v2 )
  {
    LOBYTE(v6) = 1;
    v4 = LdrpSetProtection(a1, v6);
    v5 = v4;
    if ( v4 < 0 )
    {
      v8 = 1969;
      goto LABEL_13;
    }
  }
LABEL_9:
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    2009,
    (__int64)"LdrpProtectAndRelocateImage",
    4u,
    "Status: 0x%08lx\n",
    v5);
  return (unsigned int)v5;
}
