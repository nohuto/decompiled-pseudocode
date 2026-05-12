/*
 * XREFs of ?PartitionWrite@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0001560
 * Callers:
 *     <none>
 * Callees:
 *     ?PartitionIo@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0001590 (-PartitionIo@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall PartitionWrite(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  if ( (*((_DWORD *)a1->DeviceExtension + 10) & 8) == 0 )
    return PartitionIo(a1, a2);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741810;
  IofCompleteRequest(a2, 0);
  return -1073741810;
}
