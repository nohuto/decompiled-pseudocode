/*
 * XREFs of SdbTagIDToTagRef @ 0x140855BA0
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140693044 (SdbGetDatabaseMatch.c)
 *     SdbGetDatabaseMatchEx @ 0x140756EB0 (SdbGetDatabaseMatchEx.c)
 *     SdbGetKShimTagRef @ 0x140855B00 (SdbGetKShimTagRef.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpFindLocalDatabaseByPDB @ 0x140855BF4 (SdbpFindLocalDatabaseByPDB.c)
 */

__int64 __fastcall SdbTagIDToTagRef(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // esi
  int v6; // ebx
  __int64 result; // rax
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = -1;
  v5 = a3;
  v6 = 0;
  if ( (unsigned int)SdbpFindLocalDatabaseByPDB(a1, a2, a3, v8) )
  {
    result = 1LL;
    v6 = v5 | (v8[0] << 28);
  }
  else
  {
    AslLogCallPrintf(1LL);
    result = 0LL;
  }
  *a4 = v6;
  return result;
}
