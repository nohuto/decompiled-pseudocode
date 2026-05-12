/*
 * XREFs of RaidCheckATADeviceIdMapping @ 0x1C0041998
 * Callers:
 *     ATAShimGetMsftId @ 0x1C0073AA0 (ATAShimGetMsftId.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall RaidCheckATADeviceIdMapping(_OWORD *a1, const STRING *a2)
{
  _LIST_ENTRY *Blink; // rbx

  Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
  *a1 = 0LL;
  while ( Blink != (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
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
