/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C01323E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCmCleanupSessionState @ 0x1C00B1A78 (ndisCmCleanupSessionState.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&dword_1C00EE8F8, 0);
  if ( dword_1C00EE550 )
    ndisCmCleanupSessionState();
}
