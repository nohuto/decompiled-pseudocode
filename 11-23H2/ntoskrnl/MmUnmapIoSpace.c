/*
 * XREFs of MmUnmapIoSpace @ 0x140335CD0
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x1403357EC (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140336DC8 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x140337070 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140337218 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037DC28 (HalpAcpiGetAllTablesWork.c)
 *     BgpFwLibraryEnable @ 0x140387E44 (BgpFwLibraryEnable.c)
 *     HalInitializeBios @ 0x14039F060 (HalInitializeBios.c)
 *     MiAllocateContiguousMemory @ 0x1403B9CD4 (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1403C3600 (MmFreeContiguousMemory.c)
 *     HalpMcaExtendedLogInitialize @ 0x1405030DC (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1405107E8 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x14051B548 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     WmipReadSMBiosSysInfo @ 0x1405FBA70 (WmipReadSMBiosSysInfo.c)
 *     WmipFirmwareTableHandler @ 0x1405FBD30 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x1406205A0 (MiHugePageOperation.c)
 *     WmipGetSMBiosTableData @ 0x1407AB75C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14085F998 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x1409411FC (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1409DF70C (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1409DF850 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1409DF948 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1409DFBC8 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1409DFE90 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140A084B0 (WheapClearPoison.c)
 *     MiMapNewPfns @ 0x140A2C910 (MiMapNewPfns.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A8B0B4 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A96184 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpFreeNvsBuffers @ 0x140A96E84 (HalpFreeNvsBuffers.c)
 *     PopGetHwConfigurationSignature @ 0x140AA2BCC (PopGetHwConfigurationSignature.c)
 *     PipInitComputerIds @ 0x140B3A22C (PipInitComputerIds.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B6072C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B61F18 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140B92168 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140B92254 (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpAuditQuerySlicAddresses @ 0x140B922CC (HalpAuditQuerySlicAddresses.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140271360 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279880 (MiFlushTbList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402848B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x1402857A0 (MiSwizzleInvalidPte.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1402CBB10 (MiInsertCachedPte.c)
 *     MiMappingHasIoTracker @ 0x140335DE4 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x140335E5C (MiZeroAndFlushPtes.c)
 *     MiWritePteShadow @ 0x14035734C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1403573AC (MiPteHasShadow.c)
 *     MiUnmapLargePages @ 0x1403D691C (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     MiRemovePteTracker @ 0x140661600 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // r15
  unsigned __int64 v3; // rbp
  SIZE_T v4; // rbx
  int HasIoTracker; // edi
  __int64 v6; // r9
  int v7; // r14d
  unsigned __int64 v8; // rsi
  SIZE_T v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // zf
  _QWORD v21[24]; // [rsp+30h] [rbp-108h] BYREF

  v2 = NumberOfBytes;
  v3 = (unsigned __int64)BaseAddress;
  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_140D1D1CC & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(v3);
  v7 = MI_IS_PHYSICAL_ADDRESS(v3);
  if ( HasIoTracker )
    MiZeroAndFlushPtes(v3, v4, 0LL, v6);
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v7 )
  {
    MiReleasePtes((__int64)&qword_140C69940, (__int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v4);
    return;
  }
  if ( (v2 & 0x1FFFFF) != 0 )
    goto LABEL_9;
  memset(v21, 0, 0xB8uLL);
  do
  {
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  v21[3] = 0LL;
  v9 = v2 >> 21;
  LODWORD(v21[1]) = 20;
  if ( HasIoTracker )
    goto LABEL_28;
  v10 = 0;
  v11 = MiSwizzleInvalidPte(768LL);
  if ( !(_DWORD)v9 )
    goto LABEL_27;
  v12 = (unsigned int)v9;
  v10 = v2 >> 21;
  do
  {
    v13 = v11;
    v14 = 0;
    if ( !MiPteInShadowRange(v8) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow(v16, v15, v17) )
    {
      v14 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_23;
      v18 = (v11 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_23;
      v18 = (v11 & 1) == 0;
    }
    if ( !v18 )
      v13 = v11 | 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v8 = v13;
    if ( v14 )
      MiWritePteShadow(v8, v13);
    MiInsertLargeTbFlushEntry((__int64)v21, 1, v8);
    v8 += 8LL;
    --v12;
  }
  while ( v12 );
  v3 = (unsigned __int64)BaseAddress;
  v2 = NumberOfBytes;
LABEL_27:
  v8 -= 8LL * v10;
LABEL_28:
  if ( !(unsigned int)MiInsertCachedPte((__int64)&qword_140C69940, v8, v9) )
  {
    MiFlushTbList((int *)v21);
LABEL_9:
    MiUnmapLargePages(v3, v2, 9LL);
  }
}
