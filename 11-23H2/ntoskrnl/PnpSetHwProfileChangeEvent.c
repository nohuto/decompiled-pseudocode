/*
 * XREFs of PnpSetHwProfileChangeEvent @ 0x1409649AC
 * Callers:
 *     PnpRequestHwProfileChangeNotification @ 0x140956C18 (PnpRequestHwProfileChangeNotification.c)
 * Callees:
 *     PnpInsertEventInQueue @ 0x140786520 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x14079455C (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetHwProfileChangeEvent(__int128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 DeviceEventEntry; // rax
  __int128 v11; // xmm0

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  DeviceEventEntry = PnpCreateDeviceEventEntry(0xC0u);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_DWORD *)(DeviceEventEntry + 128) = 0;
  *(_QWORD *)(DeviceEventEntry + 24) = a2;
  *(_QWORD *)(DeviceEventEntry + 48) = a4;
  *(_QWORD *)(DeviceEventEntry + 56) = a5;
  v11 = *a1;
  *(_DWORD *)(DeviceEventEntry + 148) = 80;
  *(_QWORD *)(DeviceEventEntry + 136) = a3;
  *(_OWORD *)(DeviceEventEntry + 112) = v11;
  return PnpInsertEventInQueue(DeviceEventEntry);
}
