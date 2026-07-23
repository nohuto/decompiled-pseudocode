/*
 * XREFs of IopProbeAndLockPages_1 @ 0x140556190
 * Callers:
 *     NtQueryEaFile @ 0x1407CA290 (NtQueryEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945CC0 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14094AE60 (NtSetEaFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14061D804 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_1(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MiProbeAndLockPages(a1, a2 != 0, a3 != 0);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
