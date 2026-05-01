/*
 * XREFs of SdbReadWORDTag @ 0x180099564
 * Callers:
 *     InitOnceScanIndexes @ 0x180098730 (InitOnceScanIndexes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180099974 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  bool v5; // zf
  unsigned __int16 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v6 = 0;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    v5 = (unsigned int)SdbpReadTagData(a1, v2, &v6, 2LL) == 0;
    result = 0LL;
    if ( !v5 )
      return v6;
  }
  else
  {
    SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadWORDTag",
      143,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return 0LL;
  }
  return result;
}
