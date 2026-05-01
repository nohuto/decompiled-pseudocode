/*
 * XREFs of SdbFindFirstDWORDIndexedTag @ 0x180093724
 * Callers:
 *     SdbpReadApphelpDisplayCustom @ 0x180091C98 (SdbpReadApphelpDisplayCustom.c)
 * Callees:
 *     SdbGetIndex @ 0x1800937D4 (SdbGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1800939D4 (SdbpGetFirstIndexedRecord.c)
 *     SdbpFindMatchingDWORD @ 0x180093D60 (SdbpFindMatchingDWORD.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbFindFirstDWORDIndexedTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v6; // rsi
  unsigned int Index; // eax
  unsigned int *v8; // rbx
  unsigned int FirstIndexedRecord; // eax
  int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+28h] [rbp-10h]
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0;
  v6 = a4;
  Index = SdbGetIndex(a1, a2, a3, &v13);
  v8 = a5;
  *a5 = Index;
  if ( !Index )
  {
    v12 = 16405;
    v11 = 28685;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbFindFirstDWORDIndexedTag",
      158,
      (unsigned int)"Failed to find index 0x%lx key 0x%lx",
      v11,
      v12);
    return 0LL;
  }
  *((_WORD *)v8 + 6) = 16405;
  v8[5] = v13;
  v8[8] = v6;
  *((_QWORD *)v8 + 3) = v6;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, Index, v6, v8);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingDWORD(a1, FirstIndexedRecord, v8);
}
