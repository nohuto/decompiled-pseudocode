/*
 * XREFs of VrpRegistryUnload @ 0x140A72300
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x1403050A0 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1407C10D0 (EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x1409AC790 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  REGHANDLE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot(VrpSiloContextSlot);
  if ( (unsigned int)dword_140C04420 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04420, (unsigned __int8 *)byte_14003A390, 0LL, 0LL, 2u, &v2);
  v0 = qword_140C04440;
  qword_140C04440 = 0LL;
  dword_140C04420 = 0;
  return EtwUnregister(v0);
}
