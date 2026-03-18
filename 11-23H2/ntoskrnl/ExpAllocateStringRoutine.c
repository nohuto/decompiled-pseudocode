/*
 * XREFs of ExpAllocateStringRoutine @ 0x1407C6F90
 * Callers:
 *     AllocateOrValidateCharStringBuffer @ 0x1402F768C (AllocateOrValidateCharStringBuffer.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140316CFC (AllocateOrValidateUnicodeStringBuffer.c)
 *     PnpDuplicateUnicodeString @ 0x1403CDE80 (PnpDuplicateUnicodeString.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x140411928 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140411B48 (RtlpGetPersistedRegistryLocation.c)
 *     CmpQueryNameString @ 0x140684F94 (CmpQueryNameString.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758680 (RtlUnicodeStringToAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1407B6FC0 (RtlDuplicateUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1407D1AA8 (RtlpQueryRegistryDirect.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1407EEFA8 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FAAD0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x1407FB060 (RtlCreateUnicodeString.c)
 *     PiDrvDbSetupNodeHive @ 0x140811978 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140811BD8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbCreateNode @ 0x140811CDC (PiDrvDbCreateNode.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140812D08 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140813120 (PiDrvDbQuerySystemPathWin32.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A5F0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086CC64 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879C70 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildIndirectString @ 0x14087B7D4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BA90 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14087C92C (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgAppendMultiSz @ 0x14095C634 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14096263C (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDrvDbMountNode @ 0x140970050 (PiDrvDbMountNode.c)
 *     PiDrvDbQueryHiveFileName @ 0x140970B64 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971098 (PiDrvDbResolveSystemFilePath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCBCC (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDCF8 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409C2330 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x1409C2440 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpAllocateStringRoutine(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1735554131LL);
}
