/*
 * XREFs of ??1?$unique_ptr@UNdisHistogramGlobal@@U?$default_delete@UNdisHistogramGlobal@@@wistd@@@wistd@@QEAA@XZ @ 0x1C0074540
 * Callers:
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x1C012081C (-ndisReinitializeHistograms@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<NdisHistogramGlobal,wistd::default_delete<NdisHistogramGlobal>>::~unique_ptr<NdisHistogramGlobal,wistd::default_delete<NdisHistogramGlobal>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    ExFreePoolWithTag(v1, 0x6768444Eu);
}
