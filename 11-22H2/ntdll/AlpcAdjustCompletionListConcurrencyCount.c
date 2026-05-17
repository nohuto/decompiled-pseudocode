/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800EB030
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x18009FF80 (NtAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return NtAlpcSetInformation();
}
