/*
 * XREFs of SdbReleaseDatabase @ 0x180090694
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x1800336CC (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     SdbCloseDatabaseRead @ 0x180090094 (SdbCloseDatabaseRead.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x1800910AC (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbpCleanupUserSDBCache @ 0x1800927D0 (SdbpCleanupUserSDBCache.c)
 *     ShimExceptionHandler @ 0x180097294 (ShimExceptionHandler.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

BOOLEAN __fastcall SdbReleaseDatabase(int *P)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  AslLogCallPrintf(3, (unsigned int)"SdbReleaseDatabase", 118, (unsigned int)"Enter.");
  if ( P[442] )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 222) + 1776LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)P + 222) + 1776LL));
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbReleaseDatabase",
        135,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
  }
  else
  {
    if ( P[444] > 0 )
      return AslLogCallPrintf(
               1,
               (unsigned int)"SdbReleaseDatabase",
               149,
               (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
    SdbpCleanupLocalDatabaseSupport(P);
    v3 = *((_QWORD *)P + 1);
    if ( v3 )
      SdbCloseDatabaseRead(v3);
    v4 = *((_QWORD *)P + 2);
    if ( v4 )
      SdbCloseDatabaseRead(v4);
    SdbpCleanupUserSDBCache(P);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
}
