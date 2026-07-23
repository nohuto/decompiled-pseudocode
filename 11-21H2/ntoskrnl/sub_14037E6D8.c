/*
 * XREFs of sub_14037E6D8 @ 0x14037E6D8
 * Callers:
 *     sub_14037C48C @ 0x14037C48C (sub_14037C48C.c)
 * Callees:
 *     sub_14037C48C @ 0x14037C48C (sub_14037C48C.c)
 *     sub_14037E878 @ 0x14037E878 (sub_14037E878.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_14037E6D8(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // r14
  _QWORD *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  int *v10; // rdx
  int v11; // eax
  int *v12; // r15
  unsigned int v13; // ecx
  __int64 v14; // rcx
  int v15; // eax
  bool v16; // zf
  __int64 v18; // rax
  __int64 v19; // rbx
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int16 v22; // [rsp+78h] [rbp+10h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = *v5;
  v7 = sub_14037E878(a1, *(unsigned __int8 *)(*v5 + 3LL), *(unsigned __int8 *)(*v5 + 2LL));
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return (_QWORD *)v3;
  DWORD1(v20) = 0;
  *((_QWORD *)&v20 + 1) = v7;
  v9 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v10 = (int *)(v6 + 16 + 8 * v9);
    if ( (*(_DWORD *)v6 & 1) != 0 && (unsigned __int64)(v10 + 2) < v5[1] )
    {
      v10 += 2;
      LODWORD(v9) = v9 + 1;
    }
    v11 = *v10;
    v12 = 0LL;
  }
  else
  {
    v10 = 0LL;
    v12 = (int *)(v6 + 16 * (((*(_DWORD *)v6 >> 1) & 0x7FFF) + 1LL));
    v11 = *v12;
  }
  LODWORD(v20) = v11;
  v13 = (unsigned __int16)*(_DWORD *)v6 - (_DWORD)v9;
  v22 = *(_DWORD *)v6 - v9;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v8[1] = *(_QWORD *)(v6 + 8);
    memmove(v8 + 2, v10, 8LL * v13);
  }
  else
  {
    v22 = v13 - 1;
    memmove(v8 + 2, v12 + 4, 16LL * (v13 - 1));
    v8[1] = *((_QWORD *)v12 + 1);
  }
  *(_WORD *)v8 = v22;
  if ( *a1 == v6 )
  {
    v18 = sub_14037E878(v14, 0LL, (unsigned int)*(unsigned __int8 *)(v6 + 2) + 1);
    v4 = (void *)v18;
    if ( v18 )
    {
      *(_QWORD *)(v18 + 8) = v6;
      v19 = v18 + 16;
      *(_OWORD *)(v18 + 16) = v20;
      *(_WORD *)v18 = 1;
      *a1 = v18;
      memmove(v5 + 2, v5, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      *v5 = v4;
      v5[1] = v19;
      ++*(_DWORD *)(a2 + 24);
      goto LABEL_9;
    }
  }
  else
  {
    --*(_DWORD *)(a2 + 24);
    v15 = sub_14037C48C(a1, (unsigned int ***)a2, &v20);
    ++*(_DWORD *)(a2 + 24);
    if ( v15 >= 0 )
    {
LABEL_9:
      v16 = *(_BYTE *)(v6 + 3) == 0;
      *(_WORD *)v6 = v9;
      if ( !v16 )
        *(_QWORD *)(v6 + 8) = v8;
      return v8;
    }
  }
  ExFreePoolWithTag(v8, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (_QWORD *)v3;
}
