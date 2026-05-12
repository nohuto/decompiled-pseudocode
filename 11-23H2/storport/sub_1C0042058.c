/*
 * XREFs of sub_1C0042058 @ 0x1C0042058
 * Callers:
 *     DllUnload @ 0x1C0065590 (DllUnload.c)
 * Callees:
 *     <none>
 */

void sub_1C0042058()
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *Flink; // rax

  while ( 1 )
  {
    Blink = stru_1C0093880.DeviceQueue.DeviceListHead.Blink;
    if ( (struct _LIST_ENTRY **)stru_1C0093880.DeviceQueue.DeviceListHead.Blink == &stru_1C0093880.DeviceQueue.DeviceListHead.Blink )
      break;
    if ( (struct _LIST_ENTRY **)stru_1C0093880.DeviceQueue.DeviceListHead.Blink->Blink != &stru_1C0093880.DeviceQueue.DeviceListHead.Blink
      || (Flink = stru_1C0093880.DeviceQueue.DeviceListHead.Blink->Flink,
          stru_1C0093880.DeviceQueue.DeviceListHead.Blink->Flink->Blink != stru_1C0093880.DeviceQueue.DeviceListHead.Blink) )
    {
      __fastfail(3u);
    }
    stru_1C0093880.DeviceQueue.DeviceListHead.Blink = stru_1C0093880.DeviceQueue.DeviceListHead.Blink->Flink;
    Flink->Blink = (struct _LIST_ENTRY *)&stru_1C0093880.DeviceQueue.DeviceListHead.Blink;
    ExFreePoolWithTag(Blink[1].Blink, 0x48536152u);
    ExFreePoolWithTag(Blink, 0x48536152u);
  }
}
