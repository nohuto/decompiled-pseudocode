/*
 * XREFs of MmUnmapIoSpace @ 0x140335B30
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x14033564C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140336C28 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x140336ED0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140337078 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037E278 (HalpAcpiGetAllTablesWork.c)
 *     BgpFwLibraryEnable @ 0x140387044 (BgpFwLibraryEnable.c)
 *     HalInitializeBios @ 0x14039ED70 (HalInitializeBios.c)
 *     MiAllocateContiguousMemory @ 0x1403B9674 (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1403C2FA0 (MmFreeContiguousMemory.c)
 *     HalpMcaExtendedLogInitialize @ 0x1405031EC (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1405108A8 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x14051B608 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     WmipReadSMBiosSysInfo @ 0x1405FBB00 (WmipReadSMBiosSysInfo.c)
 *     WmipFirmwareTableHandler @ 0x1405FBDC0 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 *     WmipGetSMBiosTableData @ 0x1407ABD0C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14085FAF8 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x1409412AC (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1409DF7BC (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1409DF900 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1409DF9F8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1409DFC78 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1409DFF40 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140A08560 (WheapClearPoison.c)
 *     MiMapNewPfns @ 0x140A2C980 (MiMapNewPfns.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A8B914 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A96244 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpFreeNvsBuffers @ 0x140A96F44 (HalpFreeNvsBuffers.c)
 *     PopGetHwConfigurationSignature @ 0x140AA2C8C (PopGetHwConfigurationSignature.c)
 *     PipInitComputerIds @ 0x140B3D92C (PipInitComputerIds.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B6429C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B65A88 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140B93168 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140B93254 (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpAuditQuerySlicAddresses @ 0x140B932CC (HalpAuditQuerySlicAddresses.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C4C (MiInsertLargeTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284790 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1402CBB10 (MiInsertCachedPte.c)
 *     MiMappingHasIoTracker @ 0x140335C44 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x140335CBC (MiZeroAndFlushPtes.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     MiUnmapLargePages @ 0x1403D62BC (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiRemovePteTracker @ 0x140661670 (MiRemovePteTracker.c)
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
    MiReleasePtes((__int64)&qword_140C69A40, (__int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v4);
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
      if ( HIBYTE(word_140C66DFC) )
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
  if ( !(unsigned int)MiInsertCachedPte((__int64)&qword_140C69A40, v8, v9) )
  {
    MiFlushTbList((int *)v21);
LABEL_9:
    MiUnmapLargePages(v3, v2, 9LL);
  }
}
