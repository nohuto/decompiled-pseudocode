/*
 * XREFs of sub_1C0041F68 @ 0x1C0041F68
 * Callers:
 *     sub_1C00742D0 @ 0x1C00742D0 (sub_1C00742D0.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1C0041F68(_OWORD *a1, const STRING *a2)
{
  struct _LIST_ENTRY *Blink; // rbx

  Blink = stru_1C0093880.DeviceQueue.DeviceListHead.Blink;
  *a1 = 0LL;
  while ( Blink != (struct _LIST_ENTRY *)&stru_1C0093880.DeviceQueue.DeviceListHead.Blink )
  {
    if ( !RtlCompareString(a2, (const STRING *)&Blink[1], 0) )
    {
      *a1 = Blink[2];
      return a1;
    }
    Blink = Blink->Flink;
  }
  return a1;
}
