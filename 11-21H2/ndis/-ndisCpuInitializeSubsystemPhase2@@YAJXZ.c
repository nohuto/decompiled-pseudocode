/*
 * XREFs of ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x1C0154E4C
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ndisGetProcessorInfo @ 0x1C0154EC0 (ndisGetProcessorInfo.c)
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
        (struct _GUID *)&WPP_4b855e46533b35be5b26cddd546981b7_Traceguids);
    return (unsigned int)ProcessorInfo;
  }
  else
  {
    qsort(ndisRssProcessors, (unsigned int)ndisRssCpuCount, 4uLL, ndisCompareProcNumInit);
    qword_1C00EC618 = (__int64)KeRegisterProcessorChangeCallback(
                                 (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                 0LL,
                                 0);
    return qword_1C00EC618 == 0 ? 0xC000009A : 0;
  }
}
