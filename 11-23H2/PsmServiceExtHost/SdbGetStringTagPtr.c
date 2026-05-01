/*
 * XREFs of SdbGetStringTagPtr @ 0x180093F34
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052610 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpApphelpExeInfo @ 0x18009162C (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x18009193C (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180091C98 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckAllAttributes @ 0x180092EAC (SdbpCheckAllAttributes.c)
 *     SdbpCheckMatchingDevice @ 0x1800947C0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1800948A0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180094A70 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095980 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x180096090 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x1800961C4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x180096418 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchList @ 0x1800969D8 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090024 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x180094364 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetMappedTagData @ 0x1800943CC (SdbpGetMappedTagData.c)
 *     SdbpReadStringRef @ 0x180094628 (SdbpReadStringRef.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
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
