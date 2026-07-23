/*
 * XREFs of MmSecureVirtualMemory @ 0x1407BAB60
 * Callers:
 *     RtlFileMapMapView @ 0x1403B1500 (RtlFileMapMapView.c)
 *     DifMmSecureVirtualMemoryWrapper @ 0x1405E7F20 (DifMmSecureVirtualMemoryWrapper.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1407BAB90 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  __int64 v4; // r8

  v4 = 4LL;
  if ( ProbeMode == 2 )
    v4 = 2LL;
  return (HANDLE)MmSecureVirtualMemoryEx(Address, Size, v4);
}
