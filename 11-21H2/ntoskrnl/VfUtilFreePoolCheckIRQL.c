/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x1402DB870
 * Callers:
 *     VfTargetDriversRemove @ 0x1402DB738 (VfTargetDriversRemove.c)
 *     ViFreeMapRegisterFile @ 0x140A880B0 (ViFreeMapRegisterFile.c)
 *     ViTargetTrackContiguousMemory @ 0x140A8B450 (ViTargetTrackContiguousMemory.c)
 *     ViDevObjRemove @ 0x140A91AD0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140A91EDC (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140A9F0C0 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140A9F1DC (VfLookasideDelete.c)
 *     VfCheckForResource @ 0x140AA144C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AA1590 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AA16A4 (VfTrackResource.c)
 *     VfSpIoSetCompletionRoutineEx_Exit @ 0x140AA71F0 (VfSpIoSetCompletionRoutineEx_Exit.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1402DB890 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(struct _SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
