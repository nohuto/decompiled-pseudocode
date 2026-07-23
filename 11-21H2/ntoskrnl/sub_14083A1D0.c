/*
 * XREFs of sub_14083A1D0 @ 0x14083A1D0
 * Callers:
 *     sub_14083A0B4 @ 0x14083A0B4 (sub_14083A0B4.c)
 * Callees:
 *     sub_1408398AC @ 0x1408398AC (sub_1408398AC.c)
 *     sub_14083A2EC @ 0x14083A2EC (sub_14083A2EC.c)
 *     sub_14083A490 @ 0x14083A490 (sub_14083A490.c)
 */

__int64 __fastcall sub_14083A1D0(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  char v4; // r10
  unsigned __int64 *v6; // r14
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r11
  unsigned __int64 *v17; // rax
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // rax
  bool v20; // cf
  unsigned __int64 *v21; // rax
  unsigned __int64 *v22; // rax
  _QWORD *v23; // rax
  _QWORD *i; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rcx
  _QWORD *v29; // rdx

  v4 = *(_BYTE *)(a3 + 33) & 1;
  v6 = (unsigned __int64 *)a3;
  v7 = a2;
  if ( (a4 & 1) == 0 && a1 != a2 + 5 )
  {
    v16 = *(_QWORD *)(a3 + 8);
    do
    {
      if ( v16 < *a2 )
        break;
      if ( (*((_BYTE *)a2 + 34) & 1) != 0 )
      {
        v17 = (unsigned __int64 *)a2[2];
        v18 = v17 - 5;
        if ( a2 + 2 != v17 )
        {
          a3 = *v6;
          do
          {
            v19 = *v18;
            v20 = a3 < *v18;
            if ( a3 > *v18 )
            {
              if ( v18[1] < a3 )
                goto LABEL_30;
              v20 = a3 < v19;
            }
            if ( (!v20 || v16 >= v19) && (!v4 || (*((_BYTE *)v18 + 33) & 1) == 0) )
              return 3221226114LL;
LABEL_30:
            v21 = (unsigned __int64 *)v18[5];
            v18 = v21 - 5;
          }
          while ( a2 + 2 != v21 );
        }
      }
      else if ( !v4 || (*((_BYTE *)a2 + 33) & 1) == 0 )
      {
        return 3221226114LL;
      }
      v22 = (unsigned __int64 *)a2[5];
      a2 = v22 - 5;
    }
    while ( a1 != v22 );
  }
  if ( (*((_BYTE *)v7 + 34) & 1) == 0 )
  {
    v13 = sub_14083A490(v7);
    if ( !v13 )
      return 3221225626LL;
    if ( (*((_BYTE *)v7 + 33) & 0x10) != 0 )
    {
      --*(_DWORD *)v7[2];
      *((_BYTE *)v7 + 33) &= ~0x10u;
    }
    *((_WORD *)v7 + 17) = 1;
    *(_QWORD *)(v13 + 40) = v7 + 2;
    *(_QWORD *)(v13 + 48) = v7 + 2;
    v7[3] = v13 + 40;
    v7[2] = v13 + 40;
  }
  v9 = (unsigned __int64 *)v7[5];
  v10 = (__int64)(v9 - 5);
  while ( 1 )
  {
    v11 = *v9 - 40;
    if ( a1 == v9 || v6[1] < *(_QWORD *)v10 )
      return sub_14083A2EC(v7, v6, a4);
    if ( (*(_BYTE *)(v10 + 34) & 1) != 0 )
    {
      v23 = *(_QWORD **)(v10 + 16);
      for ( i = v23 - 5; ; i = (_QWORD *)v27 )
      {
        v27 = *v23 - 40LL;
        if ( (_QWORD *)(v10 + 16) == v23 )
          break;
        v25 = *v23;
        if ( *(_QWORD **)(*v23 + 8LL) != v23 )
          goto LABEL_16;
        v26 = (_QWORD *)v23[1];
        if ( (_QWORD *)*v26 != v23 )
          goto LABEL_16;
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        sub_14083A2EC(v7, i, a4);
        v23 = (_QWORD *)(v27 + 40);
      }
      v28 = *(_QWORD *)(v10 + 40);
      if ( *(_QWORD *)(v28 + 8) != v10 + 40 || (v29 = *(_QWORD **)(v10 + 48), *v29 != v10 + 40) )
LABEL_16:
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      sub_1408398AC(v10, (__int64)v29, a3);
    }
    else
    {
      v14 = *(_QWORD *)(v10 + 40);
      if ( *(_QWORD *)(v14 + 8) != v10 + 40 )
        goto LABEL_16;
      v15 = *(_QWORD **)(v10 + 48);
      if ( *v15 != v10 + 40 )
        goto LABEL_16;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      sub_14083A2EC(v7, v10, a4);
    }
    v10 = v11;
    v9 = (unsigned __int64 *)(v11 + 40);
  }
}
