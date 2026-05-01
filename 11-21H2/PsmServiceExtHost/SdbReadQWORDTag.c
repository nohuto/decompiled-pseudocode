/*
 * XREFs of SdbReadQWORDTag @ 0x1800994C4
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1800981CC (SdbpCheckAllAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x18009B1A0 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009B8A0 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180099974 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    v7 = SdbpReadTagData(a1, v4, &v9, 8LL);
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
      (unsigned int)"SdbReadQWORDTag",
      157,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
