/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x140850FF0
 * Callers:
 *     FsRtlInitSystem @ 0x140B693F0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C5F628 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&stru_140C5F630);
}
