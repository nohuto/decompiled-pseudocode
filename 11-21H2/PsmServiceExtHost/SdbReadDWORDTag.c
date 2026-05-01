/*
 * XREFs of SdbReadDWORDTag @ 0x180099428
 * Callers:
 *     SdbpApphelpExeInfo @ 0x180096860 (SdbpApphelpExeInfo.c)
 *     SdbpReadApphelpDisplayResources @ 0x180097088 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x1800981CC (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180098730 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x180099000 (SdbpFindMatchingDWORD.c)
 *     SdbpCheckOSKind @ 0x18009B150 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x18009B1A0 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x18009B400 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009B64C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009B8A0 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180099974 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    v7 = SdbpReadTagData(a1, v4, &v9, 4LL);
    v8 = v9;
    if ( !v7 )
      return a3;
    return v8;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadDWORDTag",
      150,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
