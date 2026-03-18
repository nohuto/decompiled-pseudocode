/*
 * XREFs of VfAvlCleanupLockContext @ 0x14020A34C
 * Callers:
 *     VfTargetDriversGetNode @ 0x140209F84 (VfTargetDriversGetNode.c)
 *     VfTargetDriversAdd @ 0x14020A190 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14020A7DC (VfTargetDriversRemove.c)
 *     VfTargetRecoverIoCallbacks @ 0x1405CF204 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x1405CF258 (VfTargetReplaceIoCallbacks.c)
 *     VfRemLockDeleteMemoryRange @ 0x140AC01C2 (VfRemLockDeleteMemoryRange.c)
 *     VfTargetDriversDisableVerifier @ 0x140ACB440 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140ACB4B0 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140ACB678 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140ACB764 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140ACB9C4 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140ACBAF0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140ACBC0C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140ACBDB0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140ACBEE8 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140ACBFB4 (ViTargetWMIRegister.c)
 *     VfDevObjIsDeviceRemoved @ 0x140AD20D8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140AD2148 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x140AD2470 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140AD24F0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD2650 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD28FC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140AD29A8 (ViRemLockFindSurrogate.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140ADA47C (VfSuspectDriversGetVerifierInformation.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140ADC260 (VfAvlDeleteAllTreeNodes.c)
 *     VfCheckForLookaside @ 0x140AE21A8 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140AE2270 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE238C (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140AE40B0 (VerifierIoWMIRegistrationControl.c)
 *     VfCheckForResource @ 0x140AE43BC (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE4500 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE4614 (VfTrackResource.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14020A45C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall VfAvlCleanupLockContext(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a1, a1);
  if ( (*(_BYTE *)(a1 + 9) & 1) != 0 )
  {
    v2 = *(unsigned __int8 *)(a1 + 8);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
}
