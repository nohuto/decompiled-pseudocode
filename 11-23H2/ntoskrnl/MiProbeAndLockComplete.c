/*
 * XREFs of MiProbeAndLockComplete @ 0x140238940
 * Callers:
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1403D55A0 (MmProbeAndLockSelectedPages.c)
 *     MmLockPhysicalPagesByVa @ 0x140A2D9A4 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiAddMdlTracker @ 0x14061CA3C (MiAddMdlTracker.c)
 *     MmUnlockPhysicalPagesByVa @ 0x140A2DAB0 (MmUnlockPhysicalPagesByVa.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v5; // r8
  struct _MDL *v6; // rdi
  unsigned __int64 v8; // rdx

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 104), v3);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), *(unsigned __int8 *)(a1 + 76));
  v6 = *(struct _MDL **)(a1 + 64);
  if ( (*(_BYTE *)(a1 + 72) & 0x40) == 0 && (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(*(_QWORD *)(a1 + 64));
  if ( a2 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x40) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 > *(_QWORD *)a1 )
        MmUnlockPhysicalPagesByVa(*(_QWORD *)a1, v8 - *(_QWORD *)a1, v5, *(unsigned int *)(a1 + 96));
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 1280LL),
        -((*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 12));
    }
    else
    {
      MmUnlockPages(v6);
    }
    ++dword_140C67F14;
  }
  return (unsigned int)a2;
}
