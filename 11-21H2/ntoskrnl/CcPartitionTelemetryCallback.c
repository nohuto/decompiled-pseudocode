/*
 * XREFs of CcPartitionTelemetryCallback @ 0x1406E14E0
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x140258114 (CcGetActiveWorkerCountInPartition.c)
 *     MmGetAvailablePagesForPartitionObject @ 0x1402581BC (MmGetAvailablePagesForPartitionObject.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x14053C3E4 (CcForEachPrivateVolumeCacheMap.c)
 */

char __fastcall CcPartitionTelemetryCallback(__int64 a1)
{
  __int64 v1; // r9

  ++qword_140C49908;
  qword_140C49928 += MmGetAvailablePagesForPartitionObject(*(_QWORD *)(a1 + 8));
  if ( CcEnablePerVolumeLazyWriter == 1 )
  {
    CcForEachPrivateVolumeCacheMap(
      v1,
      (__int64 (__fastcall *)(__int64, _QWORD *, __int64))CcPrivateVolumeCacheMapTelemetryCallback,
      0LL);
  }
  else
  {
    qword_140C49918 += *(unsigned int *)(v1 + 912);
    qword_140C49920 += *(_QWORD *)(v1 + 992);
    qword_140C49930 += *(unsigned int *)(v1 + 776);
    qword_140C49940 += *(_QWORD *)(v1 + 1080);
    qword_140C49948 += *(_QWORD *)(v1 + 1088);
    CcGetActiveWorkerCountInPartition(v1, 0LL, &qword_140C49938);
  }
  return 1;
}
