/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x14020A910
 * Callers:
 *     VfTargetDriversRemove @ 0x14020A7DC (VfTargetDriversRemove.c)
 *     ViFreeMapRegisterFile @ 0x140AC8AB0 (ViFreeMapRegisterFile.c)
 *     ViTargetTrackContiguousMemory @ 0x140ACBDA0 (ViTargetTrackContiguousMemory.c)
 *     ViDevObjRemove @ 0x140AD24E0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD28EC (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140AE2260 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE237C (VfLookasideDelete.c)
 *     VfCheckForResource @ 0x140AE43AC (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE44F0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE4604 (VfTrackResource.c)
 *     VfSpIoSetCompletionRoutineEx_Exit @ 0x140AE8690 (VfSpIoSetCompletionRoutineEx_Exit.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x14020A930 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(_SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
