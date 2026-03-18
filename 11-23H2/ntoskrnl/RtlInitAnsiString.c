/*
 * XREFs of RtlInitAnsiString @ 0x1402F6C50
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403749F4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x14038B294 (IopCheckDiskName.c)
 *     HalMatchAcpiOemId @ 0x140398D90 (HalMatchAcpiOemId.c)
 *     CmpInitializeLoadOptions @ 0x1403B4BA4 (CmpInitializeLoadOptions.c)
 *     PopEmModuleAddressMatchCallback @ 0x140599A90 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059E9F0 (PopEmUpdateDeviceConstraintCallback.c)
 *     RtlInitUTF8String @ 0x1405A7660 (RtlInitUTF8String.c)
 *     WheaGetCurrentProcessName @ 0x140611C40 (WheaGetCurrentProcessName.c)
 *     CmLogMcUpdateStatus @ 0x14061581C (CmLogMcUpdateStatus.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140675148 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     ObCheckRefTraceProcess @ 0x1406BA268 (ObCheckRefTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140754528 (EtwpBuildProcessEvent.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A7D30 (PopPowerRequestStatsGetIdForRequest.c)
 *     RtlIsApiSetImplemented @ 0x1407D4060 (RtlIsApiSetImplemented.c)
 *     CmpSetVersionData @ 0x14080BA88 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080C91C (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14080CD68 (CmpInitializeRegistryNode.c)
 *     SepInitializationPhase1 @ 0x140822A40 (SepInitializationPhase1.c)
 *     PiGetDefaultMessageString @ 0x140848B70 (PiGetDefaultMessageString.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408655B8 (IopCopyBootLogRegistryToFile.c)
 *     WmipQueryWmiRegInfo @ 0x140865770 (WmipQueryWmiRegInfo.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873344 (CmpAddRemoveContainerToCLFSLog.c)
 *     PiUEventHandleVetoEvent @ 0x140882948 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x1409643E0 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x1409775A4 (KsepGetModuleInfoByName.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DF668 (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1409DFB3C (WmipGetSMBiosString.c)
 *     EtwWmitraceWorker @ 0x1409EB9EC (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF610 (NtQuerySystemEnvironmentValue.c)
 *     MiLogFailedDriverLoad @ 0x140A30284 (MiLogFailedDriverLoad.c)
 *     AslStringAnsiToUnicode @ 0x140A53DA4 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB150 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     WmipDriverEntry @ 0x140B38E50 (WmipDriverEntry.c)
 *     IopCreateArcNamesCd @ 0x140B39BCC (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140B39DF0 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140B3A004 (IopCreateArcNames.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     IopGetBootDiskInformationLite @ 0x140B55908 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x140B55B34 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B56950 (EmpInfParseGetGuidFromName.c)
 *     IopGetBootDiskInformation @ 0x140B93A0C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140B93EE0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B94140 (PipCriticalDeviceWaitCallback.c)
 *     CmpSetSystemBiosInformation @ 0x140B9886C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B98C0C (CmpSetVideoBiosInformation.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
