/*
 * XREFs of PartitionForwardIrpSynchronously @ 0x1C001DBB8
 * Callers:
 *     PartitionIoctlQueryProperty @ 0x1C001C65C (PartitionIoctlQueryProperty.c)
 *     PartitionIoctlGetDeviceNumberEx @ 0x1C001DB38 (PartitionIoctlGetDeviceNumberEx.c)
 *     PartitionIoctlManageBypassIo @ 0x1C0025198 (PartitionIoctlManageBypassIo.c)
 * Callees:
 *     PartitionReferenceParent @ 0x1C00043DC (PartitionReferenceParent.c)
 */

__int64 __fastcall PartitionForwardIrpSynchronously(__int64 a1, IRP *a2)
{
  struct _DEVICE_OBJECT *v3; // rdi

  v3 = (struct _DEVICE_OBJECT *)PartitionReferenceParent(*(_QWORD *)(a1 + 64));
  IoForwardIrpSynchronously(v3, a2);
  LODWORD(a2) = a2->IoStatus.Status;
  ObfDereferenceObject(v3);
  return (unsigned int)a2;
}
