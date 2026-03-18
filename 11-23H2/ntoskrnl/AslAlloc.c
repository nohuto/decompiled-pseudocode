/*
 * XREFs of AslAlloc @ 0x140758498
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1406951D8 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140695260 (SdbpOpenDatabaseInMemory.c)
 *     SdbpCheckAllAttributes @ 0x1407576F4 (SdbpCheckAllAttributes.c)
 *     AslFileMappingCreate @ 0x140757F3C (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x1407580DC (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x140758244 (SdbpCreateSearchDBContext.c)
 *     AslpFileGetVersionBlock @ 0x1407595FC (AslpFileGetVersionBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x140848A80 (AslFileMappingCreateFromImageView.c)
 *     AslRegistryBuildMachinePath @ 0x14084E530 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084E69C (AslRegistryBuildUserPath.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E100 (SdbGetMergeRedirectPath.c)
 *     SdbOpenDatabaseEx @ 0x140A4E550 (SdbOpenDatabaseEx.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140A4E7FC (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EB08 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbQueryDataExTagID @ 0x140A4EF88 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FAFC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A4FF54 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A50E68 (SdbpGetMatchingTextAttributes.c)
 *     SdbpInitializeSearchDBContext @ 0x140A513C0 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140A51760 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140A51E28 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140A52770 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140A53208 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x140A53C58 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140A53DA4 (AslStringAnsiToUnicode.c)
 *     AslRegistryGetString @ 0x140A542D4 (AslRegistryGetString.c)
 *     AslPathToNetworkPathNt @ 0x140A55260 (AslPathToNetworkPathNt.c)
 *     AslPathWildcardFindFirst @ 0x140A55554 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140A55AAC (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x140A562B8 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140A563F8 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A565E8 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x140A56AE0 (AslpProcessMatchRegNode.c)
 *     AslEnvExpandStrings2 @ 0x140A56EC4 (AslEnvExpandStrings2.c)
 *     AslpFileLargeMapCreate @ 0x140A59A40 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
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
