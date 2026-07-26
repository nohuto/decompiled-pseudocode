/*
 * XREFs of ndisHistogramDeleteAllEntries @ 0x1C012EACC
 * Callers:
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x1C012085C (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x1C012E5D0 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 * Callees:
 *     ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x1C012E41C (--_GNdisHistogramEntry@@QEAAPEAXI@Z.c)
 */

_QWORD *ndisHistogramDeleteAllEntries()
{
  _DWORD *v0; // rbx
  _QWORD *result; // rax
  __int64 v2; // rcx

  v0 = qword_1C00F7708;
  while ( 1 )
  {
    result = *(_QWORD **)v0;
    if ( *(_DWORD **)v0 == v0 )
      break;
    if ( (_DWORD *)result[1] != v0 || (v2 = *result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *(_QWORD *)v0 = v2;
    *(_QWORD *)(v2 + 8) = v0;
    if ( result != (_QWORD *)16 )
      NdisHistogramEntry::`scalar deleting destructor'(result - 2);
  }
  v0[4] = 0;
  return result;
}
