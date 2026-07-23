/*
 * XREFs of SdbFindFirstTag @ 0x140757B94
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066E334 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetDriverShimsInternal @ 0x140694B7C (KsepDbGetDriverShimsInternal.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140695304 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbGetDatabaseID @ 0x140695370 (SdbGetDatabaseID.c)
 *     SdbGetDatabaseEdition @ 0x140695518 (SdbGetDatabaseEdition.c)
 *     SdbpSearchDB @ 0x1407523F4 (SdbpSearchDB.c)
 *     SdbpCheckMatchingFiles @ 0x140756AF0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckForMatch @ 0x140756BEC (SdbpCheckForMatch.c)
 *     InitOnceScanIndexes @ 0x140756CF0 (InitOnceScanIndexes.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407572D8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpMatchOsVersion @ 0x140757474 (SdbpMatchOsVersion.c)
 *     SdbpMatchList @ 0x14075770C (SdbpMatchList.c)
 *     SdbpCheckAllAttributes @ 0x1407578E4 (SdbpCheckAllAttributes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140758BE0 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceGetStringTableOffset @ 0x1407E72D0 (InitOnceGetStringTableOffset.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1408088D8 (KsepDbCacheReadDeviceInternal.c)
 *     KsepDbReadKFlag @ 0x140808EE4 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x14084A228 (SdbpFindMatchingName.c)
 *     SdbpGetExeEntryFlags @ 0x14084E54C (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140855840 (KsepDbGetShimInfo.c)
 *     SdbGetKShimTagRef @ 0x140855B00 (SdbGetKShimTagRef.c)
 *     SdbpMatchOem @ 0x1408634D0 (SdbpMatchOem.c)
 *     SdbpMatchCpu @ 0x140863524 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140863578 (SdbpMatchBios.c)
 *     SdbpMatchAcpi @ 0x1408635CC (SdbpMatchAcpi.c)
 *     KsepDbReadKData @ 0x1409770D8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4F238 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140A4F624 (SdbReadEntryInformation.c)
 *     SdbpCheckMatchingDevice @ 0x140A4F810 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140A4F8E0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A505F0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x140A50CF0 (SdbpCheckSdbCapability.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140A50D90 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x140A50E38 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x140A50EE4 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140A50F60 (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbpGetDeviceDWORD @ 0x140A510C8 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A51118 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51344 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140A51900 (SdbpMatchDeviceString.c)
 *     SdbpMatchOne @ 0x140A51970 (SdbpMatchOne.c)
 *     SdbFindParentTagFromAncestors @ 0x140A51D90 (SdbFindParentTagFromAncestors.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51DF0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51ED0 (SdbpFindNextNamedTagHelper.c)
 *     __SdbpFindTagFromAncestors @ 0x140A51FF8 (__SdbpFindTagFromAncestors.c)
 *     SdbMergeIsEntryUpdated @ 0x140A5398C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     SdbGetFirstChild @ 0x140757B34 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x140757C08 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140757E70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int16 v4; // r14
  unsigned int v5; // ebp
  unsigned int i; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx

  v3 = 0;
  v4 = a3;
  v5 = a2;
  for ( i = SdbGetFirstChild(a1, a2, a3); ; i = SdbGetNextChild(a1, v5, v9) )
  {
    v9 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i, v8) == v4 )
      return v9;
  }
  return v3;
}
