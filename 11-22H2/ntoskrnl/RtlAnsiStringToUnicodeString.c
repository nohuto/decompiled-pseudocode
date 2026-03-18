/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x140774110
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140375044 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmpInitializeLoadOptions @ 0x1403B4514 (CmpInitializeLoadOptions.c)
 *     HvlDebuggerSupportInitialize @ 0x1403B5C64 (HvlDebuggerSupportInitialize.c)
 *     PopEmModuleAddressMatchCallback @ 0x140599B20 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14059EA80 (PopEmUpdateDeviceConstraintCallback.c)
 *     DifRtlAnsiStringToUnicodeStringWrapper @ 0x1405EAD90 (DifRtlAnsiStringToUnicodeStringWrapper.c)
 *     CmLogMcUpdateStatus @ 0x14061588C (CmLogMcUpdateStatus.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1406751B8 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1406AE4E0 (MiSnapThunk.c)
 *     ObCheckRefTraceProcess @ 0x1406BA268 (ObCheckRefTraceProcess.c)
 *     RtlInt64ToUnicodeString @ 0x140710E10 (RtlInt64ToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x1407A8B78 (PopAnsiStringToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1407CF660 (RtlIntegerToUnicodeString.c)
 *     RtlIsApiSetImplemented @ 0x1407D45E0 (RtlIsApiSetImplemented.c)
 *     CmpSetVersionData @ 0x14080E008 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080EE9C (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14080F2E8 (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1408100F0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     SepInitializationPhase1 @ 0x140823D08 (SepInitializationPhase1.c)
 *     CmpFindControlSet @ 0x1408268A0 (CmpFindControlSet.c)
 *     KsepStringAnsiToUnicode @ 0x140846420 (KsepStringAnsiToUnicode.c)
 *     PiGetDefaultMessageString @ 0x140849DD8 (PiGetDefaultMessageString.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408659D8 (IopCopyBootLogRegistryToFile.c)
 *     WmipQueryWmiRegInfo @ 0x140865C40 (WmipQueryWmiRegInfo.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873814 (CmpAddRemoveContainerToCLFSLog.c)
 *     PiUEventHandleVetoEvent @ 0x140882E18 (PiUEventHandleVetoEvent.c)
 *     IopInitializeBootLogging @ 0x140944EF8 (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x140964490 (PnpLogVetoInformation.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1409DF718 (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1409DFBEC (WmipGetSMBiosString.c)
 *     EtwWmitraceWorker @ 0x1409EBA9C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF6C0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x140A06EFC (ExpCovReadFriendlyName.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A10A70 (CmpCreateHwProfileFriendlyName.c)
 *     MiLogFailedDriverLoad @ 0x140A302F4 (MiLogFailedDriverLoad.c)
 *     AslStringAnsiToUnicode @ 0x140A53E14 (AslStringAnsiToUnicode.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 *     CmpInitializeDriverStores @ 0x140B3B144 (CmpInitializeDriverStores.c)
 *     WmipDriverEntry @ 0x140B3C550 (WmipDriverEntry.c)
 *     IopCreateArcNamesCd @ 0x140B3D2CC (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140B3D4F0 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140B3D704 (IopCreateArcNames.c)
 *     PipSmBiosGetString @ 0x140B3F1E0 (PipSmBiosGetString.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x140B55494 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B562B0 (EmpInfParseGetGuidFromName.c)
 *     IopGetBootDiskInformation @ 0x140B94A0C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140B94EE0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B95140 (PipCriticalDeviceWaitCallback.c)
 *     CmpSetSystemBiosInformation @ 0x140B9986C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B99C0C (CmpSetVideoBiosInformation.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140316B1C (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407741E0 (RtlxOemStringToUnicodeSize.c)
 *     RtlMultiByteToUnicodeN @ 0x1407742A0 (RtlMultiByteToUnicodeN.c)
 *     ExFreePool @ 0x140AAFCC0 (ExFreePool.c)
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
