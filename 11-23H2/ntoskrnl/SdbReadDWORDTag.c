/*
 * XREFs of SdbReadDWORDTag @ 0x140755458
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DDE4 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetDriverShimsInternal @ 0x140694B7C (KsepDbGetDriverShimsInternal.c)
 *     SdbGetDatabaseEdition @ 0x140695518 (SdbGetDatabaseEdition.c)
 *     InitOnceScanIndexes @ 0x140756B00 (InitOnceScanIndexes.c)
 *     SdbpCheckAllAttributes @ 0x1407576F4 (SdbpCheckAllAttributes.c)
 *     SdbpGetExeEntryFlags @ 0x14084E24C (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140855540 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140976ED8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4EF88 (SdbQueryDataExTagID.c)
 *     SdbpCheckOSKind @ 0x140A50850 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x140A50920 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x140A50E18 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A50E68 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51094 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140A536DC (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14075749C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140757C80 (SdbGetTagFromTagID.c)
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
