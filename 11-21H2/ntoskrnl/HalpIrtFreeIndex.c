/*
 * XREFs of HalpIrtFreeIndex @ 0x140909FA0
 * Callers:
 *     HalpInterruptRemap @ 0x1403D57DC (HalpInterruptRemap.c)
 *     HalpInterruptUnmap @ 0x140908918 (HalpInterruptUnmap.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     HalpIommuFreeRemappingTableEntry @ 0x140510D20 (HalpIommuFreeRemappingTableEntry.c)
 *     HalpIrtReleaseDeviceAperture @ 0x14090A0D0 (HalpIrtReleaseDeviceAperture.c)
 */

__int64 __fastcall HalpIrtFreeIndex(unsigned int a1, ULONG a2, int a3)
{
  __int64 result; // rax
  ULONG v7; // edi
  unsigned int v8; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( HalpIrtTotalEntries )
  {
    v7 = a1 % HalpIrtEntriesPerRange;
    v8 = a1 / HalpIrtEntriesPerRange;
    ExAcquireFastMutex(&HalpIrtLock);
    RtlClearBits(&HalpIrtRanges + v8, v7, a2);
    KeReleaseGuardedMutex(&HalpIrtLock);
    if ( a3 == 3 && (HalpIrtAllocationFlags & 2) != 0 )
      HalpIommuFreeRemappingTableEntry(a1, a2);
    result = (unsigned int)HalpIrtAllocationFlags;
    if ( (HalpIrtAllocationFlags & 4) != 0 )
      return HalpIrtReleaseDeviceAperture(a1 / HalpIrtEntriesPerDeviceAperture, a2);
  }
  return result;
}
