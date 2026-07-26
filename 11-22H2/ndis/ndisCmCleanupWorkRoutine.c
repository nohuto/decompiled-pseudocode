/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C013DFC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCmCleanupSessionState @ 0x1C00B6C58 (ndisCmCleanupSessionState.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&dword_1C00F79C0, 0);
  if ( dword_1C00F7620 )
    ndisCmCleanupSessionState();
}
