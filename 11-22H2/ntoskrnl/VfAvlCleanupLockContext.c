/*
 * XREFs of VfAvlCleanupLockContext @ 0x14020A374
 * Callers:
 *     VfTargetDriversGetNode @ 0x140209FAC (VfTargetDriversGetNode.c)
 *     VfTargetDriversAdd @ 0x14020A1B8 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14020A7FC (VfTargetDriversRemove.c)
 *     VfTargetRecoverIoCallbacks @ 0x1405CF294 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x1405CF2E8 (VfTargetReplaceIoCallbacks.c)
 *     VfRemLockDeleteMemoryRange @ 0x140AC11C2 (VfRemLockDeleteMemoryRange.c)
 *     VfTargetDriversDisableVerifier @ 0x140ACC410 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140ACC480 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140ACC648 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140ACC734 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140ACC994 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140ACCAC0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140ACCBDC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140ACCD80 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140ACCEB8 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140ACCF84 (ViTargetWMIRegister.c)
 *     VfDevObjIsDeviceRemoved @ 0x140AD30A8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140AD3118 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x140AD3440 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140AD34C0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD3620 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD38CC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140AD3978 (ViRemLockFindSurrogate.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140ADB44C (VfSuspectDriversGetVerifierInformation.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140ADD230 (VfAvlDeleteAllTreeNodes.c)
 *     VfCheckForLookaside @ 0x140AE3178 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140AE3240 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE335C (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140AE5080 (VerifierIoWMIRegistrationControl.c)
 *     VfCheckForResource @ 0x140AE538C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE54D0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE55E4 (VfTrackResource.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14020A484 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v2 <= 0xFu
        && CurrentIrql >= 2u )
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
