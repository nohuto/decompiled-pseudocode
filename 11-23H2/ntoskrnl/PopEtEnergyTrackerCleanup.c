/*
 * XREFs of PopEtEnergyTrackerCleanup @ 0x14099885C
 * Callers:
 *     PopEtEnergyTrackerDelete @ 0x140998A10 (PopEtEnergyTrackerDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopEtAggregateKeyCleanup @ 0x1407B2BC8 (PopEtAggregateKeyCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1407B9450 (PopEtEnergyTrackerCleanupAggregates.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtEnergyTrackerCleanup(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rcx
  __int64 *v11; // rsi
  __int64 *v12; // rdi
  void *v13; // rcx
  __int64 *v15; // rbp
  __int64 *i; // rcx

  PopAcquireRwLockExclusive(PopEtGlobals + 16);
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = *(_QWORD **)(a1 + 8), *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  PopReleaseRwLock((__int64 *)(PopEtGlobals + 16));
  PopEtEnergyTrackerCleanupAggregates(a1, v4, v5, v6);
  v10 = *(void **)(a1 + 56);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x54456F50u);
  v11 = *(__int64 **)(a1 + 72);
  v12 = v11;
  while ( v12 )
  {
    v12 = (__int64 *)*v12;
    if ( ((unsigned __int8)v12 & 1) != 0 )
      break;
LABEL_15:
    if ( !v12 )
      goto LABEL_12;
    v15 = v12;
    for ( i = v11; (*i & 1) == 0; i = (__int64 *)*i )
    {
      if ( (__int64 *)*i == v12 )
      {
        *i = *v12;
        --*(_DWORD *)(a1 + 64);
        *v12 |= 0x8000000000000002uLL;
        v12 = i;
        goto LABEL_22;
      }
    }
    v15 = 0LL;
LABEL_22:
    PopEtAggregateKeyCleanup(v15 + 2, v7, v8, v9);
    ExFreePoolWithTag(v15, 0x54456F50u);
  }
  ++v11;
  v7 = *(_QWORD *)(a1 + 72) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 68) >> 5);
  while ( (unsigned __int64)v11 < v7 )
  {
    v12 = (__int64 *)*v11;
    if ( (*v11 & 1) == 0 )
      goto LABEL_15;
    ++v11;
  }
LABEL_12:
  v13 = *(void **)(a1 + 72);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x54456F50u);
  return PopEtAggregateKeyCleanup((__int64 *)(a1 + 96), v7, v8, v9);
}
