/*
 * XREFs of CcPrivateVolumeCacheMapTelemetryCallback @ 0x140881320
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x1403D41A4 (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPrivateVolumeCacheMapTelemetryCallback(__int64 a1, __int64 a2)
{
  ++qword_140C5F8F0;
  qword_140C5F8F8 += *(unsigned int *)(a2 + 912);
  qword_140C5F900 += *(_QWORD *)(a2 + 992);
  qword_140C5F910 += *(unsigned int *)(a2 + 776);
  qword_140C5F920 += *(_QWORD *)(a2 + 1080);
  qword_140C5F928 += *(_QWORD *)(a2 + 1088);
  CcGetActiveWorkerCountInPartition(a1, a2, &qword_140C5F918);
  return 1;
}
