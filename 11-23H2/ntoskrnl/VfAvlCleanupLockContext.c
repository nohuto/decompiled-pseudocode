/*
 * XREFs of VfAvlCleanupLockContext @ 0x14020A34C
 * Callers:
 *     VfTargetDriversGetNode @ 0x140209F84 (VfTargetDriversGetNode.c)
 *     VfTargetDriversAdd @ 0x14020A190 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14020A7DC (VfTargetDriversRemove.c)
 *     VfTargetRecoverIoCallbacks @ 0x1405CF774 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x1405CF7C8 (VfTargetReplaceIoCallbacks.c)
 *     VfRemLockDeleteMemoryRange @ 0x140AC01B2 (VfRemLockDeleteMemoryRange.c)
 *     VfTargetDriversDisableVerifier @ 0x140ACB430 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140ACB4A0 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140ACB668 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140ACB754 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140ACB9B4 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140ACBAE0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140ACBBFC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140ACBDA0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140ACBED8 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140ACBFA4 (ViTargetWMIRegister.c)
 *     VfDevObjIsDeviceRemoved @ 0x140AD20C8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140AD2138 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x140AD2460 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140AD24E0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD2640 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD28EC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140AD2998 (ViRemLockFindSurrogate.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140ADA46C (VfSuspectDriversGetVerifierInformation.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140ADC250 (VfAvlDeleteAllTreeNodes.c)
 *     VfCheckForLookaside @ 0x140AE2198 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140AE2260 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE237C (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140AE40A0 (VerifierIoWMIRegistrationControl.c)
 *     VfCheckForResource @ 0x140AE43AC (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE44F0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE4604 (VfTrackResource.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14020A45C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
