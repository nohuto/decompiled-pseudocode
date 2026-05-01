/*
 * XREFs of SdbReadDWORDTag @ 0x1800944E8
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052810 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpApphelpExeInfo @ 0x18009198C (SdbpApphelpExeInfo.c)
 *     SdbpReadApphelpDisplayResources @ 0x1800921C4 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x18009320C (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180093810 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x1800940C0 (SdbpFindMatchingDWORD.c)
 *     SdbpCheckOSKind @ 0x180096210 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x1800962E0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetMatchingTextAttributes @ 0x180096524 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x180096778 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090384 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180094A34 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    v7 = SdbpReadTagData(a1, v4, &v10, 4LL);
    v8 = v10;
    if ( !v7 )
      return a3;
    return v8;
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadDWORDTag",
      150,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type",
      v4,
      TagFromTagID);
    return a3;
  }
}
