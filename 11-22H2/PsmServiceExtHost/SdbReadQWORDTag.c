/*
 * XREFs of SdbReadQWORDTag @ 0x180094584
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052810 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAllAttributes @ 0x18009320C (SdbpCheckAllAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x180096778 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090384 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180094A34 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    v7 = SdbpReadTagData(a1, v4, &v10, 8LL);
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
      (unsigned int)"SdbReadQWORDTag",
      157,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type",
      v4,
      TagFromTagID);
    return a3;
  }
}
