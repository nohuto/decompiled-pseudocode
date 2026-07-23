/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1403C4CCC
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14067E670 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140811EA8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A8C0 (PiCreateDriverSwDeviceCallback.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140844194 (SshpGenerateDeviceFriendlyName.c)
 *     CmSetAcpiHwProfile @ 0x14084A614 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x14084ACB4 (CmpOpenDevicesControlSet.c)
 *     PiDevCfgConfigureDevice @ 0x14087A974 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x14087BA14 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BCD0 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14087CB6C (PiDevCfgBuildDriverNodeStrongName.c)
 *     PopGetCallerContextFromBuffer @ 0x140980B8C (PopGetCallerContextFromBuffer.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099A59C (PopIdleWakeGenerateDescriptionString.c)
 *     PopIdleWakeSystemImageCallback @ 0x14099B520 (PopIdleWakeSystemImageCallback.c)
 *     ExProcessCounterSetCallback @ 0x1409F6060 (ExProcessCounterSetCallback.c)
 *     CmpSaveBootControlSet @ 0x140A0A7C8 (CmpSaveBootControlSet.c)
 *     IopStoreBootDriveLetter @ 0x140B39740 (IopStoreBootDriveLetter.c)
 *     CmpCreateHardwareProfiles @ 0x140B6660C (CmpCreateHardwareProfiles.c)
 *     CmpCreateControlSet @ 0x140B70268 (CmpCreateControlSet.c)
 *     CmpAddAliasEntry @ 0x140B97E98 (CmpAddAliasEntry.c)
 *     CmpCreateControlSetOverride @ 0x140B980C4 (CmpCreateControlSetOverride.c)
 * Callees:
 *     RtlWideCharArrayVPrintfWorker @ 0x14040FD68 (RtlWideCharArrayVPrintfWorker.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rcx
  size_t v7; // rdx
  NTSTATUS result; // eax
  size_t pcchNewDestLength[3]; // [rsp+30h] [rbp-18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, pszFormat);
  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  Buffer = DestinationString->Buffer;
  v7 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  pcchNewDestLength[0] = 0LL;
  result = RtlWideCharArrayVPrintfWorker(Buffer, v7, pcchNewDestLength, pszFormat, va);
  DestinationString->Length = 2 * LOWORD(pcchNewDestLength[0]);
  return result;
}
