/*
 * XREFs of sub_140831B58 @ 0x140831B58
 * Callers:
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14071123C @ 0x14071123C (sub_14071123C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140831B58(__int64 a1, const void **a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  void *v6; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)a2 + 16LL, 0x6E497350u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = PoolWithTag + 2;
  *(_WORD *)PoolWithTag = *(_WORD *)a2;
  *((_WORD *)PoolWithTag + 1) = *(_WORD *)a2;
  memmove(PoolWithTag + 2, a2[1], *(unsigned __int16 *)a2);
  v6 = *(void **)(a1 + 1472);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  *(_QWORD *)(a1 + 1472) = v5;
  sub_14071123C(a1, (unsigned __int16 *)a2);
  return 0LL;
}
