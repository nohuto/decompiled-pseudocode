/*
 * XREFs of SdbOpenDatabase @ 0x1800903D8
 * Callers:
 *     SdbInitDatabaseEx @ 0x180090D70 (SdbInitDatabaseEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 SdbOpenDatabase()
{
  return SdbOpenDatabaseEx();
}
