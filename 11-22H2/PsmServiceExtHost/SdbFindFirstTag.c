/*
 * XREFs of SdbFindFirstTag @ 0x180093FA4
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052810 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbGetDatabaseID @ 0x180090188 (SdbGetDatabaseID.c)
 *     SdbpApphelpExeInfo @ 0x18009198C (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180091C9C (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180091FF8 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpReadApphelpDisplayResources @ 0x1800921C4 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x18009320C (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180093810 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x1800940C0 (SdbpFindMatchingDWORD.c)
 *     InitOnceGetStringTableOffset @ 0x180094170 (InitOnceGetStringTableOffset.c)
 *     SdbpCheckMatchingDevice @ 0x180094B20 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x180094C00 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180094DD0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095CE0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x1800963F0 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x180096524 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x180096778 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchList @ 0x180096D38 (SdbpMatchList.c)
 *     SdbpMatchOne @ 0x180096EC0 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetFirstChild @ 0x180090298 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x1800902F8 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x180090384 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int16 v5; // r14
  unsigned int v6; // ebp
  unsigned int i; // eax
  __int64 v9; // r9
  unsigned int v10; // ebx

  v4 = 0;
  v5 = a3;
  v6 = a2;
  for ( i = SdbGetFirstChild(a1, a2, a3, a4); ; i = SdbGetNextChild(a1, v6, v10, v9) )
  {
    v10 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == v5 )
      return v10;
  }
  return v4;
}
