/*
 * XREFs of SdbFindFirstTag @ 0x1407579A4
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DDE4 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetDriverShimsInternal @ 0x140694B7C (KsepDbGetDriverShimsInternal.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140695304 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbGetDatabaseID @ 0x140695370 (SdbGetDatabaseID.c)
 *     SdbGetDatabaseEdition @ 0x140695518 (SdbGetDatabaseEdition.c)
 *     SdbpSearchDB @ 0x140752204 (SdbpSearchDB.c)
 *     SdbpCheckMatchingFiles @ 0x140756900 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckForMatch @ 0x1407569FC (SdbpCheckForMatch.c)
 *     InitOnceScanIndexes @ 0x140756B00 (InitOnceScanIndexes.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407570E8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpMatchOsVersion @ 0x140757284 (SdbpMatchOsVersion.c)
 *     SdbpMatchList @ 0x14075751C (SdbpMatchList.c)
 *     SdbpCheckAllAttributes @ 0x1407576F4 (SdbpCheckAllAttributes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407589F0 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceGetStringTableOffset @ 0x1407E7000 (InitOnceGetStringTableOffset.c)
 *     KsepDbCacheReadDeviceInternal @ 0x140808608 (KsepDbCacheReadDeviceInternal.c)
 *     KsepDbReadKFlag @ 0x140808C14 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x140849F28 (SdbpFindMatchingName.c)
 *     SdbpGetExeEntryFlags @ 0x14084E24C (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140855540 (KsepDbGetShimInfo.c)
 *     SdbGetKShimTagRef @ 0x140855800 (SdbGetKShimTagRef.c)
 *     SdbpMatchOem @ 0x140863290 (SdbpMatchOem.c)
 *     SdbpMatchCpu @ 0x1408632E4 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140863338 (SdbpMatchBios.c)
 *     SdbpMatchAcpi @ 0x14086338C (SdbpMatchAcpi.c)
 *     KsepDbReadKData @ 0x140976ED8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4EF88 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140A4F374 (SdbReadEntryInformation.c)
 *     SdbpCheckMatchingDevice @ 0x140A4F560 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140A4F630 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A50340 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x140A50A40 (SdbpCheckSdbCapability.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140A50AE0 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x140A50B88 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x140A50C34 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140A50CB0 (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbpGetDeviceDWORD @ 0x140A50E18 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A50E68 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51094 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140A51650 (SdbpMatchDeviceString.c)
 *     SdbpMatchOne @ 0x140A516C0 (SdbpMatchOne.c)
 *     SdbFindParentTagFromAncestors @ 0x140A51AE0 (SdbFindParentTagFromAncestors.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51B40 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51C20 (SdbpFindNextNamedTagHelper.c)
 *     __SdbpFindTagFromAncestors @ 0x140A51D48 (__SdbpFindTagFromAncestors.c)
 *     SdbMergeIsEntryUpdated @ 0x140A536DC (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     SdbGetFirstChild @ 0x140757944 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x140757A18 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140757C80 (SdbGetTagFromTagID.c)
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
