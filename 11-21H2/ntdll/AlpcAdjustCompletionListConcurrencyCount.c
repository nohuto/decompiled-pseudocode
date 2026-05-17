/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800EBB80
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A5200 (NtAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return NtAlpcSetInformation();
}
