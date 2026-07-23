/*
 * XREFs of MmMapIoSpaceEx @ 0x140335C40
 * Callers:
 *     HalpCheckAndReportGhes @ 0x14033575C (HalpCheckAndReportGhes.c)
 *     MmMapIoSpace @ 0x1403357E0 (MmMapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x140335A7C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140337058 (HalpAcpiGetRsdt.c)
 *     HvlEnlightenProcessor @ 0x140382A70 (HvlEnlightenProcessor.c)
 *     BgpFwLibraryEnable @ 0x140388024 (BgpFwLibraryEnable.c)
 *     HvlPhase1Initialize @ 0x140388284 (HvlPhase1Initialize.c)
 *     HalInitializeBios @ 0x14039F240 (HalInitializeBios.c)
 *     HalpMcaExtendedLogInitialize @ 0x14050362C (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140510D38 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpSignalRAS @ 0x1405191DC (HalpSignalRAS.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x14051BA98 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140541468 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1405486B4 (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14054F520 (BgkNotifyDisplayOwnershipLost.c)
 *     WmipFirmwareTableHandler @ 0x1405FC2A0 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x140620AF0 (MiHugePageOperation.c)
 *     BgpFwMapFrameBuffer @ 0x140672240 (BgpFwMapFrameBuffer.c)
 *     IpmiHwKcsInit @ 0x140677DEC (IpmiHwKcsInit.c)
 *     InbvPortInitialize @ 0x140679B4C (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x1407AB94C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14085FBD8 (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x1409DF90C (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1409DFA50 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1409DFB48 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1409E0090 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140A08760 (WheapClearPoison.c)
 *     MiMapNewPfns @ 0x140A2CBC0 (MiMapNewPfns.c)
 *     HalpInitializeGenericErrorSource @ 0x140A8AE9C (HalpInitializeGenericErrorSource.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A8B0B4 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A95FF4 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpMapNvsArea @ 0x140A96D70 (HalpMapNvsArea.c)
 *     PopGetHwConfigurationSignature @ 0x140AA2A3C (PopGetHwConfigurationSignature.c)
 *     VerifierMmMapIoSpace @ 0x140AE3010 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140AE3140 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x140B3A22C (PipInitComputerIds.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B6072C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B61F18 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140B92168 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140B92254 (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpAuditQuerySlicAddresses @ 0x140B922CC (HalpAuditQuerySlicAddresses.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140276C10 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x140335C88 (MiMapContiguousMemory.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int ProtectionMask; // eax
  int v4; // r10d
  int v5; // r11d

  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, v5, ProtectionMask, 0);
}
