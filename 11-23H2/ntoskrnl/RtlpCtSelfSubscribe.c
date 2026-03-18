/*
 * XREFs of RtlpCtSelfSubscribe @ 0x1409C22BC
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1405B11F0 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
