/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1408503E0
 * Callers:
 *     FsRtlInitSystem @ 0x140B68494 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C5F568 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&stru_140C5F570);
}
