/*
 * XREFs of sub_140629368 @ 0x140629368
 * Callers:
 *     sub_140629910 @ 0x140629910 (sub_140629910.c)
 *     sub_140629D0C @ 0x140629D0C (sub_140629D0C.c)
 *     sub_14062B7FC @ 0x14062B7FC (sub_14062B7FC.c)
 * Callees:
 *     sub_14062C4B4 @ 0x14062C4B4 (sub_14062C4B4.c)
 */

unsigned __int64 __fastcall sub_140629368(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        char a6)
{
  unsigned __int64 v7; // r10
  __int64 v9; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD *v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 *v21; // r9
  __int64 *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  int v26; // r9d
  unsigned __int64 v27; // rax
  __int64 v28; // rbx
  _QWORD *v29; // rcx
  _QWORD *v30; // r8
  _QWORD *v31; // r9
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  bool v34; // cc
  __int128 v36; // [rsp+20h] [rbp-38h]

  v36 = 0uLL;
  v7 = *a2;
  v9 = a2[1];
  v12 = (_QWORD *)*a4;
  while ( 1 )
  {
    v13 = 0LL;
    a5[1] = 0LL;
    v14 = v9 + v7 - 1;
    if ( !v12 )
      goto LABEL_7;
    v15 = (_QWORD *)a4[1];
    if ( v15 )
    {
      a4[1] = 0LL;
      v13 = v15;
      v7 = a4[2];
      a4[2] = 0LL;
      goto LABEL_36;
    }
    if ( v7 < v12[3] || v7 > v12[4] )
    {
LABEL_7:
      v16 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && v16 )
        v16 ^= a1 + 24;
      v12 = 0LL;
      while ( v16 )
      {
        if ( v7 <= *(_QWORD *)(v16 + 32) )
        {
          v12 = (_QWORD *)v16;
          v17 = *(_QWORD *)v16;
          if ( v7 >= *(_QWORD *)(v16 + 24) )
          {
            if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && v17 )
              v17 ^= v16;
            v18 = 0LL;
            if ( v17 )
            {
              do
              {
                if ( v7 <= *(_QWORD *)(v17 + 32) )
                {
                  v19 = *(_QWORD *)v17;
                  if ( v7 >= *(_QWORD *)(v17 + 24) )
                    v18 = (_QWORD *)v17;
                }
                else
                {
                  v19 = *(_QWORD *)(v17 + 8);
                }
                if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && v19 )
                  v17 ^= v19;
                else
                  v17 = v19;
              }
              while ( v17 );
              if ( v18 )
                v12 = v18;
            }
            break;
          }
        }
        else
        {
          v17 = *(_QWORD *)(v16 + 8);
        }
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && v17 )
          v16 ^= v17;
        else
          v16 = v17;
      }
      if ( !v12 )
        goto LABEL_66;
    }
LABEL_36:
    v20 = v12[3];
    if ( v7 < v20 )
    {
      if ( v14 < v20 )
        goto LABEL_66;
      v7 = v12[3];
    }
    *a4 = (__int64)v12;
    if ( v13 )
      goto LABEL_47;
    v21 = v12 + 5;
    v22 = (__int64 *)v12[5];
    if ( v22 != v12 + 5 )
      break;
LABEL_45:
    v7 = v12[4] + 1LL;
    if ( v7 > v14 )
      goto LABEL_66;
    v23 = sub_14062C4B4(a1);
    *a4 = v23;
    v12 = (_QWORD *)v23;
    *a2 = v7;
    v9 = v14 - v7 + 1;
    a2[1] = v9;
  }
  while ( 1 )
  {
    v13 = v22;
    if ( (a6 & 2) != 0 )
      break;
    if ( (v22[8] & 1) != 0 )
    {
      v22 = (__int64 *)*v22;
      if ( v22 != v21 )
        continue;
    }
    if ( v22 != v21 )
      break;
    goto LABEL_45;
  }
LABEL_47:
  *a5 = v7 + v13[6] - v20;
  if ( v14 - v7 + 1 <= a3 )
    v24 = v14;
  else
    v24 = v7 + a3 - 1;
  v25 = v12[4];
  v26 = 0;
  if ( v24 >= v25 )
  {
    a5[1] = v25 - v7 + 1;
    v27 = v25 + 1;
    *(_QWORD *)&v36 = v25 + 1;
    goto LABEL_53;
  }
  a5[1] = v24 - v7 + 1;
  v27 = v24 + 1;
  *(_QWORD *)&v36 = v24 + 1;
  if ( v24 == v14 )
  {
LABEL_53:
    v26 = 1;
  }
  else
  {
    a4[1] = (__int64)v13;
    a4[2] = v27;
  }
  v28 = v14 - v27 + 1;
  *((_QWORD *)&v36 + 1) = v28;
  if ( !v26 )
    return v7;
  v29 = (_QWORD *)*v13;
  v30 = v12 + 5;
  if ( (_QWORD *)*v13 == v12 + 5 )
  {
LABEL_64:
    if ( v28 )
      *a4 = sub_14062C4B4(a1);
LABEL_66:
    *(_OWORD *)a2 = v36;
    return v7;
  }
  while ( 1 )
  {
    v31 = v29;
    if ( (a6 & 2) != 0 )
      break;
    if ( (v29[8] & 1) != 0 )
    {
      v29 = (_QWORD *)*v29;
      if ( v29 != v30 )
        continue;
    }
    if ( v29 == v30 )
      goto LABEL_64;
    break;
  }
  v32 = *a2;
  v33 = v12[3];
  v34 = *a2 <= v33;
  a4[1] = (__int64)v31;
  if ( v34 )
    v32 = v33;
  a4[2] = v32;
  return v7;
}
