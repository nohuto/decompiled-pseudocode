/*
 * XREFs of RtlInitAnsiString @ 0x1402F6EE0
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140374B94 (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x14038B474 (IopCheckDiskName.c)
 *     HalMatchAcpiOemId @ 0x140398F70 (HalMatchAcpiOemId.c)
 *     CmpInitializeLoadOptions @ 0x1403B4D84 (CmpInitializeLoadOptions.c)
 *     PopEmModuleAddressMatchCallback @ 0x140599F80 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059EEE0 (PopEmUpdateDeviceConstraintCallback.c)
 *     RtlInitUTF8String @ 0x1405A7BD0 (RtlInitUTF8String.c)
 *     WheaGetCurrentProcessName @ 0x140612190 (WheaGetCurrentProcessName.c)
 *     CmLogMcUpdateStatus @ 0x140615D6C (CmLogMcUpdateStatus.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140675698 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     ObCheckRefTraceProcess @ 0x1406BA298 (ObCheckRefTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140754718 (EtwpBuildProcessEvent.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A7F20 (PopPowerRequestStatsGetIdForRequest.c)
 *     RtlIsApiSetImplemented @ 0x1407D4330 (RtlIsApiSetImplemented.c)
 *     CmpSetVersionData @ 0x14080BD58 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080CBEC (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14080D038 (CmpInitializeRegistryNode.c)
 *     SepInitializationPhase1 @ 0x140822D40 (SepInitializationPhase1.c)
 *     PiGetDefaultMessageString @ 0x140848E70 (PiGetDefaultMessageString.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408657F8 (IopCopyBootLogRegistryToFile.c)
 *     WmipQueryWmiRegInfo @ 0x1408659B0 (WmipQueryWmiRegInfo.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873584 (CmpAddRemoveContainerToCLFSLog.c)
 *     PiUEventHandleVetoEvent @ 0x140882B88 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x1409645E0 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x1409777A4 (KsepGetModuleInfoByName.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DF868 (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1409DFD3C (WmipGetSMBiosString.c)
 *     EtwWmitraceWorker @ 0x1409EBC7C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF8A0 (NtQuerySystemEnvironmentValue.c)
 *     MiLogFailedDriverLoad @ 0x140A30534 (MiLogFailedDriverLoad.c)
 *     AslStringAnsiToUnicode @ 0x140A54054 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x140AAAFC0 (ExpSystemErrorHandler2.c)
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
