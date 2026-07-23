/*
 * XREFs of SdbReadQWORDTag @ 0x140808F84
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066E334 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpMatchOsVersion @ 0x140757474 (SdbpMatchOsVersion.c)
 *     SdbpCheckAllAttributes @ 0x1407578E4 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140808EE4 (KsepDbReadKFlag.c)
 *     KsepDbReadKData @ 0x1409770D8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4F238 (SdbQueryDataExTagID.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51344 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14075768C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140757E70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    v6 = SdbpReadTagData(a1, a2, &v9, 8u);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(1LL);
    return a3;
  }
}
