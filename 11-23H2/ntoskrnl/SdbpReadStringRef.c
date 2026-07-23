/*
 * XREFs of SdbpReadStringRef @ 0x140757628
 * Callers:
 *     SdbGetStringTagPtr @ 0x140757558 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14075768C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140757E70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  v3 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v3, &v7, 4LL) )
      return v7;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v3, v5);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
