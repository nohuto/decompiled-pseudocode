/*
 * XREFs of SdbFindFirstTag @ 0x180093C44
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052610 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbGetDatabaseID @ 0x18008FE28 (SdbGetDatabaseID.c)
 *     SdbpApphelpExeInfo @ 0x18009162C (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x18009193C (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180091C98 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpReadApphelpDisplayResources @ 0x180091E64 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x180092EAC (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x1800934B0 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x180093D60 (SdbpFindMatchingDWORD.c)
 *     InitOnceGetStringTableOffset @ 0x180093E10 (InitOnceGetStringTableOffset.c)
 *     SdbpCheckMatchingDevice @ 0x1800947C0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1800948A0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180094A70 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095980 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x180096090 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x1800961C4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x180096418 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchList @ 0x1800969D8 (SdbpMatchList.c)
 *     SdbpMatchOne @ 0x180096B60 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetFirstChild @ 0x18008FF38 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18008FF98 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x180090024 (SdbGetTagFromTagID.c)
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
