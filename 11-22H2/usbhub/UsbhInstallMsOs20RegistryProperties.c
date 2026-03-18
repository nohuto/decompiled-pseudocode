/*
 * XREFs of UsbhInstallMsOs20RegistryProperties @ 0x1C003375C
 * Callers:
 *     UsbhPdoPnp_QueryResourceRequirements @ 0x1C0056240 (UsbhPdoPnp_QueryResourceRequirements.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0031BEC (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C0031D14 (UsbhReleaseFdoPnpLock.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C0032980 (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhParseAndInstallRegistryValueDescriptors @ 0x1C0033A30 (UsbhParseAndInstallRegistryValueDescriptors.c)
 */

LONG __fastcall UsbhInstallMsOs20RegistryProperties(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  _DWORD *v4; // rsi
  LONG result; // eax
  char v6; // bl
  void *DeviceRegKey; // [rsp+40h] [rbp+8h] BYREF

  DeviceRegKey = 0LL;
  v4 = PdoExt((__int64)a2);
  UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 11, 829387629, 1);
  if ( UsbhExtPropDescSemaphorePresent(a2) || IoOpenDeviceRegistryKey(a2, 1u, 0x1F0000u, &DeviceRegKey) < 0 )
    return UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  v6 = UsbhParseAndInstallRegistryValueDescriptors(DeviceRegKey);
  ZwClose(DeviceRegKey);
  result = UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  if ( v6 == 1 )
    v4[355] |= 0x800u;
  return result;
}
