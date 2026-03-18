/*
 * XREFs of W32GetCurrentWin32kSessionId @ 0x1C024B78C
 * Callers:
 *     bAddAllFlEntry @ 0x1C00897FC (bAddAllFlEntry.c)
 * Callees:
 *     <none>
 */

__int64 W32GetCurrentWin32kSessionId()
{
  return GetCurrentWin32kSessionId();
}
