/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x14020A910
 * Callers:
 *     VfTargetDriversRemove @ 0x14020A7DC (VfTargetDriversRemove.c)
 *     ViFreeMapRegisterFile @ 0x140AC8AC0 (ViFreeMapRegisterFile.c)
 *     ViTargetTrackContiguousMemory @ 0x140ACBDB0 (ViTargetTrackContiguousMemory.c)
 *     ViDevObjRemove @ 0x140AD24F0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD28FC (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140AE2270 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE238C (VfLookasideDelete.c)
 *     VfCheckForResource @ 0x140AE43BC (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE4500 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE4614 (VfTrackResource.c)
 *     VfSpIoSetCompletionRoutineEx_Exit @ 0x140AE86A0 (VfSpIoSetCompletionRoutineEx_Exit.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x14020A930 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(struct _SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
