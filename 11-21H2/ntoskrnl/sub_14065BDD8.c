/*
 * XREFs of sub_14065BDD8 @ 0x14065BDD8
 * Callers:
 *     sub_14065BD24 @ 0x14065BD24 (sub_14065BD24.c)
 * Callees:
 *     sub_14065C51C @ 0x14065C51C (sub_14065C51C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1407C82B0 @ 0x1407C82B0 (sub_1407C82B0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065BDD8(_QWORD *a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rsi
  unsigned int *v9; // rdi
  __int64 result; // rax
  _QWORD *v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r15
  unsigned int v14; // edx
  unsigned int v15; // eax
  ULONG_PTR v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  ULONG_PTR v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx

  *a1 = *(_QWORD *)a2;
  v5 = *(_QWORD *)a2;
  v6 = *(unsigned int *)(a2 + 8);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    v7 = sub_1406BF400(v5, v6);
  else
    v7 = sub_1407C9820(v5);
  a1[1] = v7;
  v8 = a1 + 10;
  v9 = (unsigned int *)(a1 + 3);
  result = -4LL - (_QWORD)a1;
  v11 = a1 + 12;
  v12 = 4LL - (_QWORD)a1;
  v13 = 2LL;
  do
  {
    v14 = *(unsigned int *)((char *)v9 + result + a1[1]);
    v9[2] = v14;
    if ( a3 )
      v15 = *(unsigned int *)((char *)v9 + a3 - (_QWORD)a1 - 8);
    else
      v15 = 0;
    *v9 = v15;
    if ( v14 > v15 )
    {
      v16 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        v17 = sub_1406BF400(v16, *(unsigned int *)((char *)v9 + v12 + a1[1]));
      else
        v17 = sub_1407C9820(v16);
      *(v8 - 5) = v17;
      v18 = sub_1407C82B0(*a1);
      v9[12] = v18;
      v19 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        v20 = sub_1406BF400(v19, v18);
      else
        v20 = sub_1407C9820(v19);
      *v8 = v20;
      v21 = a1[15];
      if ( !v21 || (int)sub_14065C51C(v20, v21) < 0 )
      {
        a1[15] = *v8;
        *((_DWORD *)a1 + 28) = v9[12];
      }
      v12 = 4LL - (_QWORD)a1;
    }
    result = -4LL - (_QWORD)a1;
    ++v11;
    ++v8;
    ++v9;
    --v13;
  }
  while ( v13 );
  return result;
}
