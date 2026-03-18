/*
 * XREFs of SdbReadDWORDTag @ 0x1407ECF5C
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14075C380 (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x140791640 (InitOnceScanIndexes.c)
 *     SdbGetDatabaseEdition @ 0x1407ECF00 (SdbGetDatabaseEdition.c)
 *     SdbQueryDataExTagID @ 0x1408411FC (SdbQueryDataExTagID.c)
 *     SdbpCheckAllAttributes @ 0x140841610 (SdbpCheckAllAttributes.c)
 *     SdbpGetExeEntryFlags @ 0x1408437A4 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x1409638AC (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140963CD0 (KsepDbReadKData.c)
 *     SdbpCheckOSKind @ 0x140A11F10 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x140A11F60 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x140A121C0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x140A12454 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A124A4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A126D0 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140791084 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14079499C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int TagData; // eax
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    TagData = SdbpReadTagData(a1, v4, (__int64)&v9, 4u);
    v7 = v9;
    if ( !TagData )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL);
    return a3;
  }
}
