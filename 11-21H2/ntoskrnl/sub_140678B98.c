/*
 * XREFs of sub_140678B98 @ 0x140678B98
 * Callers:
 *     sub_140679480 @ 0x140679480 (sub_140679480.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1409B0A5C @ 0x1409B0A5C (sub_1409B0A5C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140678C2C @ 0x140678C2C (sub_140678C2C.c)
 *     sub_140726494 @ 0x140726494 (sub_140726494.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall sub_140678B98(__int64 a1)
{
  SIZE_T v1; // rdi
  POOL_TYPE v2; // r9d
  int v3; // ecx
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rsi

  v1 = sub_140678C2C(a1);
  v2 = NonPagedPoolNx;
  if ( v3 != 2 )
    v2 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v2, v1, 0x624A7350u);
  if ( PoolWithTag )
  {
    v5 = sub_140726494(*((_QWORD *)KeGetCurrentThread() + 23), v1, 0LL);
    if ( v5 )
    {
      memset(PoolWithTag, 0, v1);
      *PoolWithTag = v5;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
      return 0LL;
    }
  }
  return PoolWithTag;
}
