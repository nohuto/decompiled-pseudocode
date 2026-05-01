/*
 * XREFs of SdbInitDatabase @ 0x1800909C8
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003369C (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
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
    &word_1800B66B4);
  return SdbInitDatabaseEx(v1, v0, 34404LL);
}
