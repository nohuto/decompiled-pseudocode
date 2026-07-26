/*
 * XREFs of ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x1C0161634
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     ndisGetProcessorInfo @ 0x1C0162318 (ndisGetProcessorInfo.c)
 */

__int64 ndisCpuInitializeSubsystemPhase2(void)
{
  int ProcessorInfo; // ebx

  ProcessorInfo = ndisGetProcessorInfo();
  if ( ProcessorInfo < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_a280002375d0303e102e31d262e8bddb_Traceguids);
    return (unsigned int)ProcessorInfo;
  }
  else
  {
    qsort(ndisRssProcessors, (unsigned int)ndisRssCpuCount, 4uLL, ndisCompareProcNumInit);
    qword_1C00F5648 = (__int64)KeRegisterProcessorChangeCallback(
                                 (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                 0LL,
                                 0);
    return qword_1C00F5648 == 0 ? 0xC000009A : 0;
  }
}
