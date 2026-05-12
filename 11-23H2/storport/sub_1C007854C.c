/*
 * XREFs of sub_1C007854C @ 0x1C007854C
 * Callers:
 *     sub_1C003B11C @ 0x1C003B11C (sub_1C003B11C.c)
 *     StorPortFreeRegistryBuffer @ 0x1C00463F0 (StorPortFreeRegistryBuffer.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C007854C(__int64 a1)
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
