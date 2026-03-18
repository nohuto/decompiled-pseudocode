/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x140274B50
 * Callers:
 *     MiVadSupportsCombine @ 0x1402171A0 (MiVadSupportsCombine.c)
 *     MmOutSwapWorkingSet @ 0x140342000 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1406181CC (MiIsVadEligibleForCommitRelease.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C0A4 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A4A8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A5004 (MiProcessVaRangesInfoClass.c)
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
