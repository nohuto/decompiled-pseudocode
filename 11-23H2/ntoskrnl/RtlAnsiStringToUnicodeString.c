/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x140773DF0
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140374B94 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmpInitializeLoadOptions @ 0x1403B4D84 (CmpInitializeLoadOptions.c)
 *     HvlDebuggerSupportInitialize @ 0x1403B64D4 (HvlDebuggerSupportInitialize.c)
 *     PopEmModuleAddressMatchCallback @ 0x140599F80 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059EEE0 (PopEmUpdateDeviceConstraintCallback.c)
 *     DifRtlAnsiStringToUnicodeStringWrapper @ 0x1405EB270 (DifRtlAnsiStringToUnicodeStringWrapper.c)
 *     CmLogMcUpdateStatus @ 0x140615D6C (CmLogMcUpdateStatus.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140675698 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1406AE510 (MiSnapThunk.c)
 *     ObCheckRefTraceProcess @ 0x1406BA298 (ObCheckRefTraceProcess.c)
 *     RtlInt64ToUnicodeString @ 0x140710F70 (RtlInt64ToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x1407A87B8 (PopAnsiStringToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1407CF3D0 (RtlIntegerToUnicodeString.c)
 *     RtlIsApiSetImplemented @ 0x1407D4330 (RtlIsApiSetImplemented.c)
 *     CmpSetVersionData @ 0x14080BD58 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080CBEC (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14080D038 (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14080DE40 (RtlCreateUnicodeStringFromAsciiz.c)
 *     SepInitializationPhase1 @ 0x140822D40 (SepInitializationPhase1.c)
 *     CmpFindControlSet @ 0x140826040 (CmpFindControlSet.c)
 *     KsepStringAnsiToUnicode @ 0x140844990 (KsepStringAnsiToUnicode.c)
 *     PiGetDefaultMessageString @ 0x140848E70 (PiGetDefaultMessageString.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408657F8 (IopCopyBootLogRegistryToFile.c)
 *     WmipQueryWmiRegInfo @ 0x1408659B0 (WmipQueryWmiRegInfo.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873584 (CmpAddRemoveContainerToCLFSLog.c)
 *     PiUEventHandleVetoEvent @ 0x140882B88 (PiUEventHandleVetoEvent.c)
 *     IopInitializeBootLogging @ 0x140945048 (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x1409645E0 (PnpLogVetoInformation.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DF868 (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1409DFD3C (WmipGetSMBiosString.c)
 *     EtwWmitraceWorker @ 0x1409EBC7C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF8A0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x140A070DC (ExpCovReadFriendlyName.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A10C70 (CmpCreateHwProfileFriendlyName.c)
 *     MiLogFailedDriverLoad @ 0x140A30534 (MiLogFailedDriverLoad.c)
 *     AslStringAnsiToUnicode @ 0x140A54054 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x140AAAFC0 (ExpSystemErrorHandler2.c)
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     WmipDriverEntry @ 0x140B38E50 (WmipDriverEntry.c)
 *     IopCreateArcNamesCd @ 0x140B39BCC (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140B39DF0 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140B3A004 (IopCreateArcNames.c)
 *     PipSmBiosGetString @ 0x140B3BAE0 (PipSmBiosGetString.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x140B55B34 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B56950 (EmpInfParseGetGuidFromName.c)
 *     IopGetBootDiskInformation @ 0x140B93A0C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140B93EE0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B94140 (PipCriticalDeviceWaitCallback.c)
 *     CmpSetSystemBiosInformation @ 0x140B9886C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B98C0C (CmpSetVideoBiosInformation.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140316F8C (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x140773EC0 (RtlxOemStringToUnicodeSize.c)
 *     RtlMultiByteToUnicodeN @ 0x140773F80 (RtlMultiByteToUnicodeN.c)
 *     ExFreePool @ 0x140AAECC0 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r15
  wchar_t **p_Buffer; // rdi
  NTSTATUS result; // eax
  int v10; // ebx
  ULONG v11; // ecx
  ULONG BytesInUnicodeString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxOemStringToUnicodeSize(SourceString);
  BytesInUnicodeString = v6;
  if ( v6 > 0xFFFE )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateUnicodeStringBuffer(
             AllocateDestinationString,
             v6,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v10 = RtlMultiByteToUnicodeN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInUnicodeString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v10 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePool(*p_Buffer);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    else
    {
      v11 = BytesInUnicodeString;
      DestinationString->Length = BytesInUnicodeString;
      (*p_Buffer)[(unsigned __int64)v11 >> 1] = 0;
    }
    return v10;
  }
  return result;
}
