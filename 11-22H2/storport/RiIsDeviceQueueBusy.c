/*
 * XREFs of RiIsDeviceQueueBusy @ 0x1C0040F3C
 * Callers:
 *     RaidStallDeviceQueue @ 0x1C0040748 (RaidStallDeviceQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall RiIsDeviceQueueBusy(_DWORD *a1)
{
  return a1[7] || (((__int64)(unsigned int)a1[22] >> 1) & 0x7FFFFFFF) >= a1[1];
}
