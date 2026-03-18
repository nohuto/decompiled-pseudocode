/*
 * XREFs of VrpRegistryUnload @ 0x140A72050
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1407C0E00 (EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x1409AC590 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  REGHANDLE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot(VrpSiloContextSlot);
  if ( (unsigned int)dword_140C04460 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04460, (unsigned __int8 *)byte_14003A2CD, 0LL, 0LL, 2u, &v2);
  v0 = qword_140C04480;
  qword_140C04480 = 0LL;
  dword_140C04460 = 0;
  return EtwUnregister(v0);
}
