/*
 * XREFs of InitEnergyCountersOnCurrentProcessor @ 0x1C001FF10
 * Callers:
 *     <none>
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0001ED0 (GetDevExtFromIndex.c)
 *     InitCoreProcessorSetAffinity @ 0x1C001FE70 (InitCoreProcessorSetAffinity.c)
 *     IsEnergyMsrSupported @ 0x1C0020058 (IsEnergyMsrSupported.c)
 *     IsRaplSupported @ 0x1C00200E0 (IsRaplSupported.c)
 */

__int64 InitEnergyCountersOnCurrentProcessor()
{
  unsigned int Number; // esi
  LARGE_INTEGER *v1; // rdi
  int inited; // ebx
  unsigned __int64 v3; // rax
  __int64 DevExtFromIndex; // rax
  char v5; // bp
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v7; // rax
  void *v8; // rax

  Number = KeGetPcr()->Prcb.Number;
  v1 = *(LARGE_INTEGER **)(GetDevExtFromIndex(Number) + 368);
  if ( (unsigned __int8)IsRaplSupported() && (unsigned __int8)IsEnergyMsrSupported() )
  {
    inited = InitCoreProcessorSetAffinity();
    if ( inited >= 0 )
    {
      v3 = __readmsr(0xC001029A);
      v1->LowPart = 1;
      v1[2].QuadPart = (unsigned int)v3;
      v1[4].QuadPart = (unsigned int)v3;
      v1[3].QuadPart = (unsigned int)v3;
      DevExtFromIndex = GetDevExtFromIndex(KeGetPcr()->Prcb.Number);
      if ( (unsigned int)RtlNumberOfSetBitsUlongPtr(*(_QWORD *)(DevExtFromIndex + 1216)) <= 1 )
      {
        v5 = 0;
      }
      else
      {
        v5 = 1;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v1[14] = PerformanceCounter;
        v1[16] = PerformanceCounter;
        v1[15] = PerformanceCounter;
      }
      if ( !Number )
      {
        v7 = __readmsr(0xC0010299);
        HIBYTE(word_1C0012D98) = 1;
        LOBYTE(word_1C0012D98) = BYTE1(v7) & 0x1F;
        WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = BYTE1(v7) & 0x1F;
        if ( v5 )
        {
          qword_1C0012C90[0] = (__int64)SnapEnergyCountersAndTimestamp;
          v8 = ComputeHyperThreadedProcessorEnergyUsingMsr;
        }
        else
        {
          qword_1C0012C90[0] = (__int64)SnapEnergyCounters;
          v8 = ComputeProcessorEnergyUsingMsr;
        }
        qword_1C0012C88[0] = (__int64)v8;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)inited;
}
