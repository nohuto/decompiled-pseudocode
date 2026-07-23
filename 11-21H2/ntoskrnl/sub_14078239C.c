/*
 * XREFs of sub_14078239C @ 0x14078239C
 * Callers:
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_14078239C(SIZE_T *a1, void *a2, __int64 a3, int *a4)
{
  PVOID PoolWithTag; // rsi
  int v5; // ebx

  PoolWithTag = 0LL;
  v5 = 0;
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
  if ( a1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a1, 0x76727152u);
    if ( !PoolWithTag )
      v5 = -1073741801;
  }
  if ( a4 )
    *a4 = v5;
  return PoolWithTag;
}
