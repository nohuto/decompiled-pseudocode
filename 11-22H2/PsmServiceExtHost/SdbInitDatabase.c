/*
 * XREFs of SdbInitDatabase @ 0x180090D28
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x1800336CC (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 SdbInitDatabase()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v3; // [rsp+20h] [rbp-18h]

  v3 = 0;
  AslLogCallPrintf(
    3,
    (unsigned int)"SdbInitDatabase",
    162,
    (unsigned int)"Flags:%d; DatabasePath:%ws",
    v3,
    &word_1800B66C4);
  return SdbInitDatabaseEx(v1, v0, 34404LL);
}
