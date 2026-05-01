/*
 * XREFs of SdbGetStringTagPtr @ 0x1800991D4
 * Callers:
 *     SdbpApphelpExeInfo @ 0x180096860 (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180096B70 (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180096EC0 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckAllAttributes @ 0x1800981CC (SdbpCheckAllAttributes.c)
 *     SdbpCheckMatchingDevice @ 0x180099A60 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x180099B40 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180099D10 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009AC20 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x18009B1A0 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckSdbCapability @ 0x18009B510 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009B64C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009B8A0 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchList @ 0x18009BE58 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x180099604 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetMappedTagData @ 0x18009966C (SdbpGetMappedTagData.c)
 *     SdbpReadStringRef @ 0x1800998C8 (SdbpReadStringRef.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  const char *v5; // r9
  int v6; // r8d
  __int16 v8; // ax
  unsigned int StringRef; // eax

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
  {
    v5 = "Invalid pdb";
    v6 = 635;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", v6, (_DWORD)v5);
    return 0LL;
  }
  v8 = SdbGetTagFromTagID(a1, a2) & 0xF000;
  if ( v8 == (__int16)0x8000 )
    return SdbpGetMappedTagData(a1, v3);
  if ( v8 == 24576 )
  {
    StringRef = SdbpReadStringRef(a1, v3);
    if ( !StringRef )
    {
      v5 = "Error getting StringRef";
      v6 = 655;
      goto LABEL_3;
    }
    return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  return v2;
}
