/*
 * XREFs of SdbInitDatabaseInMemory @ 0x1406951D8
 * Callers:
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     PpBootDDBHelper @ 0x140812B84 (PpBootDDBHelper.c)
 *     KsepSdbBootInitialize @ 0x140862088 (KsepSdbBootInitialize.c)
 * Callees:
 *     SdbpOpenDatabaseInMemory @ 0x140695260 (SdbpOpenDatabaseInMemory.c)
 *     SdbpInitializeMatchers @ 0x1406954A4 (SdbpInitializeMatchers.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x140695724 (SdbCloseDatabaseRead.c)
 *     AslAlloc @ 0x140758688 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v7; // rcx

  v4 = AslAlloc(a1, 1784LL);
  if ( v4 )
  {
    v5 = SdbpOpenDatabaseInMemory(a1, a2, 0LL);
    *(_QWORD *)(v4 + 8) = v5;
    if ( v5 )
    {
      *(_DWORD *)(v4 + 32) = 1;
      *(_DWORD *)(v4 + 36) = 1;
      *(_DWORD *)(v4 + 64) = 2;
      *(_QWORD *)(v4 + 56) = v5;
      *(_OWORD *)(v4 + 40) = *(_OWORD *)(v5 + 28);
      SdbpInitializeMatchers(v4);
      return v4;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 1894, (unsigned int)"Unable to open main database");
    v7 = *(void **)(v4 + 8);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    ExFreePoolWithTag((PVOID)v4, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 1885, (unsigned int)"Failed to allocate sdbcontext");
  }
  return 0LL;
}
