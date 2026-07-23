/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x140377200
 * Callers:
 *     HalEnumerateProcessors @ 0x140376230 (HalEnumerateProcessors.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x140376AF8 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalStartNextProcessor @ 0x140376C50 (HalStartNextProcessor.c)
 *     HalpTimerSelectRoles @ 0x14037A44C (HalpTimerSelectRoles.c)
 *     HalpTscReserveResources @ 0x1403B1F28 (HalpTscReserveResources.c)
 *     HalStartDynamicProcessor @ 0x140505140 (HalStartDynamicProcessor.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14050B9D0 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x14051D2CC (EmonAllocateResources.c)
 *     HalpTscReportSyncStatus @ 0x140861D34 (HalpTscReportSyncStatus.c)
 *     EmonInitializeProfiling @ 0x140A896A0 (EmonInitializeProfiling.c)
 *     HalpMcaInitializePcrContext @ 0x140A90308 (HalpMcaInitializePcrContext.c)
 *     EmonCompleteInitializeProfiling @ 0x140A91090 (EmonCompleteInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x140A979E4 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x140A985F0 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140B757EC (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FA40 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x14041DCB0 (ZwQueryLicenseValue.c)
 */

__int64 HalpQueryMaximumRegisteredProcessorCount()
{
  __int64 result; // rax
  int v1; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG ResultDataSize; // [rsp+68h] [rbp+28h] BYREF
  ULONG Type; // [rsp+70h] [rbp+30h] BYREF

  ResultDataSize = 0;
  Type = 0;
  Data = 0;
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
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && ResultDataSize == 4
      && Type == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      Data *= CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
      if ( MaximumProcessorCount > Data )
        MaximumProcessorCount = Data;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140D0CE44, MaximumProcessorCount);
  }
  return result;
}
