/*
 * XREFs of MmSecureVirtualMemory @ 0x1407BA890
 * Callers:
 *     RtlFileMapMapView @ 0x1403B1320 (RtlFileMapMapView.c)
 *     DifMmSecureVirtualMemoryWrapper @ 0x1405E79B0 (DifMmSecureVirtualMemoryWrapper.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1407BA8C0 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  __int64 v4; // r8

  v4 = 4LL;
  if ( ProbeMode == 2 )
    v4 = 2LL;
  return (HANDLE)MmSecureVirtualMemoryEx(Address, Size, v4);
}
