/*
 * XREFs of SdbReleaseDatabase @ 0x180095694
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180030400 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     SdbCloseDatabaseRead @ 0x18009512C (SdbCloseDatabaseRead.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x180095F5C (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbpCleanupUserSDBCache @ 0x180097758 (SdbpCleanupUserSDBCache.c)
 *     ShimExceptionHandler @ 0x18009C3B0 (ShimExceptionHandler.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

BOOLEAN __fastcall SdbReleaseDatabase(int *P)
{
  __int64 v3; // rcx

  AslLogCallPrintf(3, (unsigned int)"SdbReleaseDatabase", 83, (unsigned int)"Enter.");
  if ( P[376] )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 189) + 1512LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)P + 189) + 1512LL));
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbReleaseDatabase",
        100,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
  }
  else
  {
    if ( P[378] > 0 )
      return AslLogCallPrintf(
               1,
               (unsigned int)"SdbReleaseDatabase",
               114,
               (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
    SdbpCleanupLocalDatabaseSupport(P);
    if ( (P[30] & 2) != 0 )
      SdbCloseDatabaseRead(*((_QWORD *)P + 14));
    v3 = *((_QWORD *)P + 1);
    if ( v3 )
      SdbCloseDatabaseRead(v3);
    SdbpCleanupUserSDBCache(P);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
}
