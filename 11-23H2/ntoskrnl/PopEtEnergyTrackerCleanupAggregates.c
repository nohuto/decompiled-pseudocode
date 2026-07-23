/*
 * XREFs of PopEtEnergyTrackerCleanupAggregates @ 0x1407B9450
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x1407B86AC (PopEtEnergyTrackerQuery.c)
 *     PopEtEnergyTrackerCleanup @ 0x14099885C (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     PopEtAggregateKeyCleanup @ 0x1407B2BC8 (PopEtAggregateKeyCleanup.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall PopEtEnergyTrackerCleanupAggregates(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  __int64 *v6; // rbx
  __int64 *result; // rax
  __int64 *v8; // rbp
  __int64 *i; // rcx

  v4 = *(__int64 **)(a1 + 56);
  v6 = v4;
  while ( v6 )
  {
    v6 = (__int64 *)*v6;
    if ( ((unsigned __int8)v6 & 1) != 0 )
      break;
LABEL_7:
    result = v6;
    if ( !v6 )
      return result;
    v8 = v6;
    for ( i = v4; (*i & 1) == 0; i = (__int64 *)*i )
    {
      if ( (__int64 *)*i == v6 )
      {
        *i = *v6;
        --*(_DWORD *)(a1 + 48);
        *v6 |= 0x8000000000000002uLL;
        v6 = i;
        goto LABEL_12;
      }
    }
    v8 = 0LL;
LABEL_12:
    if ( v8 == (__int64 *)(a1 + 80) )
    {
      *(_DWORD *)(a1 + 636) &= ~4u;
      memset((void *)(a1 + 128), 0, 0x1C8uLL);
    }
    else
    {
      PopEtAggregateKeyCleanup(v8 + 2, a2, a3, a4);
      ExFreePoolWithTag(v8, 0x54456F50u);
    }
  }
  ++v4;
  result = *(__int64 **)(a1 + 56);
  a2 = (unsigned __int64)&result[(unsigned __int64)*(unsigned int *)(a1 + 52) >> 5];
  while ( (unsigned __int64)v4 < a2 )
  {
    v6 = (__int64 *)*v4;
    if ( (*v4 & 1) == 0 )
      goto LABEL_7;
    ++v4;
  }
  return result;
}
