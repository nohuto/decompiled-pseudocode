/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1403C4AEC
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14067E670 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140811BD8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A5F0 (PiCreateDriverSwDeviceCallback.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140843E94 (SshpGenerateDeviceFriendlyName.c)
 *     CmSetAcpiHwProfile @ 0x14084A314 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x14084A9B4 (CmpOpenDevicesControlSet.c)
 *     PiDevCfgConfigureDevice @ 0x14087A734 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x14087B7D4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BA90 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14087C92C (PiDevCfgBuildDriverNodeStrongName.c)
 *     PopGetCallerContextFromBuffer @ 0x14098098C (PopGetCallerContextFromBuffer.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099A39C (PopIdleWakeGenerateDescriptionString.c)
 *     PopIdleWakeSystemImageCallback @ 0x14099B320 (PopIdleWakeSystemImageCallback.c)
 *     ExProcessCounterSetCallback @ 0x1409F5DD0 (ExProcessCounterSetCallback.c)
 *     CmpSaveBootControlSet @ 0x140A0A518 (CmpSaveBootControlSet.c)
 *     IopStoreBootDriveLetter @ 0x140B39740 (IopStoreBootDriveLetter.c)
 *     CmpCreateHardwareProfiles @ 0x140B6660C (CmpCreateHardwareProfiles.c)
 *     CmpCreateControlSet @ 0x140B70268 (CmpCreateControlSet.c)
 *     CmpAddAliasEntry @ 0x140B97E98 (CmpAddAliasEntry.c)
 *     CmpCreateControlSetOverride @ 0x140B980C4 (CmpCreateControlSetOverride.c)
 * Callees:
 *     RtlWideCharArrayVPrintfWorker @ 0x14040FB88 (RtlWideCharArrayVPrintfWorker.c)
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
