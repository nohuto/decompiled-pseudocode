/*
 * XREFs of IopFreeRelationList @ 0x14086898C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140867948 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x140868084 (PnpBuildRemovalRelationList.c)
 *     IopAllocateRelationList @ 0x1408689DC (IopAllocateRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x140881998 (PnpInvalidateRelationsInList.c)
 *     PipRemoveDevicesInRelationList @ 0x140881CBC (PipRemoveDevicesInRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140883540 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessCompletedEject @ 0x1409590A0 (PnpProcessCompletedEject.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140868B7C (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
