/*
 * XREFs of SdbReadWORDTag @ 0x1800942C4
 * Callers:
 *     InitOnceScanIndexes @ 0x1800934B0 (InitOnceScanIndexes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090024 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1800946D4 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  bool v5; // zf
  int v6; // [rsp+20h] [rbp-18h]
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  unsigned __int16 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v8 = 0;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    v5 = (unsigned int)SdbpReadTagData(a1, v2, &v8, 2LL) == 0;
    result = 0LL;
    if ( !v5 )
      return v8;
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, v2);
    v6 = v2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadWORDTag",
      143,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type",
      v6,
      TagFromTagID);
    return 0LL;
  }
  return result;
}
