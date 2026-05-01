/*
 * XREFs of SdbInitDatabase @ 0x180095D30
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180030400 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 SdbInitDatabase()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  AslLogCallPrintf(3, (unsigned int)"SdbInitDatabase", 157, (unsigned int)"Flags:%d; DatabasePath:%ws");
  return SdbInitDatabaseEx(v1, v0, 34404LL);
}
