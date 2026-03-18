/*
 * XREFs of VfAvlInitializeLockContext @ 0x1404664A8
 * Callers:
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
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
