/*
 * XREFs of ExpAllocateStringRoutine @ 0x1407C7260
 * Callers:
 *     AllocateOrValidateCharStringBuffer @ 0x1402F791C (AllocateOrValidateCharStringBuffer.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140316F8C (AllocateOrValidateUnicodeStringBuffer.c)
 *     PnpDuplicateUnicodeString @ 0x1403CE060 (PnpDuplicateUnicodeString.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x140411B68 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140411D88 (RtlpGetPersistedRegistryLocation.c)
 *     CmpQueryNameString @ 0x140684F94 (CmpQueryNameString.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758870 (RtlUnicodeStringToAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1407B72A0 (RtlDuplicateUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1407D1D78 (RtlpQueryRegistryDirect.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1407EF278 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FADA0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x1407FB330 (RtlCreateUnicodeString.c)
 *     PiDrvDbSetupNodeHive @ 0x140811C48 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140811EA8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbCreateNode @ 0x140811FAC (PiDrvDbCreateNode.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140812FD8 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408133F0 (PiDrvDbQuerySystemPathWin32.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A8C0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086CEA4 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879EB0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildIndirectString @ 0x14087BA14 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BCD0 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14087CB6C (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgAppendMultiSz @ 0x14095C834 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14096283C (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDrvDbMountNode @ 0x140970250 (PiDrvDbMountNode.c)
 *     PiDrvDbQueryHiveFileName @ 0x140970D64 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971298 (PiDrvDbResolveSystemFilePath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCDCC (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDEF8 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409C2530 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x1409C2640 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpAllocateStringRoutine(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1735554131LL);
}
