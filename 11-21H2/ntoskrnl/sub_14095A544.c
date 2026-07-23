/*
 * XREFs of sub_14095A544 @ 0x14095A544
 * Callers:
 *     sub_140749ECC @ 0x140749ECC (sub_140749ECC.c)
 * Callees:
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoQueueThreadIrp @ 0x140389E20 (IoQueueThreadIrp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14084BCDC @ 0x14084BCDC (sub_14084BCDC.c)
 */

NTSTATUS __fastcall sub_14095A544(__int64 a1, char a2)
{
  IRP *v4; // rax
  IRP *v5; // rbx
  NTSTATUS result; // eax
  PDEVICE_OBJECT DeviceObject[9]; // [rsp+30h] [rbp-48h] BYREF

  memset(DeviceObject, 0, 0x40uLL);
  DeviceObject[0] = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(a1 + 32));
  LODWORD(DeviceObject[1]) = 6;
  BYTE4(DeviceObject[1]) = a2;
  v4 = sub_14084BCDC((__int64)DeviceObject);
  v5 = v4;
  if ( !v4 )
    return -1073741801;
  IoQueueThreadIrp(v4);
  result = IofCallDriver(DeviceObject[0], v5);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&DeviceObject[5], Executive, 0, 0, 0LL);
    return (NTSTATUS)DeviceObject[3];
  }
  return result;
}
