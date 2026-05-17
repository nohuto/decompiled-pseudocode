/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800EC360
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A2040 (NtAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return NtAlpcSetInformation();
}
