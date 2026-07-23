/*
 * XREFs of SdbReadWORDTag @ 0x140755E5C
 * Callers:
 *     SdbpCheckForMatch @ 0x140756BEC (SdbpCheckForMatch.c)
 *     InitOnceScanIndexes @ 0x140756CF0 (InitOnceScanIndexes.c)
 *     SdbMergeIsEntryUpdated @ 0x140A5398C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14075768C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140757E70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // di
  unsigned int v4; // ebx
  __int64 v6; // r8
  int v7; // eax
  unsigned __int16 v8; // cx
  unsigned __int16 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3) & 0xF000) == 0x3000 )
  {
    v7 = SdbpReadTagData(a1, v4, &v10, 2LL);
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
