/*
 * XREFs of RaidFreeATADeviceIdMappings @ 0x1C0041A88
 * Callers:
 *     DllUnload @ 0x1C0064D60 (DllUnload.c)
 * Callees:
 *     <none>
 */

void RaidFreeATADeviceIdMappings()
{
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *Flink; // rax

  while ( 1 )
  {
    Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    if ( (_LIST_ENTRY **)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink == &WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
      break;
    if ( (_LIST_ENTRY **)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Blink != &WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink
      || (Flink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink,
          WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink->Blink != WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      __fastfail(3u);
    }
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink;
    Flink->Blink = (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    ExFreePoolWithTag(Blink[1].Blink, 0x48536152u);
    ExFreePoolWithTag(Blink, 0x48536152u);
  }
}
