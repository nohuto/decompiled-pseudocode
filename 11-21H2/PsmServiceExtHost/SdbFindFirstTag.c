/*
 * XREFs of SdbFindFirstTag @ 0x180098EE4
 * Callers:
 *     SdbGetDatabaseID @ 0x180095224 (SdbGetDatabaseID.c)
 *     SdbpApphelpExeInfo @ 0x180096860 (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180096B70 (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180096EC0 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpReadApphelpDisplayResources @ 0x180097088 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x1800981CC (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180098730 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x180099000 (SdbpFindMatchingDWORD.c)
 *     InitOnceGetStringTableOffset @ 0x1800990B0 (InitOnceGetStringTableOffset.c)
 *     SdbpCheckMatchingDevice @ 0x180099A60 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x180099B40 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180099D10 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009AC20 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x18009B1A0 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckSdbCapability @ 0x18009B510 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009B64C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009B8A0 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchList @ 0x18009BE58 (SdbpMatchList.c)
 *     SdbpMatchOne @ 0x18009BFE0 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetFirstChild @ 0x180095334 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x180095394 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, unsigned int a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, a2, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
      return v8;
  }
  return v3;
}
