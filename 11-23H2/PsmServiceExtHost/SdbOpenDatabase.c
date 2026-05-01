/*
 * XREFs of SdbOpenDatabase @ 0x180090078
 * Callers:
 *     SdbInitDatabaseEx @ 0x180090A10 (SdbInitDatabaseEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 SdbOpenDatabase()
{
  return SdbOpenDatabaseEx();
}
