/*
 * XREFs of sub_140523B30 @ 0x140523B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140523B30(_WORD *Src, __int128 *a2, int a3, size_t a4, void *Srca)
{
  __int64 v9; // rax
  size_t v10; // rsi
  __int64 Pool2; // rax
  _QWORD *v13; // rdi
  void *v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rbx

  if ( !qword_140C4C550 || KeGetCurrentIrql() > 2u )
    return 0x8000000000000003uLL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = 2 * v9 + 2;
  if ( ((v10 + a4 + 4151) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 0x8000000000000004uLL;
  Pool2 = ExAllocatePool2(64LL, (v10 + a4 + 4151) & 0xFFFFFFFFFFFFF000uLL, 2001103699LL);
  v13 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 0x8000000000000009uLL;
  *(_DWORD *)(Pool2 + 32) = a3;
  *(_QWORD *)Pool2 = Pool2 + 56;
  memmove((void *)(Pool2 + 56), Src, v10);
  v14 = (void *)(v10 + *v13);
  v13[1] = v10;
  v15 = *a2;
  v13[6] = v14;
  *((_OWORD *)v13 + 1) = v15;
  memmove(v14, Srca, a4);
  v13[5] = a4;
  v16 = sub_14042A5E0(5LL, v13);
  ExFreePoolWithTag(v13, 0);
  return v16;
}
