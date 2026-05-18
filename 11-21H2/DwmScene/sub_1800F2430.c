/*
 * XREFs of sub_1800F2430 @ 0x1800F2430
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F2430(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r12
  _QWORD *v17; // rbp
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  char *v20; // rdx
  _QWORD *v21; // r8
  char *v22; // rcx
  __int64 **v23; // rax
  __int64 *i; // rax
  __int64 *j; // rcx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = *(_QWORD *)(a1 + 560);
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
LABEL_36:
      sub_180012170();
    v5 = 2 * v4;
    v6 = (_QWORD *)sub_180011088(v5 * 8);
    sub_18001292C(*(char **)a2, *(char **)(a2 + 8), v6);
    if ( *(_QWORD *)a2 )
    {
      sub_1800126E8(*(_QWORD *)a2, *(_QWORD *)(a2 + 8));
      sub_180010884(*(char **)a2, (*(_QWORD *)(a2 + 16) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    *(_QWORD *)a2 = v6;
    *(_QWORD *)(a2 + 8) = v6;
    *(_QWORD *)(a2 + 16) = &v6[v5];
  }
  v7 = **(__int64 ***)(a1 + 552);
  while ( !*((_BYTE *)v7 + 25) )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v9 = *(_QWORD *)(a2 + 16);
    if ( v8 == v9 )
    {
      v11 = v8 - *(_QWORD *)a2;
      if ( v11 >> 4 == 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_36;
      v12 = (v11 >> 4) + 1;
      v13 = (v9 - *(_QWORD *)a2) >> 4;
      v14 = v13 >> 1;
      if ( v13 <= 0xFFFFFFFFFFFFFFFLL - (v13 >> 1) )
      {
        v15 = (v11 >> 4) + 1;
        if ( v14 + v13 >= v12 )
          v15 = v14 + v13;
        if ( v15 > 0xFFFFFFFFFFFFFFFLL )
          sub_1800120D4();
      }
      else
      {
        v15 = 0xFFFFFFFFFFFFFFFLL;
      }
      v16 = 2 * v15;
      v17 = (_QWORD *)sub_180011088(v16 * 8);
      v18 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)((char *)v17 + v18) = 0LL;
      *(_QWORD *)((char *)v17 + v18 + 8) = 0LL;
      v19 = v7[6];
      if ( v19 )
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      *(_QWORD *)((char *)v17 + v18) = v7[5];
      *(_QWORD *)((char *)v17 + v18 + 8) = v7[6];
      v20 = *(char **)(a2 + 8);
      v21 = v17;
      v22 = *(char **)a2;
      if ( (char *)v8 != v20 )
      {
        sub_18001292C(v22, (char *)v8, v17);
        v21 = (_QWORD *)((char *)v17 + v18 + 16);
        v20 = *(char **)(a2 + 8);
        v22 = (char *)v8;
      }
      sub_18001292C(v22, v20, v21);
      if ( *(_QWORD *)a2 )
      {
        sub_1800126E8(*(_QWORD *)a2, *(_QWORD *)(a2 + 8));
        sub_180010884(*(char **)a2, (*(_QWORD *)(a2 + 16) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      *(_QWORD *)a2 = v17;
      *(_QWORD *)(a2 + 8) = &v17[2 * v12];
      *(_QWORD *)(a2 + 16) = &v17[v16];
    }
    else
    {
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      v10 = v7[6];
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      *(_QWORD *)v8 = v7[5];
      *(_QWORD *)(v8 + 8) = v7[6];
      *(_QWORD *)(a2 + 8) += 16LL;
    }
    v23 = (__int64 **)v7[2];
    if ( *((_BYTE *)v23 + 25) )
    {
      for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v7 = i;
      v7 = i;
    }
    else
    {
      v7 = (__int64 *)v7[2];
      for ( j = *v23; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v7 = j;
    }
  }
  return a2;
}
