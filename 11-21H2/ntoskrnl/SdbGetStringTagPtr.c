/*
 * XREFs of SdbGetStringTagPtr @ 0x140842A24
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14075B48C (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14075BB10 (SdbpSearchDB.c)
 *     SdbQueryDataExTagID @ 0x1408411FC (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x140841428 (SdbFindFirstNamedTag.c)
 *     SdbpCheckMatchingFiles @ 0x1408414E0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckAllAttributes @ 0x140841610 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140842864 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x140842978 (SdbpFindMatchingName.c)
 *     SdbpMatchList @ 0x1408434E0 (SdbpMatchList.c)
 *     KsepDbGetSdbString @ 0x140963878 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x140963CD0 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x140A10C20 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140A10CF0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A11A00 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140A11F60 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckSdbCapability @ 0x140A122E0 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A124A4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A126D0 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140A12C84 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x140A1311C (SdbpFindNextNamedTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140A146FC (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14075B988 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x14079499C (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x140842AA4 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140842BCC (SdbpReadStringRef.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int16 v5; // ax
  unsigned int StringRef; // eax

  v2 = 0LL;
  v3 = a2;
  if ( a1 )
  {
    v5 = SdbGetTagFromTagID(a1, a2) & 0xF000;
    if ( v5 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, v3);
    if ( v5 != 24576 )
      return v2;
    StringRef = SdbpReadStringRef(a1, v3);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
