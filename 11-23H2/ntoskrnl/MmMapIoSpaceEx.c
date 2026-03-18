/*
 * XREFs of MmMapIoSpaceEx @ 0x1403359B0
 * Callers:
 *     HalpCheckAndReportGhes @ 0x1403354CC (HalpCheckAndReportGhes.c)
 *     MmMapIoSpace @ 0x140335550 (MmMapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x1403357EC (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140336DC8 (HalpAcpiGetRsdt.c)
 *     HvlEnlightenProcessor @ 0x1403828D0 (HvlEnlightenProcessor.c)
 *     BgpFwLibraryEnable @ 0x140387E44 (BgpFwLibraryEnable.c)
 *     HvlPhase1Initialize @ 0x1403880A4 (HvlPhase1Initialize.c)
 *     HalInitializeBios @ 0x14039F060 (HalInitializeBios.c)
 *     HalpMcaExtendedLogInitialize @ 0x1405030DC (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1405107E8 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpSignalRAS @ 0x140518C8C (HalpSignalRAS.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x14051B548 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140540DA8 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x140547FF4 (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14054EE60 (BgkNotifyDisplayOwnershipLost.c)
 *     WmipFirmwareTableHandler @ 0x1405FBD30 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x1406205A0 (MiHugePageOperation.c)
 *     BgpFwMapFrameBuffer @ 0x140671CF0 (BgpFwMapFrameBuffer.c)
 *     IpmiHwKcsInit @ 0x14067789C (IpmiHwKcsInit.c)
 *     InbvPortInitialize @ 0x1406795FC (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x1407AB75C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14085F998 (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x1409DF70C (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1409DF850 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1409DF948 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1409DFE90 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140A084B0 (WheapClearPoison.c)
 *     MiMapNewPfns @ 0x140A2C910 (MiMapNewPfns.c)
 *     HalpInitializeGenericErrorSource @ 0x140A8AE9C (HalpInitializeGenericErrorSource.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A8B0B4 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A96184 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpMapNvsArea @ 0x140A96F00 (HalpMapNvsArea.c)
 *     PopGetHwConfigurationSignature @ 0x140AA2BCC (PopGetHwConfigurationSignature.c)
 *     VerifierMmMapIoSpace @ 0x140AE3020 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140AE3150 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x140B3A22C (PipInitComputerIds.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B6072C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B61F18 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140B92168 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140B92254 (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpAuditQuerySlicAddresses @ 0x140B922CC (HalpAuditQuerySlicAddresses.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140276980 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x1403359F8 (MiMapContiguousMemory.c)
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
