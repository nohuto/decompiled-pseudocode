/*
 * XREFs of sub_140604308 @ 0x140604308
 * Callers:
 *     sub_1402D8104 @ 0x1402D8104 (sub_1402D8104.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140604308(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int *v3; // rcx
  unsigned int v4; // ebp
  _OWORD *Pool2; // rax
  _QWORD *v6; // rdi
  unsigned int v7; // r14d
  void *v8; // rax
  void *v9; // rbp
  _QWORD *v10; // rdi
  _QWORD *v11; // rax

  v2 = 0LL;
  while ( 1 )
  {
    v3 = (unsigned int *)qword_140D049C0[v2];
    if ( v3 )
    {
      v4 = *v3;
      if ( *v3 )
        break;
    }
LABEL_8:
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 0x40 )
      return 0LL;
  }
  Pool2 = (_OWORD *)ExAllocatePool2(64LL, 32LL, 1315334468LL);
  v6 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *Pool2 = 0LL;
  Pool2[1] = 0LL;
  v7 = v4;
  v8 = (void *)ExAllocatePool2(64LL, v4, 1315334468LL);
  v9 = v8;
  if ( v8 )
  {
    memset(v8, 0, v7);
    *(_DWORD *)v6 = v2;
    v6[1] = v9;
    v10 = v6 + 2;
    v11 = *(_QWORD **)(a1 + 8);
    if ( *v11 != a1 )
      __fastfail(3u);
    *v10 = a1;
    v10[1] = v11;
    *v11 = v10;
    *(_QWORD *)(a1 + 8) = v10;
    goto LABEL_8;
  }
  ExFreePoolWithTag(v6, 0x4E666944u);
  return 3221225495LL;
}
