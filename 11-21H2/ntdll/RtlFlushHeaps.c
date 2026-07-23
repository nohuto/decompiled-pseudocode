/*
 * XREFs of RtlFlushHeaps @ 0x18007D820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void RtlFlushHeaps(void)
{
  RtlpEnumProcessHeaps(RtlpFlushHeapsCallback, 0LL, 0LL);
}
