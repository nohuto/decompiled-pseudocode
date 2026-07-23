/*
 * XREFs of sub_140655178 @ 0x140655178
 * Callers:
 *     sub_140A35A08 @ 0x140A35A08 (sub_140A35A08.c)
 *     sub_140A35A74 @ 0x140A35A74 (sub_140A35A74.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void *__fastcall sub_140655178(
        unsigned int *BugCheckParameter3,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // esi
  PVOID PoolWithTag; // rax
  void *v12; // rbx

  if ( !BugCheckParameter3 )
    return 0LL;
  v8 = a4 * (unsigned __int64)a3;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v8 + a2;
  if ( (unsigned int)v8 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v9;
  if ( !v9 )
    return 0LL;
  v10 = v8 + a2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x72746C6Du);
  v12 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v10);
  if ( !v12 )
    return 0LL;
  memmove(v12, BugCheckParameter3, *BugCheckParameter3);
  sub_140348B40((ULONG_PTR)BugCheckParameter3);
  return v12;
}
