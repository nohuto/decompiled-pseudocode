/*
 * XREFs of sub_1407FC3E8 @ 0x1407FC3E8
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407FC3E8(int a1, unsigned __int16 a2, __int64 *a3, unsigned int *a4)
{
  __int64 v4; // rbx
  int v6; // edi
  unsigned int *v7; // r13
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 Pool2; // rax
  _DWORD *v13; // r15
  __int64 v14; // r12
  __int64 v15; // rsi
  int v16; // r13d
  int v17; // r14d
  __int64 v18; // rbp
  __int64 v19; // rdx
  int v20; // eax
  bool v21; // zf
  void *v22; // rcx
  unsigned int v24; // ebx

  v4 = a2;
  *a3 = 0LL;
  *a4 = 0;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  if ( (unsigned int)v4 >= dword_140C1CF34 )
    goto LABEL_11;
  v9 = qword_140C1CF38 + 336 * v4;
  v10 = *(_QWORD *)(v9 + 72);
  if ( !v10 )
    goto LABEL_11;
  v11 = 8 * (*(_DWORD *)(v10 + 8) + (a1 != 76) + 1) + 8;
  *v7 = v11;
  Pool2 = ExAllocatePool2(256LL, v11, 544040269LL);
  *v8 = Pool2;
  v13 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v6 = -1073741670;
    goto LABEL_12;
  }
  if ( a1 == 76 )
  {
    memmove(
      (void *)(Pool2 + 8),
      (const void *)(*(_QWORD *)(v9 + 72) + 328LL),
      8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v9 + 72) + 8LL) + 1));
    *v13 = *(_DWORD *)(*(_QWORD *)(v9 + 72) + 8LL);
    goto LABEL_12;
  }
  if ( a1 != 77 )
    goto LABEL_11;
  v14 = 0LL;
  v15 = v9 + 152;
  v16 = 0;
  v17 = 0;
  v18 = 2LL;
  do
  {
    v19 = *(_QWORD *)v15;
    if ( *(_QWORD *)v15 )
    {
      v16 = 1;
      v24 = *(_DWORD *)(v19 + 8) + 1;
      memmove(&v13[2 * v17 + 2], (const void *)(v19 + 328), 8LL * v24);
      v17 += v24;
      v20 = *(_DWORD *)(*(_QWORD *)v15 + 8LL);
    }
    else
    {
      v20 = 0;
    }
    v13[v14] = v20;
    v15 += 8LL;
    ++v14;
    --v18;
  }
  while ( v18 );
  v8 = a3;
  v21 = v16 == 0;
  v7 = a4;
  if ( v21 )
LABEL_11:
    v6 = -1073741637;
LABEL_12:
  sub_140224C00(&qword_140C22FE0);
  if ( v6 < 0 )
  {
    v22 = (void *)*v8;
    *v7 = 0;
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0x206D654Du);
      *v8 = 0LL;
    }
  }
  return (unsigned int)v6;
}
