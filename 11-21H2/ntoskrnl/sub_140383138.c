/*
 * XREFs of sub_140383138 @ 0x140383138
 * Callers:
 *     sub_1403830D4 @ 0x1403830D4 (sub_1403830D4.c)
 *     sub_1405F6968 @ 0x1405F6968 (sub_1405F6968.c)
 * Callees:
 *     sub_1405F68F0 @ 0x1405F68F0 (sub_1405F68F0.c)
 *     sub_1405F6A08 @ 0x1405F6A08 (sub_1405F6A08.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140383138(_DWORD **a1, __int64 a2, char a3)
{
  _DWORD *v3; // rbx
  PVOID PoolWithTag; // rax
  __int64 v7; // rdi

  v3 = *a1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x704E6D73u);
  v7 = (__int64)PoolWithTag;
  if ( (PoolWithTag || (a3 & 2) != 0)
    && (a3 & 1) != 0
    && (PoolWithTag || (v7 = sub_1405F68F0(v3, a1)) != 0)
    && ++v3[10] > *v3 )
  {
    sub_1405F6A08(v3, a1);
  }
  return v7;
}
