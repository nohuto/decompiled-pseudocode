/*
 * XREFs of sub_1407AC020 @ 0x1407AC020
 * Callers:
 *     sub_1407A9A80 @ 0x1407A9A80 (sub_1407A9A80.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407A7378 @ 0x1407A7378 (sub_1407A7378.c)
 *     sub_1407A7464 @ 0x1407A7464 (sub_1407A7464.c)
 *     sub_1407A7C84 @ 0x1407A7C84 (sub_1407A7C84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1407AC020(__int64 a1)
{
  char *v2; // rsi
  size_t v3; // rdi
  __int64 v4; // r14
  size_t v5; // r14
  void *v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  void *v9; // rcx
  size_t v10; // r12
  __int64 Pool2; // rax
  __int64 v12; // rcx

  v2 = *(char **)(a1 + 176);
  v3 = *(unsigned __int16 *)(a1 + 240);
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 32) - 40LL;
  else
    v5 = 512LL;
  if ( v3 <= v5 )
  {
    if ( v2 )
      memmove((void *)(a1 + 280), v2, v3);
    v6 = *(void **)(a1 + 224);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x42456C41u);
      *(_QWORD *)(a1 + 224) = 0LL;
      v7 = *(_QWORD *)(a1 + 48);
      if ( v7 )
        sub_1407A7378(v7, *(_QWORD *)(a1 + 232));
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return;
  }
  if ( v3 > 0xFFD7 )
    return;
  v8 = *(_QWORD *)(a1 + 232);
  if ( v3 <= v8 + v5 )
    goto LABEL_12;
  v9 = *(void **)(a1 + 224);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x42456C41u);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  v10 = v3 - v5;
  Pool2 = ExAllocatePool2(256LL, v3 - v5, 1111845953LL);
  *(_QWORD *)(a1 + 224) = Pool2;
  v12 = *(_QWORD *)(a1 + 48);
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 232) = v10;
    if ( v12 && (int)sub_1407A7464(v12, v10 - v8) < 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
      *(_QWORD *)(a1 + 224) = 0LL;
      *(_QWORD *)(a1 + 232) = 0LL;
      sub_1407A7378(*(_QWORD *)(a1 + 48), v8);
      return;
    }
LABEL_12:
    if ( v2 )
    {
      memmove((void *)(a1 + 280), v2, v5);
      memmove(*(void **)(a1 + 224), &v2[v5], v3 - v5);
    }
    return;
  }
  if ( v12 )
    sub_1407A7378(v12, v8);
}
