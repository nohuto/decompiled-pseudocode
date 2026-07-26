/*
 * XREFs of ??1?$unique_ptr@UNdisHistogramEntry@@U?$default_delete@UNdisHistogramEntry@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00744FC
 * Callers:
 *     ndisAllocateHistogramEntry @ 0x1C012E52C (ndisAllocateHistogramEntry.c)
 * Callees:
 *     ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x1C012E41C (--_GNdisHistogramEntry@@QEAAPEAXI@Z.c)
 */

void *__fastcall wistd::unique_ptr<NdisHistogramEntry,wistd::default_delete<NdisHistogramEntry>>::~unique_ptr<NdisHistogramEntry,wistd::default_delete<NdisHistogramEntry>>(
        void **a1,
        unsigned int a2)
{
  void *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return NdisHistogramEntry::`scalar deleting destructor'(result, a2);
  return result;
}
