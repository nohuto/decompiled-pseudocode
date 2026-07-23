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

__int64 __fastcall LdrpProtectAndRelocateImage(PVOID BaseOfImage)
{
  bool v2; // di
  NTSTATUS v3; // eax
  LONGLONG v4; // rdx
  CHAR *v5; // r8
  NTSTATUS v6; // r9d
  int v7; // eax
  NTSTATUS v8; // ebx
  int v10; // edx
  NTSTATUS v11; // [rsp+20h] [rbp-48h]
  NTSTATUS v12; // [rsp+28h] [rbp-40h]
  PVOID v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v2 = 0;
  v13 = BaseOfImage;
  v3 = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, &v13, 0x10uLL, 0LL);
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
  else if ( (v14 & 1) != 0 )
  {
    v2 = (v14 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v7 = LdrpSetProtection(BaseOfImage);
    v8 = v7;
    if ( v7 < 0 )
    {
      v10 = 1945;
LABEL_13:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        v10,
        (__int64)"LdrpProtectAndRelocateImage",
        0,
        "Changing the protection of the executable at %p failed with status 0x%08lx\n",
        BaseOfImage,
        v7);
      goto LABEL_9;
    }
  }
  v8 = LdrRelocateImageWithBias(BaseOfImage, v4, v5, v6, v11, v12);
  if ( v8 >= 0 && !v2 )
  {
    v7 = LdrpSetProtection(BaseOfImage);
    v8 = v7;
    if ( v7 < 0 )
    {
      v10 = 1969;
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
    v8);
  return (unsigned int)v8;
}
