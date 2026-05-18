/*
 * XREFs of sub_1800E0A7C @ 0x1800E0A7C
 * Callers:
 *     sub_1800E0710 @ 0x1800E0710 (sub_1800E0710.c)
 * Callees:
 *     sub_1800DF1C4 @ 0x1800DF1C4 (sub_1800DF1C4.c)
 *     sub_1800DF2D0 @ 0x1800DF2D0 (sub_1800DF2D0.c)
 *     sub_1800E0478 @ 0x1800E0478 (sub_1800E0478.c)
 *     sub_1800E1CA8 @ 0x1800E1CA8 (sub_1800E1CA8.c)
 *     sub_1800E1DE0 @ 0x1800E1DE0 (sub_1800E1DE0.c)
 */

__int64 __fastcall sub_1800E0A7C(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // r15
  signed int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned int v7; // r8d
  char v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 i; // rcx
  __int64 v16; // rcx
  unsigned int v17; // esi
  unsigned __int64 v18; // rdx
  __int64 *m; // r9
  unsigned __int64 j; // rdx
  __int64 **v21; // rax
  __int64 *k; // rax
  __int64 *v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 *jj; // r9
  unsigned __int64 n; // rdx
  __int64 **v27; // rax
  __int64 *ii; // rax
  __int64 *v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 *nn; // r9
  unsigned __int64 kk; // rdx
  __int64 **v33; // rax
  __int64 *mm; // rax
  __int64 *v35; // rcx
  unsigned int v36; // [rsp+60h] [rbp+40h] BYREF
  __int64 v37; // [rsp+68h] [rbp+48h] BYREF
  __int64 v38; // [rsp+70h] [rbp+50h] BYREF
  __int64 v39; // [rsp+78h] [rbp+58h] BYREF

  result = *(unsigned int *)(a1 + 1640);
  if ( !(_DWORD)result )
    return result;
  v3 = (__int64 *)(a1 + 1648);
  v4 = (*(_DWORD *)(a1 + 1644) - (int)result + 21) % 0x14u;
  do
  {
    v5 = *v3;
    v6 = v5;
    v7 = *(_DWORD *)(56LL * v4 + a1 + 536);
    v36 = v7;
    result = *(_QWORD *)(v5 + 8);
    v8 = *(_BYTE *)(result + 25);
    if ( !v8 )
    {
      v9 = *(_QWORD *)(v5 + 8);
      do
      {
        if ( *(_DWORD *)(v9 + 32) >= v7 )
        {
          v6 = v9;
          v9 = *(_QWORD *)v9;
        }
        else
        {
          v9 = *(_QWORD *)(v9 + 16);
        }
      }
      while ( !*(_BYTE *)(v9 + 25) );
    }
    if ( !*(_BYTE *)(v6 + 25) && v7 >= *(_DWORD *)(v6 + 32) )
    {
      v10 = sub_1800DF2D0(v3, &v36);
      result = (__int64)sub_1800E0478(a1, &v37, *(_DWORD *)(v10 + 4));
      v11 = v37;
      if ( v37 <= 0 )
        break;
      goto LABEL_39;
    }
    v12 = v5;
    if ( !v8 )
    {
      v13 = *(_QWORD *)(v5 + 8);
      do
      {
        if ( *(_DWORD *)(v13 + 32) >= v7 )
        {
          v12 = v13;
          v13 = *(_QWORD *)v13;
        }
        else
        {
          v13 = *(_QWORD *)(v13 + 16);
        }
      }
      while ( !*(_BYTE *)(v13 + 25) );
    }
    if ( v12 == *(_QWORD *)v5 )
      break;
    if ( *(_BYTE *)(v12 + 25) )
    {
      v12 = *(_QWORD *)(v12 + 16);
    }
    else
    {
      v14 = *(_QWORD *)v12;
      if ( *(_BYTE *)(*(_QWORD *)v12 + 25LL) )
      {
        for ( i = *(_QWORD *)(v12 + 8); !*(_BYTE *)(i + 25) && v12 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
          v12 = i;
        if ( !*(_BYTE *)(v12 + 25) )
          v12 = i;
      }
      else
      {
        do
        {
          v12 = v14;
          v14 = *(_QWORD *)(v14 + 16);
        }
        while ( !*(_BYTE *)(v14 + 25) );
      }
    }
    v16 = v5;
    if ( v8 )
      break;
    do
    {
      if ( v7 >= *(_DWORD *)(result + 32) )
      {
        result = *(_QWORD *)(result + 16);
      }
      else
      {
        v5 = result;
        result = *(_QWORD *)result;
      }
    }
    while ( !*(_BYTE *)(result + 25) );
    if ( v5 == v16 )
      break;
    sub_1800E0478(a1, &v38, *(_DWORD *)(v12 + 44));
    result = (__int64)sub_1800E0478(a1, &v39, *(_DWORD *)(v5 + 44));
    if ( v38 <= 0 )
      break;
    result = v39;
    if ( v39 <= 0 )
      break;
    v11 = v38
        + (int)(v36 - *(_DWORD *)(v12 + 32))
        * ((v39 - v38)
         / (unsigned int)(*(_DWORD *)(v5 + 32) - *(_DWORD *)(v12 + 32)));
LABEL_39:
    *(_QWORD *)sub_1800DF1C4((__int64 *)(a1 + 1680), &v36) = v11;
    --*(_DWORD *)(a1 + 1640);
    v17 = v4 + 1;
    result = 20 * (v17 / 0x14);
    v4 = v17 % 0x14;
  }
  while ( *(_DWORD *)(a1 + 1640) );
  v18 = *(_QWORD *)(a1 + 1656);
  if ( v18 > 0x14 )
  {
    m = **(__int64 ***)(a1 + 1648);
    for ( j = v18 - 20; j; --j )
    {
      v21 = (__int64 **)m[2];
      if ( *((_BYTE *)v21 + 25) )
      {
        for ( k = (__int64 *)m[1]; !*((_BYTE *)k + 25) && m == (__int64 *)k[2]; k = (__int64 *)k[1] )
          m = k;
        m = k;
      }
      else
      {
        v23 = *v21;
        for ( m = (__int64 *)m[2]; !*((_BYTE *)v23 + 25); v23 = (__int64 *)*v23 )
          m = v23;
      }
    }
    result = sub_1800E1DE0(a1 + 1648, &v36, **(_QWORD **)(a1 + 1648), m);
  }
  v24 = *(_QWORD *)(a1 + 1672);
  if ( v24 > 0x14 )
  {
    jj = **(__int64 ***)(a1 + 1664);
    for ( n = v24 - 20; n; --n )
    {
      v27 = (__int64 **)jj[2];
      if ( *((_BYTE *)v27 + 25) )
      {
        for ( ii = (__int64 *)jj[1]; !*((_BYTE *)ii + 25) && jj == (__int64 *)ii[2]; ii = (__int64 *)ii[1] )
          jj = ii;
        jj = ii;
      }
      else
      {
        v29 = *v27;
        for ( jj = (__int64 *)jj[2]; !*((_BYTE *)v29 + 25); v29 = (__int64 *)*v29 )
          jj = v29;
      }
    }
    result = sub_1800E1CA8(a1 + 1664, &v36, **(_QWORD **)(a1 + 1664), jj);
  }
  v30 = *(_QWORD *)(a1 + 1688);
  if ( v30 > 0x14 )
  {
    nn = **(__int64 ***)(a1 + 1680);
    for ( kk = v30 - 20; kk; --kk )
    {
      v33 = (__int64 **)nn[2];
      if ( *((_BYTE *)v33 + 25) )
      {
        for ( mm = (__int64 *)nn[1]; !*((_BYTE *)mm + 25) && nn == (__int64 *)mm[2]; mm = (__int64 *)mm[1] )
          nn = mm;
        nn = mm;
      }
      else
      {
        v35 = *v33;
        for ( nn = (__int64 *)nn[2]; !*((_BYTE *)v35 + 25); v35 = (__int64 *)*v35 )
          nn = v35;
      }
    }
    return sub_1800E1CA8(a1 + 1680, &v36, **(_QWORD **)(a1 + 1680), nn);
  }
  return result;
}
