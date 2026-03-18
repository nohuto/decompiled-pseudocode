/*
 * XREFs of UserIsConsoleConnection @ 0x1C001F2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsConsoleConnection()
{
  return gProtocolType == 0;
}
