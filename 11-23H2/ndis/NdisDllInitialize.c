/*
 * XREFs of NdisDllInitialize @ 0x1C0031B90
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     ?NdispRegisterShim@@YAXXZ @ 0x1C011FCB0 (-NdispRegisterShim@@YAXXZ.c)
 *     ?ndisCpuInitializeSubsystemPhase1@@YAXXZ @ 0x1C01629F0 (-ndisCpuInitializeSubsystemPhase1@@YAXXZ.c)
 *     ?ndisInitializePerProcessorSlotAllocator@@YAXXZ @ 0x1C0162A3C (-ndisInitializePerProcessorSlotAllocator@@YAXXZ.c)
 */

__int64 NdisDllInitialize()
{
  unsigned int v0; // ebx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  signed __int32 v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  DestinationString = 0LL;
  v3 = 0;
  if ( !ndisDllInitialized )
  {
    ndisDllInitialized = 1;
    ndisCpuInitializeSubsystemPhase1();
    ndisMaxCacheLineSize = KeGetRecommendedSharedDataAlignment();
    if ( ndisMaxCacheLineSize < 0x40 )
      ndisMaxCacheLineSize = 64;
    ndisInitializePerProcessorSlotAllocator();
    if ( _InterlockedIncrement(&v3) == 1 )
      NdispRegisterShim();
    if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      qword_1C00F7840 = ExAllocatePool2(64LL, 520LL * ndisMaxNumberOfProcessors, 538985550);
      if ( !qword_1C00F7840 )
        v0 = -1073741801;
    }
    RtlInitUnicodeString(&DestinationString, L"MmGetSystemRoutineAddressEx");
    ndisGetSystemRoutineAddressEx = (void *(*)(struct _UNICODE_STRING *, char *))MmGetSystemRoutineAddress(&DestinationString);
  }
  return v0;
}
