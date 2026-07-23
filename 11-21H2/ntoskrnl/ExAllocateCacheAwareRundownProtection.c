/*
 * XREFs of ExAllocateCacheAwareRundownProtection @ 0x14074D200
 * Callers:
 *     sub_1403D981C @ 0x1403D981C (sub_1403D981C.c)
 *     sub_14074D028 @ 0x14074D028 (sub_14074D028.c)
 *     sub_14084EB98 @ 0x14084EB98 (sub_14084EB98.c)
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x1402D3250 (KeGetRecommendedSharedDataAlignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PEX_RUNDOWN_REF_CACHE_AWARE __stdcall ExAllocateCacheAwareRundownProtection(POOL_TYPE PoolType, ULONG PoolTag)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v5; // rbx
  unsigned int v6; // edi
  ULONG RecommendedSharedDataAlignment; // esi
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned int v12; // r8d
  int v13; // edx

  PoolWithTag = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)ExAllocatePoolWithTag(PoolType, 0x18uLL, PoolTag);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return v5;
  v6 = dword_140D06884;
  *((_DWORD *)PoolWithTag + 5) = dword_140D06884;
  if ( v6 <= 1 )
    RecommendedSharedDataAlignment = 8;
  else
    RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  *((_DWORD *)v5 + 4) = RecommendedSharedDataAlignment;
  v8 = (unsigned __int64)ExAllocatePoolWithTag(PoolType, RecommendedSharedDataAlignment * v6, PoolTag);
  if ( v8 )
  {
    v9 = *((_DWORD *)v5 + 5);
    if ( v9 <= 1 || (v10 = RecommendedSharedDataAlignment - 1, (v10 & v8) == 0) )
    {
      v11 = v8;
LABEL_9:
      v12 = 0;
      *((_QWORD *)v5 + 1) = v8;
      *(_QWORD *)v5 = v11;
      if ( v9 )
      {
        do
        {
          v13 = v12 % *((_DWORD *)v5 + 5);
          ++v12;
          *(_QWORD *)((unsigned int)(*((_DWORD *)v5 + 4) * v13) + *(_QWORD *)v5) = 0LL;
        }
        while ( v12 < *((_DWORD *)v5 + 5) );
      }
      return v5;
    }
    ExFreePoolWithTag((PVOID)v8, 0);
    v8 = (unsigned __int64)ExAllocatePoolWithTag(
                             PoolType,
                             RecommendedSharedDataAlignment * (*((_DWORD *)v5 + 5) + 1),
                             PoolTag);
    if ( v8 )
    {
      v9 = *((_DWORD *)v5 + 5);
      v11 = ~v10 & (v10 + v8);
      goto LABEL_9;
    }
  }
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
