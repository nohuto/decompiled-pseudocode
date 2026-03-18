/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x140377060
 * Callers:
 *     HalEnumerateProcessors @ 0x140376090 (HalEnumerateProcessors.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x140376958 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalStartNextProcessor @ 0x140376AB0 (HalStartNextProcessor.c)
 *     HalpTimerSelectRoles @ 0x14037A2AC (HalpTimerSelectRoles.c)
 *     HalpTscReserveResources @ 0x1403B1D48 (HalpTscReserveResources.c)
 *     HalStartDynamicProcessor @ 0x140504BF0 (HalStartDynamicProcessor.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14050B480 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x14051CD7C (EmonAllocateResources.c)
 *     HalpTscReportSyncStatus @ 0x140861AF4 (HalpTscReportSyncStatus.c)
 *     EmonInitializeProfiling @ 0x140A896A0 (EmonInitializeProfiling.c)
 *     HalpMcaInitializePcrContext @ 0x140A90488 (HalpMcaInitializePcrContext.c)
 *     EmonCompleteInitializeProfiling @ 0x140A91210 (EmonCompleteInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x140A97B74 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x140A98780 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140B757EC (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x14037F8A0 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x14041D920 (ZwQueryLicenseValue.c)
 */

__int64 HalpQueryMaximumRegisteredProcessorCount()
{
  __int64 result; // rax
  int v1; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 v5; // [rsp+60h] [rbp+20h] BYREF
  int v6; // [rsp+68h] [rbp+28h] BYREF
  int v7; // [rsp+70h] [rbp+30h] BYREF

  v6 = 0;
  v7 = 0;
  v5 = 0;
  DestinationString = 0LL;
  _m_prefetchw(&dword_140D0CE44);
  LODWORD(result) = dword_140D0CE44;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140D0CE44, result, result);
  }
  while ( v1 != (_DWORD)result );
  if ( !(_DWORD)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount > 0x800 )
      MaximumProcessorCount = 2048;
    RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
    if ( (int)ZwQueryLicenseValue(&DestinationString, &v7, &v5, 4LL, &v6) >= 0 && v6 == 4 && v7 == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 *= CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
      if ( MaximumProcessorCount > v5 )
        MaximumProcessorCount = v5;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140D0CE44, MaximumProcessorCount);
  }
  return result;
}
