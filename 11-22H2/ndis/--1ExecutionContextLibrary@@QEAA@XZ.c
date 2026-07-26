/*
 * XREFs of ??1ExecutionContextLibrary@@QEAA@XZ @ 0x1C0140908
 * Callers:
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x1C012E5D0 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 * Callees:
 *     KLoaderDereferenceModule @ 0x1C00CFD80 (KLoaderDereferenceModule.c)
 */

void __fastcall ExecutionContextLibrary::~ExecutionContextLibrary(ExecutionContextLibrary *this)
{
  struct KLOADER_MODULE_REFERENCE__ *v1; // rcx

  v1 = (struct KLOADER_MODULE_REFERENCE__ *)*((_QWORD *)this + 15);
  if ( v1 )
    KLoaderDereferenceModule(v1);
}
