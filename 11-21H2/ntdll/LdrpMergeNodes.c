/*
 * XREFs of LdrpMergeNodes @ 0x180075974
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x1800757D8 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 */

int __fastcall LdrpMergeNodes(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // rdx
  _QWORD *i; // rcx
  _QWORD *v16; // rdi
  _QWORD **v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // r8
  _QWORD *v21; // rax
  _QWORD **v22; // r14
  _QWORD **v23; // rsi
  _QWORD *k; // rdi
  _QWORD **v25; // r8
  _QWORD *v26; // r9
  _QWORD *j; // r10
  _QWORD **v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rdx
  _QWORD *v34; // r9
  _QWORD *v35; // rax
  _QWORD **v36; // rcx
  _QWORD *m; // r9
  _QWORD **v38; // rax
  _QWORD **v39; // rax

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrddag.c",
    1001,
    (__int64)"LdrpMergeNodes",
    2u,
    "Merging a cycle rooted at %wZ.\n",
    *(_QWORD *)a1 - 72LL);
  v4 = *a2;
  do
  {
    v5 = (_QWORD *)*(v4 - 8);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5
      || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5)
      || (*v7 = v6,
          *(_QWORD *)(v6 + 8) = v7,
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrddag.c",
            1037,
            (__int64)"LdrpMergeNodes",
            2u,
            "Adding cyclic module %wZ.\n",
            v5 - 9),
          *(v5 - 1) = a1,
          v8 = *(_QWORD **)(a1 + 8),
          *v8 != a1) )
    {
      __fastfail(3u);
    }
    v5[1] = v8;
    *v5 = a1;
    *v8 = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 24) += *((_DWORD *)v4 - 10);
    v9 = (_QWORD *)*(v4 - 3);
    *((_DWORD *)v4 - 10) = 0;
    v10 = v9;
    *((_DWORD *)v4 - 2) = -5;
    do
    {
      v10 = (_QWORD *)*v10;
      v10[3] = a1;
    }
    while ( v10 != v9 );
    v11 = (_QWORD *)*(v4 - 2);
    v12 = v11;
    do
    {
      v12 = (_QWORD *)*v12;
      *(v12 - 1) = a1;
    }
    while ( v12 != v11 );
    v4 = (_QWORD *)*v4;
  }
  while ( v4 );
  v13 = *(_QWORD **)(a1 + 40);
  v14 = v13;
  for ( i = (_QWORD *)*v13; ; i = (_QWORD *)*v14 )
  {
    if ( i[1] == a1 )
    {
      v12 = (_QWORD *)*i;
      *v14 = *i;
      if ( *(_QWORD **)(a1 + 40) == i )
      {
        v12 = 0LL;
        if ( v14 != i )
          v12 = v14;
        *(_QWORD *)(a1 + 40) = v12;
      }
      *i = 0LL;
    }
    else
    {
      v14 = i;
    }
    if ( i == v13 )
      break;
  }
  v16 = *a2;
  do
  {
    while ( 1 )
    {
      v17 = (_QWORD **)*(v16 - 3);
      if ( !v17 )
        break;
      v18 = *v17;
      if ( *v17 == v17 )
      {
        *(v16 - 3) = 0LL;
      }
      else
      {
        v12 = (_QWORD *)*v18;
        *v17 = (_QWORD *)*v18;
      }
      if ( !v18 )
        break;
      v19 = v18[1];
      if ( v19 == a1 )
      {
        *v18 = 0LL;
      }
      else
      {
        v20 = *(_QWORD **)(a1 + 40);
        if ( v20 )
        {
          v21 = *(_QWORD **)(a1 + 40);
          while ( 1 )
          {
            v21 = (_QWORD *)*v21;
            if ( v21[1] == v19 )
              break;
            if ( v21 == v20 )
            {
              v12 = (_QWORD *)*v20;
              *v18 = *v20;
              *v20 = v18;
              goto LABEL_31;
            }
          }
          v25 = *(_QWORD ***)(v19 + 48);
          v26 = v18 + 2;
          for ( j = *v25; j != v26; j = (_QWORD *)*j )
            v25 = (_QWORD **)j;
          *v25 = (_QWORD *)*v26;
          if ( *(_QWORD **)(v19 + 48) == v26 )
          {
            v28 = 0LL;
            if ( v25 != v26 )
              v28 = v25;
            *(_QWORD *)(v19 + 48) = v28;
          }
          --*(_DWORD *)(v19 + 24);
          LODWORD(v12) = RtlFreeHeap(LdrpHeap, 0, v18);
        }
        else
        {
          *v18 = v18;
LABEL_31:
          *(_QWORD *)(a1 + 40) = v18;
        }
      }
    }
    v16 = (_QWORD *)*v16;
  }
  while ( v16 );
  v22 = *(_QWORD ***)(a1 + 48);
  v23 = v22;
  for ( k = *v22; ; k = *v23 )
  {
    if ( k[1] == a1 )
    {
      *v23 = (_QWORD *)*k;
      if ( *(_QWORD **)(a1 + 48) == k )
      {
        v39 = 0LL;
        if ( v23 != k )
          v39 = v23;
        *(_QWORD *)(a1 + 48) = v39;
      }
      --*(_DWORD *)(a1 + 24);
      LODWORD(v12) = RtlFreeHeap(LdrpHeap, 0, k - 2);
    }
    else
    {
      v23 = (_QWORD **)k;
    }
    if ( k == v22 )
      break;
  }
  v29 = *a2;
  do
  {
    while ( 1 )
    {
      v30 = (_QWORD *)*(v29 - 2);
      if ( !v30 )
        break;
      v31 = (_QWORD *)*v30;
      if ( (_QWORD *)*v30 == v30 )
      {
        *(v29 - 2) = 0LL;
      }
      else
      {
        v12 = (_QWORD *)*v31;
        *v30 = *v31;
      }
      if ( !v31 )
        break;
      v32 = v31 - 2;
      v33 = v31[1];
      if ( v33 == a1 )
        goto LABEL_53;
      v34 = *(_QWORD **)(a1 + 48);
      if ( v34 )
      {
        v35 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v35 = (_QWORD *)*v35;
          if ( v35[1] == v33 )
            break;
          if ( v35 == v34 )
          {
            v12 = (_QWORD *)*v34;
            *v31 = *v34;
            *v34 = v31;
            goto LABEL_64;
          }
        }
        v36 = *(_QWORD ***)(v33 + 40);
        for ( m = *v36; m != v32; m = (_QWORD *)*m )
          v36 = (_QWORD **)m;
        *v36 = (_QWORD *)*v32;
        if ( *(_QWORD **)(v33 + 40) == v32 )
        {
          v38 = 0LL;
          if ( v36 != v32 )
            v38 = v36;
          *(_QWORD *)(v33 + 40) = v38;
        }
LABEL_53:
        --*(_DWORD *)(a1 + 24);
        LODWORD(v12) = RtlFreeHeap(LdrpHeap, 0, v32);
      }
      else
      {
        *v31 = v31;
LABEL_64:
        *(_QWORD *)(a1 + 48) = v31;
      }
    }
    v29 = (_QWORD *)*v29;
  }
  while ( v29 );
  return (int)v12;
}
