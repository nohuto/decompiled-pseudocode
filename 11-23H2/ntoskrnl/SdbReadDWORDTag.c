/*
 * XREFs of SdbReadDWORDTag @ 0x140755648
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066E334 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetDriverShimsInternal @ 0x140694B7C (KsepDbGetDriverShimsInternal.c)
 *     SdbGetDatabaseEdition @ 0x140695518 (SdbGetDatabaseEdition.c)
 *     InitOnceScanIndexes @ 0x140756CF0 (InitOnceScanIndexes.c)
 *     SdbpCheckAllAttributes @ 0x1407578E4 (SdbpCheckAllAttributes.c)
 *     SdbpGetExeEntryFlags @ 0x14084E54C (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140855840 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1409770D8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4F238 (SdbQueryDataExTagID.c)
 *     SdbpCheckOSKind @ 0x140A50B00 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x140A50BD0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x140A510C8 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A51118 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51344 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140A5398C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14075768C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140757E70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3) & 0xF000) == 0x4000 )
  {
    v7 = SdbpReadTagData(a1, v4, &v10, 4LL);
    v8 = v10;
    if ( !v7 )
      return v3;
    return v8;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4, v6);
    AslLogCallPrintf(1LL);
    return v3;
  }
}
