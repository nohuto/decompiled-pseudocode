/*
 * XREFs of VfAvlInitializeLockContext @ 0x1404668A8
 * Callers:
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
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
