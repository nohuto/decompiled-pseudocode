/*
 * XREFs of RtlFlushHeaps @ 0x180077380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void RtlFlushHeaps(void)
{
  RtlpEnumProcessHeaps(RtlpFlushHeapsCallback, 0LL, 0LL);
}
