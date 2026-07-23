/*
 * XREFs of FsRtlInitializeDedupChange @ 0x140850414
 * Callers:
 *     FsRtlInitSystem @ 0x140B68494 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeDedupChange()
{
  qword_140C5F5E8 = (__int64)&FsRtlDedupChangeData;
  FsRtlDedupChangeData = (__int64)&FsRtlDedupChangeData;
  return ExInitializeResourceLite(&Resource);
}
