/*
 * XREFs of sub_14069FB88 @ 0x14069FB88
 * Callers:
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_14069E368 @ 0x14069E368 (sub_14069E368.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14069FB88(__int64 a1, void *a2)
{
  PVOID PoolWithTag; // rdi
  __int64 v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(*(_DWORD *)(a1 + 2920) + 1), 0x76456D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v5 = *(unsigned int *)(a1 + 2920);
  if ( (_DWORD)v5 )
  {
    memmove(PoolWithTag, *(const void **)(a1 + 2928), 8 * v5);
    ExFreePoolWithTag(*(PVOID *)(a1 + 2928), 0);
    v5 = *(unsigned int *)(a1 + 2920);
  }
  *(_QWORD *)(a1 + 2928) = PoolWithTag;
  *((_QWORD *)PoolWithTag + v5) = a2;
  ++*(_DWORD *)(a1 + 2920);
  ObfReferenceObject(a2);
  return 0LL;
}
