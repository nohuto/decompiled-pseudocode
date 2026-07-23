/*
 * XREFs of AslAlloc @ 0x140758688
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1406951D8 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140695260 (SdbpOpenDatabaseInMemory.c)
 *     SdbpCheckAllAttributes @ 0x1407578E4 (SdbpCheckAllAttributes.c)
 *     AslFileMappingCreate @ 0x14075812C (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x1407582CC (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x140758434 (SdbpCreateSearchDBContext.c)
 *     AslpFileGetVersionBlock @ 0x1407597EC (AslpFileGetVersionBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x140848D80 (AslFileMappingCreateFromImageView.c)
 *     AslRegistryBuildMachinePath @ 0x14084E830 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084E99C (AslRegistryBuildUserPath.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E3B0 (SdbGetMergeRedirectPath.c)
 *     SdbOpenDatabaseEx @ 0x140A4E800 (SdbOpenDatabaseEx.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140A4EAAC (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EDB8 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbQueryDataExTagID @ 0x140A4F238 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FDAC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A50204 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A51118 (SdbpGetMatchingTextAttributes.c)
 *     SdbpInitializeSearchDBContext @ 0x140A51670 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140A51A10 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140A520D8 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140A52A20 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140A534B8 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x140A53F08 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140A54054 (AslStringAnsiToUnicode.c)
 *     AslRegistryGetString @ 0x140A54584 (AslRegistryGetString.c)
 *     AslPathToNetworkPathNt @ 0x140A55510 (AslPathToNetworkPathNt.c)
 *     AslPathWildcardFindFirst @ 0x140A55804 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140A55D5C (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x140A56568 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140A566A8 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A56898 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x140A56D90 (AslpProcessMatchRegNode.c)
 *     AslEnvExpandStrings2 @ 0x140A57174 (AslEnvExpandStrings2.c)
 *     AslpFileLargeMapCreate @ 0x140A59CF0 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void *__fastcall AslAlloc(__int64 a1, size_t a2)
{
  void *Pool2; // rax
  void *v4; // rbx

  Pool2 = (void *)ExAllocatePool2(256LL, a2, 1953517633LL);
  v4 = Pool2;
  if ( Pool2 )
    memset(Pool2, 0, a2);
  return v4;
}
