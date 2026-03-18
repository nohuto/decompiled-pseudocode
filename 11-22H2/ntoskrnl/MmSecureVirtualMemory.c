/*
 * XREFs of MmSecureVirtualMemory @ 0x1407BAE20
 * Callers:
 *     RtlFileMapMapView @ 0x1403B0C90 (RtlFileMapMapView.c)
 *     DifMmSecureVirtualMemoryWrapper @ 0x1405E7A40 (DifMmSecureVirtualMemoryWrapper.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1407BAE50 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  __int64 v4; // r8

  v4 = 4LL;
  if ( ProbeMode == 2 )
    v4 = 2LL;
  return (HANDLE)MmSecureVirtualMemoryEx(Address, Size, v4);
}
