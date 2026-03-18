/*
 * XREFs of ViDmaInit @ 0x140ADD538
 * Callers:
 *     VfDmaPluginEntry @ 0x1405D1F90 (VfDmaPluginEntry.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C32D0 (ExInitializeNPagedLookasideListInternal.c)
 */

__int64 *ViDmaInit()
{
  __int64 *result; // rax

  if ( !ViAdapterListInitialized )
  {
    result = (__int64 *)&ViAdapterList;
    qword_140C369B0 = 0LL;
    ViAdapterList.Blink = &ViAdapterList;
    ViAdapterList.Flink = &ViAdapterList;
    ViAdapterListInitialized = 1;
  }
  if ( !ViDomainCommonBufferListInitialized )
  {
    result = &ViDomainCommonBufferList;
    qword_140C369F0 = 0LL;
    qword_140C369E8 = (__int64)&ViDomainCommonBufferList;
    ViDomainCommonBufferList = (__int64)&ViDomainCommonBufferList;
    ViDomainCommonBufferListInitialized = 1;
  }
  if ( !ViHalWaitBlockLookasideInitialized )
  {
    result = (__int64 *)ExInitializeNPagedLookasideListInternal(
                          (__int64)&ViHalWaitBlockLookaside,
                          0LL,
                          (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
                          512,
                          152,
                          1449943368,
                          16,
                          VfInitializedWithoutReboot);
    ViHalWaitBlockLookasideInitialized = 1;
  }
  ViVerifyDma = 1;
  if ( (unsigned int)HalPrivateDispatchTable >= 0x3A )
  {
    VfRealHalAllocateMapRegisters = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))off_140C01A00[0];
    result = (__int64 *)VfHalAllocateMapRegisters;
    off_140C01A00[0] = (__int64 (__fastcall *)())VfHalAllocateMapRegisters;
  }
  ViDoubleBufferDma = 1;
  return result;
}
