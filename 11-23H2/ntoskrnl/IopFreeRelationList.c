/*
 * XREFs of IopFreeRelationList @ 0x1408684BC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140867478 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x140867BB4 (PnpBuildRemovalRelationList.c)
 *     IopAllocateRelationList @ 0x14086850C (IopAllocateRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x1408814C8 (PnpInvalidateRelationsInList.c)
 *     PipRemoveDevicesInRelationList @ 0x1408817EC (PipRemoveDevicesInRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140883070 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessCompletedEject @ 0x140958FF0 (PnpProcessCompletedEject.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x1408686AC (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeRelationList(_QWORD *P)
{
  void *v1; // rdi

  if ( P )
  {
    v1 = (void *)*P;
    if ( *P )
    {
      PiClearDeviceObjectList(*P);
      ExFreePoolWithTag(v1, 0);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x54706E50u);
  }
}
