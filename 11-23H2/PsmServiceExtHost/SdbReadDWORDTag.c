/*
 * XREFs of SdbReadDWORDTag @ 0x180094188
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052610 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpApphelpExeInfo @ 0x18009162C (SdbpApphelpExeInfo.c)
 *     SdbpReadApphelpDisplayResources @ 0x180091E64 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x180092EAC (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x1800934B0 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x180093D60 (SdbpFindMatchingDWORD.c)
 *     SdbpCheckOSKind @ 0x180095EB0 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x180095F80 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetMatchingTextAttributes @ 0x1800961C4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x180096418 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090024 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1800946D4 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
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
