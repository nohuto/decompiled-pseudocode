/*
 * XREFs of RmSetHostLimit @ 0x18001BB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RmSetHostLimit()
{
  return RmpClientSetHostLimits();
}
