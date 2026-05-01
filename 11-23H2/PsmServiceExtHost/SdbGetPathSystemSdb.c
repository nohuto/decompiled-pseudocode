/*
 * XREFs of SdbGetPathSystemSdb @ 0x180092068
 * Callers:
 *     SdbInitDatabaseEx @ 0x180090A10 (SdbInitDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x180092094 (SdbResolveDatabaseEx.c)
 * Callees:
 *     SdbpGetSystemSdbFilePath @ 0x180092D7C (SdbpGetSystemSdbFilePath.c)
 */

_BOOL8 __fastcall SdbGetPathSystemSdb(int a1, int a2, int a3, __int64 a4)
{
  return (int)SdbpGetSystemSdbFilePath(a1, a2, a3, a4, 0LL, a4) >= 0;
}
