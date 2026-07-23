/*
 * XREFs of SdbGetStringTagPtr @ 0x140757558
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066E334 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpSearchDB @ 0x1407523F4 (SdbpSearchDB.c)
 *     SdbpCheckMatchingFiles @ 0x140756AF0 (SdbpCheckMatchingFiles.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407572D8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpMatchList @ 0x14075770C (SdbpMatchList.c)
 *     SdbpCheckAllAttributes @ 0x1407578E4 (SdbpCheckAllAttributes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140758BE0 (SdbpFindFirstIndexedWildCardTag.c)
 *     KsepDbReadKFlag @ 0x140808EE4 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x14084A228 (SdbpFindMatchingName.c)
 *     KsepDbGetSdbString @ 0x140855A80 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1409770D8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4F238 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x140A4F810 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140A4F8E0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A505F0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x140A50CF0 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A51118 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51344 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140A51900 (SdbpMatchDeviceString.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51DF0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51ED0 (SdbpFindNextNamedTagHelper.c)
 *     SdbMergeIsEntryUpdated @ 0x140A5398C (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53D74 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x140740B7C (SdbpGetMappedTagData.c)
 *     SdbpGetMappedStringFromTable @ 0x1407575D8 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140757628 (SdbpReadStringRef.c)
 *     SdbGetTagFromTagID @ 0x140757E70 (SdbGetTagFromTagID.c)
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
