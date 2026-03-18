/*
 * XREFs of UsbhPublishDualRoleFeaturesProperty @ 0x1C005738C
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0054DA0 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

void __fastcall UsbhPublishDualRoleFeaturesProperty(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rdi
  NTSTATUS v3; // eax
  int Data; // [rsp+58h] [rbp+10h] BYREF

  v2 = PdoExt((__int64)Pdo);
  Data = v2[762];
  v3 = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbDualRoleFeatures, 0, 0, 7u, 4u, &Data);
  if ( v3 < 0 )
    Log(*((_QWORD *)v2 + 148), 256, 1685221425, v3, (__int64)Pdo);
}
