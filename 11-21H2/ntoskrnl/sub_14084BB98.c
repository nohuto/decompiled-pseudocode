/*
 * XREFs of sub_14084BB98 @ 0x14084BB98
 * Callers:
 *     sub_14084BB80 @ 0x14084BB80 (sub_14084BB80.c)
 *     sub_14085A678 @ 0x14085A678 (sub_14085A678.c)
 *     sub_140945F80 @ 0x140945F80 (sub_140945F80.c)
 *     sub_14096F074 @ 0x14096F074 (sub_14096F074.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IoQueueThreadIrp @ 0x140389E20 (IoQueueThreadIrp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074C9D8 @ 0x14074C9D8 (sub_14074C9D8.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_14084BC80 @ 0x14084BC80 (sub_14084BC80.c)
 *     sub_14084BCDC @ 0x14084BCDC (sub_14084BCDC.c)
 */

__int64 __fastcall sub_14084BB98(struct _FILE_OBJECT *Object, char a2)
{
  IRP *v4; // rax
  IRP *v5; // rbx
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  PDEVICE_OBJECT DeviceObject[8]; // [rsp+30h] [rbp-40h] BYREF
  PVOID Objecta; // [rsp+80h] [rbp+10h] BYREF

  memset(DeviceObject, 0, sizeof(DeviceObject));
  Objecta = 0LL;
  ObfReferenceObject(Object);
  DeviceObject[0] = IoGetRelatedDeviceObject(Object);
  LODWORD(DeviceObject[1]) = 1;
  BYTE4(DeviceObject[1]) = a2;
  DeviceObject[2] = (PDEVICE_OBJECT)Object;
  v4 = (IRP *)sub_14084BCDC(DeviceObject);
  v5 = v4;
  if ( v4 )
  {
    IoQueueThreadIrp(v4);
    sub_14077572C(1);
    v6 = IofCallDriver(DeviceObject[0], v5);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&DeviceObject[5], Executive, 0, 0, 0LL);
      v6 = (NTSTATUS)DeviceObject[3];
    }
    if ( v6 >= 0 && (int)sub_14074C9D8(Object, &Objecta) >= 0 )
    {
      LOBYTE(v7) = a2;
      sub_14084BC80(Objecta, v7);
      ObfDereferenceObject(Objecta);
    }
    sub_140775698(1);
    return (unsigned int)v6;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
}
