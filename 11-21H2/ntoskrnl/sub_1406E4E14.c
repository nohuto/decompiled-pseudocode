/*
 * XREFs of sub_1406E4E14 @ 0x1406E4E14
 * Callers:
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_1407730FC @ 0x1407730FC (sub_1407730FC.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     sub_14076E82C @ 0x14076E82C (sub_14076E82C.c)
 */

void __fastcall sub_1406E4E14(PDEVICE_OBJECT DeviceObject)
{
  char *DeviceNode; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx

  if ( DeviceObject )
    DeviceNode = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
  v4 = sub_14076E82C(DeviceNode + 40);
  ExReleaseResourceLite(&stru_140C44820);
  KeLeaveCriticalRegion();
  if ( v4 )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
