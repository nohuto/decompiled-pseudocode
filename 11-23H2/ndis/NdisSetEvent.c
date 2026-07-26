/*
 * XREFs of NdisSetEvent @ 0x1C0027230
 * Callers:
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisSetEvent(PNDIS_EVENT Event)
{
  KeSetEvent(&Event->Event, 0, 0);
}
