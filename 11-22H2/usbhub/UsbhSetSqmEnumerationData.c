/*
 * XREFs of UsbhSetSqmEnumerationData @ 0x1C0046EC8
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0054DA0 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0046D44 (UsbhSetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhSetSqmEnumerationData(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  __int64 result; // rax

  v2 = PdoExt((__int64)DeviceObject);
  if ( v2[706] )
    UsbhSetPdoRegistryParameter(DeviceObject, L"MsOs20Flags", 4u, v2 + 706, 4u);
  result = UsbhGetPortData(*((_QWORD *)v2 + 148), *((_WORD *)v2 + 714));
  if ( result )
    return UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationRetryCount", 4u, (PVOID)(result + 544), 4u);
  return result;
}
