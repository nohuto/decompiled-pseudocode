/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x14058D9E0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x14032CB64 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032CBB8 (PopCheckForWork.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
