/*
 * XREFs of KLoaderDereferenceModule @ 0x1C00CFDA0
 * Callers:
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x1C012E590 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ??1ExecutionContextLibrary@@QEAA@XZ @ 0x1C01408E8 (--1ExecutionContextLibrary@@QEAA@XZ.c)
 *     ??1NdisPoll@@QEAA@XZ @ 0x1C0140A74 (--1NdisPoll@@QEAA@XZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C0141390 (-DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z.c)
 */

void __fastcall KLoaderDereferenceModule(struct KLOADER_MODULE_REFERENCE__ *a1)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x10u,
      (struct _GUID *)&WPP_cd4e9b2dabae38dbd591d3804b6301c7_Traceguids,
      a1);
  KLoader::DereferenceModule(a1, a1);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_cd4e9b2dabae38dbd591d3804b6301c7_Traceguids);
}
