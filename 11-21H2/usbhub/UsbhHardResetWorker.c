/*
 * XREFs of UsbhHardResetWorker @ 0x1C003C7C0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001C920 (UsbhDispatch_HardResetEvent.c)
 */

void __fastcall UsbhHardResetWorker(__int64 DeviceObject, PVOID Context)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // r9

  v3 = FdoExt(DeviceObject);
  v4 = FdoExt(DeviceObject);
  Log(DeviceObject, 4, 1919251287, (__int64)(v4 + 566), 0LL);
  UsbhDispatch_HardResetEvent(DeviceObject, v5, (v3[640] & 0x100000) != 0 ? 4 : 7);
}
