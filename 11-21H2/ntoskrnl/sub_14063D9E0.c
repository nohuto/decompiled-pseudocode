/*
 * XREFs of sub_14063D9E0 @ 0x14063D9E0
 * Callers:
 *     sub_140A51888 @ 0x140A51888 (sub_140A51888.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14063D9E0(SIZE_T *Src, _QWORD *a2)
{
  PVOID PoolWithTag; // rax
  PVOID v5; // rdi
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *Src, 0x53577254u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, *Src);
  result = 0LL;
  *a2 = v5;
  return result;
}
