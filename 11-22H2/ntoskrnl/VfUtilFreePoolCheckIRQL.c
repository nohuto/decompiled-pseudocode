/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x14020A930
 * Callers:
 *     VfTargetDriversRemove @ 0x14020A7FC (VfTargetDriversRemove.c)
 *     ViFreeMapRegisterFile @ 0x140AC9A90 (ViFreeMapRegisterFile.c)
 *     ViTargetTrackContiguousMemory @ 0x140ACCD80 (ViTargetTrackContiguousMemory.c)
 *     ViDevObjRemove @ 0x140AD34C0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD38CC (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140AE3240 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE335C (VfLookasideDelete.c)
 *     VfCheckForResource @ 0x140AE538C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE54D0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE55E4 (VfTrackResource.c)
 *     VfSpIoSetCompletionRoutineEx_Exit @ 0x140AE9670 (VfSpIoSetCompletionRoutineEx_Exit.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x14020A950 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(_SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
