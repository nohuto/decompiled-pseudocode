/*
 * XREFs of ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800F8AD0
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18003AC10 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18004C684 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800F7F2C (-Clear@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 *     ?Clear@?$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800F8004 (-Clear@-$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800F8E40 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z @ 0x1800FC0A8 (-UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z.c)
 */

void __fastcall PnpDeviceWatcher::Shutdown(PnpDeviceWatcher *this, void **a2)
{
  void *v3; // rcx
  void **v4; // rdx
  struct PnpDeviceWatcher::DeviceListEntry *i; // rbx

  *(_QWORD *)this = 0LL;
  v3 = (void *)_InterlockedExchange64((volatile __int64 *)this + 3, 0LL);
  if ( v3 )
    CloseHandle(v3);
  PnpApiWrapper::Details::UnregisterDeviceEventHandler((PnpDeviceWatcher *)((char *)this + 16), a2);
  PnpApiWrapper::Details::UnregisterDeviceEventHandler((PnpDeviceWatcher *)((char *)this + 8), v4);
  for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7);
        i != (PnpDeviceWatcher *)((char *)this + 56);
        i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
  {
    PnpDeviceWatcher::StopDeviceObject(this, i);
  }
  SleepEx(0, 1);
  NtList<PnpDeviceWatcher::NotificationListEntry>::Clear((HSTRING **)this + 4);
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((PnpDeviceWatcher::RetryDeviceListEntry **)this + 7);
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((PnpDeviceWatcher::RetryDeviceListEntry **)this + 10);
}
