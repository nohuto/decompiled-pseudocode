/*
 * XREFs of RtlpCtSelfSubscribe @ 0x1409C24BC
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1405B1760 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
