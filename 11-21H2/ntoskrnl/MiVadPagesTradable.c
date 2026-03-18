/*
 * XREFs of MiVadPagesTradable @ 0x14031285C
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPagesTradable(__int64 a1)
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
  return 0LL;
}
