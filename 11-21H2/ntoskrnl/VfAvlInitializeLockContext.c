/*
 * XREFs of VfAvlInitializeLockContext @ 0x14045F6C8
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140A7F132 (VfRemLockDeleteMemoryRange.c)
 *     VfTargetDriversDisableVerifier @ 0x140A8AAE0 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140A8AB50 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140A8AD1C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140A8AE08 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140A8B064 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140A8B190 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140A8B450 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140A8B588 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140A8B654 (ViTargetWMIRegister.c)
 *     VfDevObjIsDeviceRemoved @ 0x140A916B8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140A91728 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x140A91A50 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140A91AD0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140A91C30 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140A91EDC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140A91F88 (ViRemLockFindSurrogate.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140A9A640 (VfSuspectDriversGetVerifierInformation.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140A9B1BC (VfAvlDeleteAllTreeNodes.c)
 *     VfCheckForLookaside @ 0x140A9EFF8 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140A9F0C0 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140A9F1DC (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140AA0F00 (VerifierIoWMIRegistrationControl.c)
 *     VfCheckForResource @ 0x140AA144C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AA1590 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AA16A4 (VfTrackResource.c)
 * Callees:
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
