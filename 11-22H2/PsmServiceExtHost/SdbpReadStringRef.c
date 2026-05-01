/*
 * XREFs of SdbpReadStringRef @ 0x180094988
 * Callers:
 *     SdbGetStringTagPtr @ 0x180094294 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090384 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180094A34 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v5; // [rsp+20h] [rbp-18h]
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) != 0x6000 )
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, v2);
    v5 = v2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadStringRef",
      547,
      (unsigned int)"TagID 0x%08X, Tag %04X not STRINGREF type",
      v5,
      TagFromTagID);
    return 0LL;
  }
  if ( !(unsigned int)SdbpReadTagData(a1, v2, &v7, 4LL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadStringRef", 552, (unsigned int)"Error reading data");
    return 0LL;
  }
  return v7;
}
