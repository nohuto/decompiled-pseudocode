/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x14058DED0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x14032CDF4 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032CE48 (PopCheckForWork.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
