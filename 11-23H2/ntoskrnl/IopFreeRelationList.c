/*
 * XREFs of IopFreeRelationList @ 0x1408686FC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x140867DF4 (PnpBuildRemovalRelationList.c)
 *     IopAllocateRelationList @ 0x14086874C (IopAllocateRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x140881708 (PnpInvalidateRelationsInList.c)
 *     PipRemoveDevicesInRelationList @ 0x140881A2C (PipRemoveDevicesInRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1408832B0 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessCompletedEject @ 0x1409591F0 (PnpProcessCompletedEject.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x1408688EC (PiClearDeviceObjectList.c)
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
