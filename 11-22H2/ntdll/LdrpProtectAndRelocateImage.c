/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x1800DCCF4
 * Callers:
 *     LdrpRelocateImage @ 0x180085A68 (LdrpRelocateImage.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpLoadCustomNtdll @ 0x1800DED6C (LdrpLoadCustomNtdll.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 *     LdrpSetProtection @ 0x1800DCE7C (LdrpSetProtection.c)
 *     LdrpGenericExceptionFilter @ 0x1800E0678 (LdrpGenericExceptionFilter.c)
 *     LdrRelocateImageWithBias @ 0x1800EE638 (LdrRelocateImageWithBias.c)
 */

__int64 __fastcall LdrpProtectAndRelocateImage(const void *a1)
{
  bool v2; // di
  int VirtualMemory; // eax
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  _BYTE v9[3]; // [rsp+50h] [rbp-18h]

  v2 = 0;
  VirtualMemory = ZwQueryVirtualMemory();
  if ( VirtualMemory < 0 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1980LL,
      (__int64)"LdrpProtectAndRelocateImage",
      0LL,
      "Querying large page info failed with status 0x%08lx\n",
      VirtualMemory);
  }
  else if ( (v9[0] & 1) != 0 )
  {
    v2 = (*(_QWORD *)v9 & 0x800000LL) != 0;
  }
  if ( !v2 )
  {
    v4 = LdrpSetProtection(a1, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1990LL;
LABEL_12:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        v6,
        (__int64)"LdrpProtectAndRelocateImage",
        0LL,
        "Changing the protection of the executable at %p failed with status 0x%08lx\n",
        a1,
        v4);
      goto LABEL_13;
    }
  }
  v5 = LdrRelocateImageWithBias(a1);
  if ( v5 >= 0 && !v2 )
  {
    LOBYTE(v7) = 1;
    v4 = LdrpSetProtection(a1, v7);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 2014LL;
      goto LABEL_12;
    }
  }
LABEL_13:
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    2054LL,
    (__int64)"LdrpProtectAndRelocateImage",
    4LL,
    "Status: 0x%08lx\n",
    v5);
  return (unsigned int)v5;
}
