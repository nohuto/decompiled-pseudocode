/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140255030
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x1403A5358 (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     PiCMSetObjectProperty @ 0x1406DC724 (PiCMSetObjectProperty.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiCMSetRegistryProperty @ 0x140956298 (PiCMSetRegistryProperty.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     PnpInsertEventInQueue @ 0x14078C398 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x14078C4EC (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(unsigned __int16 *a1)
{
  int v2; // esi
  __int64 DeviceEventEntry; // rax
  __int64 v4; // rbx
  const void *v5; // rdx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v2 = *a1 + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*a1 + 194);
  v4 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 16) = 0;
  *(GUID *)(DeviceEventEntry + 112) = GUID_DEVICE_PROPERTY_CHANGED;
  *(_QWORD *)(DeviceEventEntry + 48) = 0LL;
  *(_QWORD *)(DeviceEventEntry + 56) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 128) = 9;
  *(_QWORD *)(DeviceEventEntry + 136) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 144) = 0;
  *(_DWORD *)(DeviceEventEntry + 148) = v2;
  *(_QWORD *)(DeviceEventEntry + 152) = 0LL;
  v5 = (const void *)*((_QWORD *)a1 + 1);
  if ( v5 )
    memmove((void *)(DeviceEventEntry + 160), v5, *a1);
  *(_WORD *)(v4 + 2 * ((unsigned __int64)*a1 >> 1) + 160) = 0;
  return PnpInsertEventInQueue(v4);
}
