/*
 * XREFs of PopBuildMemoryImageHeader @ 0x140AA1A28
 * Callers:
 *     PopEndMirroring @ 0x140AA2690 (PopEndMirroring.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14028C170 (MmGetPhysicalAddress.c)
 *     MmGetHighestPhysicalPage @ 0x1402F8BC8 (MmGetHighestPhysicalPage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 *     PopAllocatePages @ 0x140AA18B8 (PopAllocatePages.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140AA1988 (PopBootLoaderTraceCopyPfnList.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140AA1ECC (PopCopyFirmwareRuntimeInformationPfnList.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // r13
  unsigned __int64 v13; // rsi
  PVOID Pages; // rax
  PVOID v15; // rbp

  if ( a2 )
    return *((unsigned int *)MemoryMap + 47);
  v3 = MemoryMap[25];
  PoSetHiberRange(MemoryMap, 0x8000u, (PVOID)v3, 0x448uLL, 0x676D694Du);
  memset((void *)v3, 0, 0x1000uLL);
  *(_DWORD *)(v3 + 24) = 4096;
  *(_DWORD *)(v3 + 12) = 1096;
  *(_QWORD *)(v3 + 16) = (unsigned __int64)MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
  *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(v3 + 64) = qword_140C3CF90;
  *(_DWORD *)(v3 + 60) = 10;
  *(_QWORD *)(v3 + 48) = KeFeatureBits;
  *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
  *(_BYTE *)(v3 + 56) = *((_BYTE *)MemoryMap + 1);
  *(_BYTE *)(v3 + 57) = -54;
  *(_BYTE *)(v3 + 972) = byte_140C3CFA0;
  *(_QWORD *)(v3 + 1024) = MmGetHighestPhysicalPage(0);
  *(_BYTE *)(v3 + 973) = PopSecureLaunched;
  *(_BYTE *)(v3 + 974) = *((_BYTE *)MemoryMap + 453);
  *(_BYTE *)(v3 + 975) = PopFasr;
  *(_BYTE *)(v3 + 1091) = PopSuppressResumePrompt != v4;
  v5 = MemoryMap[15];
  if ( v5 )
    *(_DWORD *)(v3 + 72) = *(_DWORD *)(v5 + 40) >> 12;
  v6 = MemoryMap[39];
  if ( v6 )
  {
    v7 = (__int64 *)(v3 + 1032);
    v8 = 3LL;
    *(_QWORD *)(v3 + 1032) = v6;
    v9 = (_QWORD *)(v3 + 1040);
    do
    {
      v10 = *v7++;
      *v9++ = v10 + 1;
      --v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(v3 + 1016) = 0LL;
  PopBootLoaderTraceCopyPfnList(MemoryMap, v3);
  PopCopyFirmwareRuntimeInformationPfnList(MemoryMap);
  v11 = (_QWORD *)MemoryMap[8];
  do
  {
    if ( v11 == MemoryMap + 8 )
    {
      *(_DWORD *)(v3 + 1064) = *((_DWORD *)MemoryMap + 112);
      *(_BYTE *)(v3 + 1090) = PopHiberSkipMemoryMapValidation;
      return *((unsigned int *)MemoryMap + 47);
    }
    v12 = v11;
    v11 = (_QWORD *)*v11;
    v13 = (unsigned __int64)(unsigned int)((*((_DWORD *)v12 + 8) - *((_DWORD *)v12 + 6)) << 12) >> 12;
    Pages = PopAllocatePages(v13);
    v15 = Pages;
    if ( Pages )
      PoSetHiberRange(MemoryMap, 0x8000u, Pages, v13 << 12, 0x436C6F6Eu);
    else
      *((_DWORD *)MemoryMap + 47) = -1073741670;
    v12[5] = v15;
  }
  while ( v15 );
  return 3221225626LL;
}
