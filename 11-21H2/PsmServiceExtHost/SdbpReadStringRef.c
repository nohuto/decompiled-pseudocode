/*
 * XREFs of SdbpReadStringRef @ 0x1800998C8
 * Callers:
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180099974 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) != 0x6000 )
  {
    SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadStringRef",
      547,
      (unsigned int)"TagID 0x%08X, Tag %04X not STRINGREF type");
    return 0LL;
  }
  if ( !(unsigned int)SdbpReadTagData(a1, v2, &v5, 4LL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadStringRef", 552, (unsigned int)"Error reading data");
    return 0LL;
  }
  return v5;
}
