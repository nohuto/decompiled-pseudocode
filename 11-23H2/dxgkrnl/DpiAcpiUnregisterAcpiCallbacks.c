/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x1C03A6EF4
 * Callers:
 *     DpiAddDevice @ 0x1C0202170 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C039B860 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0015C20 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_1C0140610 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID, int, __int64)))(v1 + 936))(
      *(_QWORD *)(v1 + 864),
      DpiAcpiEventCallback);
    if ( !--dword_1C0140610 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  _InterlockedExchange64(&qword_1C01404D8, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
