/*
 * XREFs of PnpRestartDeviceNode @ 0x140958CBC
 * Callers:
 *     PiRestartRemovalRelations @ 0x1408637DC (PiRestartRemovalRelations.c)
 *     PiRestartDevice @ 0x140864AC0 (PiRestartDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867478 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessClearDeviceProblem @ 0x140959370 (PiProcessClearDeviceProblem.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140963750 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1409719C8 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AE84 (PipSetDevNodeState.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     PpDevNodeUnlockTree @ 0x1406C98FC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C9990 (PpDevNodeLockTree.c)
 *     PipClearDevNodeUserFlags @ 0x1407933E0 (PipClearDevNodeUserFlags.c)
 *     PipClearDevNodeFlags @ 0x14079805C (PipClearDevNodeFlags.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRestartDeviceNode(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  void *v4; // rcx

  PpDevNodeLockTree(4);
  if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
  {
    PipClearDevNodeUserFlags(a1, 5);
    PipClearDevNodeFlags(a1, 1081344);
    *(_DWORD *)(a1 + 704) &= 0xFFFE3C03;
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 300);
    *(_DWORD *)(a1 + 296) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    if ( (unsigned int)(v3 - 769) > 1 )
    {
      PipClearDevNodeFlags(a1, 2082475264);
      if ( *(_WORD *)(a1 + 56) )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
        *(_DWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v4 = *(void **)(a1 + 440);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(a1 + 440) = 0LL;
        PipClearDevNodeFlags(a1, 512);
      }
      ExReleaseFastMutex(&PiResourceListLock);
    }
    *(_DWORD *)(a1 + 660) = -1;
    PipSetDevNodeState(a1, 769);
  }
  else
  {
    v2 = -1073741823;
  }
  PpDevNodeUnlockTree(4);
  return v2;
}
