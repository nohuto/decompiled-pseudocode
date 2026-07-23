/*
 * XREFs of MiMapSystemImageWithLargePage @ 0x140A49E14
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140B46AA8 (MiHandleBootImage.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14020EBA0 (MiIsRetpolineEnabled.c)
 *     MiIsImportOptimizationEnabled @ 0x14020EBB8 (MiIsImportOptimizationEnabled.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x1403760F4 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiGetPageTablesForLargeMap @ 0x14038E7D8 (MiGetPageTablesForLargeMap.c)
 *     MiMapWithLargePages @ 0x14038E8F4 (MiMapWithLargePages.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MiFreeContiguousPages @ 0x1403C3BBC (MiFreeContiguousPages.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiPageToNode @ 0x140617D40 (MiPageToNode.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061DDC8 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140641B3C (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x140669C08 (MiRoundUpToPowerOf2SizeT.c)
 *     RtlPerformRetpolineRelocationsOnImage @ 0x14067AB3C (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiChargeSystemImageCommitment @ 0x140695FD0 (MiChargeSystemImageCommitment.c)
 *     MiReservePrivilegedPtes @ 0x140696B28 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x1406971C4 (MiReleasePrivilegedPtes.c)
 *     LdrRelocateImageWithBias @ 0x1409C21A4 (LdrRelocateImageWithBias.c)
 *     MiUnmapLargeDriver @ 0x140A4A1C8 (MiUnmapLargeDriver.c)
 */

char *__fastcall MiMapSystemImageWithLargePage(__int64 a1, unsigned int a2, const void *a3)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 i; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  int v12; // eax
  unsigned __int64 PageTablesForLargeMap; // rax
  char *v14; // rbx
  int v15; // edx
  __int64 v16; // rsi
  unsigned int v17; // r12d
  char *v18; // r13
  PIMAGE_NT_HEADERS v19; // rax
  CHAR *v20; // r8
  NTSTATUS v21; // r9d
  PIMAGE_NT_HEADERS v22; // rsi
  unsigned int VirtualAddress; // eax
  LONGLONG v24; // rdx
  bool IsRetpolineEnabled; // al
  int v26; // eax
  NTSTATUS v27; // eax
  unsigned __int64 PteAddress; // rax
  unsigned int inited; // eax
  NTSTATUS Conflict; // [rsp+20h] [rbp-E8h]
  NTSTATUS Invalid; // [rsp+28h] [rbp-E0h]
  char *AnyMultiplexedVm; // [rsp+78h] [rbp-90h]
  _BYTE v33[48]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-48h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  ULONG_PTR v37; // [rsp+128h] [rbp+20h] BYREF

  v4 = a2;
  v37 = 0LL;
  memset(v33, 0, sizeof(v33));
  v34 = 0LL;
  if ( a1 )
  {
    v6 = MiSectionControlArea(a1);
    for ( i = v6 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)(i + 32) & 0x3E) == 0 )
        return 0LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v35 = v4;
  v8 = (v4 + (unsigned int)dword_140C65844 + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  v9 = MiRoundUpToPowerOf2SizeT(v8);
  if ( (int)MiFindContiguousPagesEx(
              (__int64)MiSystemPartition,
              512LL,
              qword_140C65BA0,
              v9,
              v10,
              v9,
              1u,
              0x80000000,
              0x80000000,
              0x100000,
              v10,
              v10,
              &v37) < 0 )
    return 0LL;
  if ( v9 > v8 )
    MiFreeContiguousPages(v8 + v37, v9 - v8);
  v12 = MiPageToNode(v37);
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v8, 12, 1LL, v12 + 1);
  v14 = (char *)PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
    goto LABEL_13;
  MiGetPteAddress(PageTablesForLargeMap);
  if ( (int)MiReservePrivilegedPtes() < 0 )
  {
    MiUnmapLargeDriver(v14, v4);
LABEL_13:
    MiFreeContiguousPages(v37, v8);
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiMapWithLargePages((__int64)AnyMultiplexedVm, (unsigned __int64)v14, v37, v8, v15, 6, v15);
  v16 = (unsigned int)((_DWORD)v4 << 12);
  v17 = v16;
  memmove(v14, a3, (unsigned int)v16);
  v18 = &v14[(unsigned int)v16];
  memset(v18, 0, (unsigned int)(dword_140C65844 << 12));
  if ( MiIsRetpolineEnabled() )
    memmove(&v14[v16], Base, (unsigned int)(dword_140C65880 << 12));
  v19 = RtlImageNtHeader(v14);
  v22 = v19;
  if ( v19->OptionalHeader.NumberOfRvaAndSizes <= 5
    || (VirtualAddress = v19->OptionalHeader.DataDirectory[5].VirtualAddress) != 0
    && ((v24 = VirtualAddress + v22->OptionalHeader.DataDirectory[5].Size, (unsigned int)v24 > v17)
     || LdrRelocateImageWithBias(v14, v24, v20, v21, Conflict, Invalid) < 0
     || (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled())
     && (IsRetpolineEnabled = MiIsRetpolineEnabled(),
         v26 = RtlPerformRetpolineRelocationsOnImage(
                 v14,
                 (__int64)v14,
                 v17,
                 (__int64)v18,
                 (__int64)Base,
                 IsRetpolineEnabled),
         (int)(v26 + 0x80000000) >= 0)
     && v26 != -1073741637
     || (v27 = RtlApplyFunctionOverrideFixupsToImage(v14, v22->OptionalHeader.SizeOfImage),
         ((v27 + 0x80000000) & 0x80000000) == 0)
     && v27 != -1073741637) )
  {
    MiReleasePrivilegedPtes();
    MiUnmapLargeDriver(v14, v35);
    return 0LL;
  }
  v22->OptionalHeader.ImageBase = (unsigned __int64)v14;
  if ( a1 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)a3);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v6, PteAddress, v35, 1, (struct _KTHREAD *)v33);
    MiChargeSystemImageCommitment(a1);
  }
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)v14, 0LL, inited, v8);
  }
  return v14;
}
