/*
 * XREFs of SdbGetStringTagPtr @ 0x140757368
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DDE4 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpSearchDB @ 0x140752204 (SdbpSearchDB.c)
 *     SdbpCheckMatchingFiles @ 0x140756900 (SdbpCheckMatchingFiles.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407570E8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpMatchList @ 0x14075751C (SdbpMatchList.c)
 *     SdbpCheckAllAttributes @ 0x1407576F4 (SdbpCheckAllAttributes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407589F0 (SdbpFindFirstIndexedWildCardTag.c)
 *     KsepDbReadKFlag @ 0x140808C14 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x140849F28 (SdbpFindMatchingName.c)
 *     KsepDbGetSdbString @ 0x140855780 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x140976ED8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4EF88 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x140A4F560 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140A4F630 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A50340 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x140A50A40 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A50E68 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51094 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140A51650 (SdbpMatchDeviceString.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51B40 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51C20 (SdbpFindNextNamedTagHelper.c)
 *     SdbMergeIsEntryUpdated @ 0x140A536DC (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53AC4 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14074098C (SdbpGetMappedTagData.c)
 *     SdbpGetMappedStringFromTable @ 0x1407573E8 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140757438 (SdbpReadStringRef.c)
 *     SdbGetTagFromTagID @ 0x140757C80 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int16 v6; // ax
  unsigned int StringRef; // eax

  v3 = 0LL;
  v4 = a2;
  if ( a1 )
  {
    v6 = SdbGetTagFromTagID(a1, a2, a3) & 0xF000;
    if ( v6 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, v4);
    if ( v6 != 24576 )
      return v3;
    StringRef = SdbpReadStringRef(a1, v4);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
