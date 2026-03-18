/*
 * XREFs of IsDwmApiPortRegistered @ 0x1C00C5B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsDwmApiPortRegistered()
{
  return g_pDwmApiPort != 0LL;
}
