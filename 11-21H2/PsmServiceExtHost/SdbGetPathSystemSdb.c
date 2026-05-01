/*
 * XREFs of SdbGetPathSystemSdb @ 0x180097350
 * Callers:
 *     SdbInitDatabaseEx @ 0x180095D78 (SdbInitDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x18009737C (SdbResolveDatabaseEx.c)
 * Callees:
 *     SdbpGetSystemSdbFilePath @ 0x18009809C (SdbpGetSystemSdbFilePath.c)
 */

_BOOL8 __fastcall SdbGetPathSystemSdb(int a1, int a2, int a3, __int64 a4)
{
  return (int)SdbpGetSystemSdbFilePath(a1, a2, a3, a4, 0LL, a4) >= 0;
}
