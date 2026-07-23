/*
 * XREFs of CcPartitionTelemetryCallback @ 0x140880950
 * Callers:
 *     <none>
 * Callees:
 *     MmGetAvailablePagesForPartitionObject @ 0x14036E800 (MmGetAvailablePagesForPartitionObject.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403D1050 (CcForEachPrivateVolumeCacheMap.c)
 *     CcGetActiveWorkerCountInPartition @ 0x1403D41A4 (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPartitionTelemetryCallback(__int64 a1)
{
  __int64 v1; // r9

  ++qword_140C5F8E8;
  qword_140C5F908 += MmGetAvailablePagesForPartitionObject(*(_QWORD *)(a1 + 8));
  if ( CcEnablePerVolumeLazyWriter )
  {
    CcForEachPrivateVolumeCacheMap(
      v1,
      (__int64 (__fastcall *)(__int64, __int64, __int64))CcPrivateVolumeCacheMapTelemetryCallback,
      0LL);
  }
  else
  {
    qword_140C5F8F8 += *(unsigned int *)(v1 + 976);
    qword_140C5F900 += *(_QWORD *)(v1 + 1056);
    qword_140C5F910 += *(unsigned int *)(v1 + 840);
    qword_140C5F920 += *(_QWORD *)(v1 + 1144);
    qword_140C5F928 += *(_QWORD *)(v1 + 1152);
    CcGetActiveWorkerCountInPartition(v1, 0LL, &qword_140C5F918);
  }
  return 1;
}
