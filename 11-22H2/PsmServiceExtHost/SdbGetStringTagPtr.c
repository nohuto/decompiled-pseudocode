/*
 * XREFs of SdbGetStringTagPtr @ 0x180094294
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052810 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpApphelpExeInfo @ 0x18009198C (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180091C9C (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180091FF8 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckAllAttributes @ 0x18009320C (SdbpCheckAllAttributes.c)
 *     SdbpCheckMatchingDevice @ 0x180094B20 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x180094C00 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180094DD0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095CE0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x1800963F0 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x180096524 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x180096778 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchList @ 0x180096D38 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090384 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x1800946C4 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetMappedTagData @ 0x18009472C (SdbpGetMappedTagData.c)
 *     SdbpReadStringRef @ 0x180094988 (SdbpReadStringRef.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int16 v6; // ax
  unsigned int StringRef; // eax

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", 635, (unsigned int)"Invalid pdb");
    return 0LL;
  }
  v6 = SdbGetTagFromTagID(a1, a2) & 0xF000;
  if ( v6 == (__int16)0x8000 )
    return SdbpGetMappedTagData(a1, v3);
  if ( v6 == 24576 )
  {
    StringRef = SdbpReadStringRef(a1, v3);
    if ( !StringRef )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", 655, (unsigned int)"Error getting StringRef");
      return 0LL;
    }
    return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  return v2;
}
