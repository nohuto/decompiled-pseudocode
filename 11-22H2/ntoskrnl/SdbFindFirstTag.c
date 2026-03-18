/*
 * XREFs of SdbFindFirstTag @ 0x140757EB4
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DE54 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetDriverShimsInternal @ 0x140694B7C (KsepDbGetDriverShimsInternal.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140695304 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbGetDatabaseID @ 0x140695370 (SdbGetDatabaseID.c)
 *     SdbGetDatabaseEdition @ 0x140695518 (SdbGetDatabaseEdition.c)
 *     SdbpSearchDB @ 0x140752714 (SdbpSearchDB.c)
 *     SdbpCheckMatchingFiles @ 0x140756E10 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckForMatch @ 0x140756F0C (SdbpCheckForMatch.c)
 *     InitOnceScanIndexes @ 0x140757010 (InitOnceScanIndexes.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407575F8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpMatchOsVersion @ 0x140757794 (SdbpMatchOsVersion.c)
 *     SdbpMatchList @ 0x140757A2C (SdbpMatchList.c)
 *     SdbpCheckAllAttributes @ 0x140757C04 (SdbpCheckAllAttributes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140758F00 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceGetStringTableOffset @ 0x1407E7580 (InitOnceGetStringTableOffset.c)
 *     KsepDbCacheReadDeviceInternal @ 0x14080AB88 (KsepDbCacheReadDeviceInternal.c)
 *     KsepDbReadKFlag @ 0x14080B194 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x14084B188 (SdbpFindMatchingName.c)
 *     SdbpGetExeEntryFlags @ 0x14084F0CC (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140856450 (KsepDbGetShimInfo.c)
 *     SdbGetKShimTagRef @ 0x140856710 (SdbGetKShimTagRef.c)
 *     SdbpMatchOem @ 0x1408634B0 (SdbpMatchOem.c)
 *     SdbpMatchCpu @ 0x140863504 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140863558 (SdbpMatchBios.c)
 *     SdbpMatchAcpi @ 0x1408635AC (SdbpMatchAcpi.c)
 *     KsepDbReadKData @ 0x140976F88 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4EFF8 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140A4F3E4 (SdbReadEntryInformation.c)
 *     SdbpCheckMatchingDevice @ 0x140A4F5D0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140A4F6A0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A503B0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x140A50AB0 (SdbpCheckSdbCapability.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140A50B50 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x140A50BF8 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x140A50CA4 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140A50D20 (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbpGetDeviceDWORD @ 0x140A50E88 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A50ED8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51104 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140A516C0 (SdbpMatchDeviceString.c)
 *     SdbpMatchOne @ 0x140A51730 (SdbpMatchOne.c)
 *     SdbFindParentTagFromAncestors @ 0x140A51B50 (SdbFindParentTagFromAncestors.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51BB0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51C90 (SdbpFindNextNamedTagHelper.c)
 *     __SdbpFindTagFromAncestors @ 0x140A51DB8 (__SdbpFindTagFromAncestors.c)
 *     SdbMergeIsEntryUpdated @ 0x140A5374C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     SdbGetFirstChild @ 0x140757E54 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x140757F28 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140758190 (SdbGetTagFromTagID.c)
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
