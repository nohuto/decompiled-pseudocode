/*
 * XREFs of sub_1403C03EC @ 0x1403C03EC
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     sub_14063F5BC @ 0x14063F5BC (sub_14063F5BC.c)
 *     sub_140A57C10 @ 0x140A57C10 (sub_140A57C10.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1403C03EC(__int64 a1, char a2)
{
  PVOID PoolWithTag; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x43497845u);
  if ( PoolWithTag )
  {
    sub_140A57C10((_DWORD)PoolWithTag, 512, 1264, 1128888389, 32, (__int64)&qword_140C11710);
    *(_QWORD *)(a1 + 2176) = PoolWithTag;
  }
  if ( a2 )
  {
    sub_14063F5BC(a1);
    *(_QWORD *)(a1 + 34480) = *(_QWORD *)(qword_140C10DB0 + 8LL * *(unsigned int *)(a1 + 36));
  }
  return 0LL;
}
