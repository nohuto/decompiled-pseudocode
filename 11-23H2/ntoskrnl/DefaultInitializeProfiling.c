/*
 * XREFs of DefaultInitializeProfiling @ 0x140A95980
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 */

__int64 DefaultInitializeProfiling()
{
  unsigned int Number; // edx

  Number = KeGetPcr()->Prcb.Number;
  if ( !Number )
  {
    HalpProfileSourceDescriptorListLock = 0LL;
    HalpNumberOfGpCounters = 0;
    HalpProfileIntervalLimits = (__int64)DefaultProfileIntervalLimits;
    qword_140C08C78 = (__int64)&HalpProfileSourceDescriptorListHead;
    qword_140C08C80 = (__int64)&HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListHead = (__int64)&qword_140C08C78;
    qword_140C63128 = (__int64)&qword_140C08C78;
    DefaultCounterStatusPtr = (__int64)&DefaultCounterStatus;
    HalpCounterStatus = (__int64)&DefaultCounterStatusPtr;
    HalpProfileSourceDescriptorCount = 1;
    HalpNumberOfFixedCounters = 1;
    HalpNumberOfCounters = 1;
    dword_140C621D8 = 3;
  }
  return KeAddProcessorAffinityEx(word_140C08C90, Number);
}
