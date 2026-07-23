/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x140274DE0
 * Callers:
 *     MiVadSupportsCombine @ 0x1402171A0 (MiVadSupportsCombine.c)
 *     MmOutSwapWorkingSet @ 0x140342290 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14061871C (MiIsVadEligibleForCommitRelease.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C5F4 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiAllocateVirtualMemory @ 0x1406F7430 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A6A8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A51F4 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPrivateCommit(__int64 a1)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x200000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( (v2 || (*(_DWORD *)(a1 + 64) & 0x1000000) == 0) && (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 )
      return 1LL;
  }
  else if ( !v2 || (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000 )
  {
    return 1LL;
  }
  return (*(_DWORD *)(a1 + 48) & 0x70) == 64;
}
