/*
 * XREFs of RtlpRtlpCtSelfSubscribeCallback @ 0x18010F1C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 */

__int64 RtlpRtlpCtSelfSubscribeCallback()
{
  ZwSetEvent();
  return 0LL;
}
