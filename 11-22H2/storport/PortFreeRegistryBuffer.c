/*
 * XREFs of PortFreeRegistryBuffer @ 0x1C0077D1C
 * Callers:
 *     RaidDeleteAdapter @ 0x1C003AB5C (RaidDeleteAdapter.c)
 *     StorPortFreeRegistryBuffer @ 0x1C0045E20 (StorPortFreeRegistryBuffer.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall PortFreeRegistryBuffer(__int64 a1)
{
  void *v2; // rdi

  if ( *(_DWORD *)a1 != 64 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
    return 3221225485LL;
  v2 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
  if ( !v2 )
    return 3221225485LL;
  memset_0(v2, 0, *(unsigned int *)(a1 + 40));
  ExFreePoolWithTag(v2, 0x42526C50u);
  *(_DWORD *)(a1 + 40) = 0;
  return 0LL;
}
