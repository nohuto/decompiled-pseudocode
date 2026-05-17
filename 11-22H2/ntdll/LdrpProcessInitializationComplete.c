/*
 * XREFs of LdrpProcessInitializationComplete @ 0x180073E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LdrpProcessInitializationComplete()
{
  return LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252LL);
}
