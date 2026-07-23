/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x1800DC6A4
 * Callers:
 *     LdrpRelocateImage @ 0x180086268 (LdrpRelocateImage.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpLoadCustomNtdll @ 0x1800E0098 (LdrpLoadCustomNtdll.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     LdrpSetProtection @ 0x1800DC82C (LdrpSetProtection.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 *     LdrRelocateImageWithBias @ 0x1800EFA48 (LdrRelocateImageWithBias.c)
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
  int v9; // edx
  NTSTATUS Conflict; // [rsp+20h] [rbp-48h]
  NTSTATUS Invalid; // [rsp+28h] [rbp-40h]
  PVOID v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v2 = 0;
  v13 = BaseOfImage;
  v3 = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, &v13, 0x10uLL, 0LL);
  if ( v3 < 0 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1980,
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
      v9 = 1990;
LABEL_12:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        v9,
        (__int64)"LdrpProtectAndRelocateImage",
        0,
        "Changing the protection of the executable at %p failed with status 0x%08lx\n",
        BaseOfImage,
        v7);
      goto LABEL_13;
    }
  }
  v8 = LdrRelocateImageWithBias(BaseOfImage, v4, v5, v6, Conflict, Invalid);
  if ( v8 >= 0 && !v2 )
  {
    v7 = LdrpSetProtection(BaseOfImage);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 2014;
      goto LABEL_12;
    }
  }
LABEL_13:
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    2054,
    (__int64)"LdrpProtectAndRelocateImage",
    4u,
    "Status: 0x%08lx\n",
    v8);
  return (unsigned int)v8;
}
