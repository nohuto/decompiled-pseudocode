/*
 * XREFs of sub_14038C7A0 @ 0x14038C7A0
 * Callers:
 *     sub_14038C720 @ 0x14038C720 (sub_14038C720.c)
 * Callees:
 *     sub_14038CF50 @ 0x14038CF50 (sub_14038CF50.c)
 */

__int64 __fastcall sub_14038C7A0(
        _BYTE *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v7; // r15
  unsigned int v9; // esi
  _BYTE *v10; // rdi
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r8
  _BYTE *v14; // r12
  int v15; // esi
  _BYTE *v16; // rcx
  int v17; // ebx
  unsigned __int64 v18; // rcx
  char v19; // r14
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r14
  signed __int64 v22; // rdx
  _BYTE *v23; // rsi
  signed __int64 v24; // r14
  bool v25; // sf
  _DWORD *v26; // rsi
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rcx
  char v30; // al
  unsigned __int64 v31; // r14
  __int64 v32; // rax
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rdx
  char v36; // cl
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int16 v40; // ax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // r14
  unsigned __int64 v46; // r14
  signed __int64 v47; // rdx
  _BYTE *v48; // rsi
  unsigned __int64 v49; // rcx
  char v50; // r14
  int v51; // eax
  unsigned __int64 v52; // r14
  char v53; // al
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // [rsp+28h] [rbp-50h]
  _BYTE *v57; // [rsp+30h] [rbp-48h]
  _QWORD v58[2]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v59; // [rsp+48h] [rbp-30h]
  int v60; // [rsp+4Ch] [rbp-2Ch]

  v60 = 0;
  v7 = a3;
  v9 = 4096;
  if ( a4 < 5 )
    return 3221226050LL;
  v10 = a1;
  v57 = &a1[a2];
  v11 = (unsigned __int64)(v57 - 352);
  v56 = (unsigned __int64)&a3[a4];
  v12 = v56 - 86;
  if ( !a6 || a2 < 0x1000 )
    v9 = a2;
  v13 = (unsigned __int64)&a1[v9];
  v58[0] = a6;
  v58[1] = a7;
  v59 = v9;
  if ( v11 < v13 )
    v13 = (unsigned __int64)(v57 - 352);
  v14 = 0LL;
LABEL_7:
  v15 = *(_DWORD *)v7;
  v16 = v7;
  v7 += 4;
  if ( (unsigned __int64)v7 >= v12 )
  {
    v34 = v56;
    goto LABEL_117;
  }
  if ( (unsigned __int64)v10 >= v13 )
  {
    if ( (unsigned __int64)v10 >= v11 )
    {
      v34 = v56;
LABEL_91:
      v33 = (unsigned __int64)v57;
      goto LABEL_83;
    }
    v32 = sub_14038CF50(v58, v11, v10);
    v11 = (unsigned __int64)(v57 - 352);
    v13 = v32;
  }
  v17 = 2 * v15 + 1;
  if ( v15 >= 0 )
  {
    while ( 1 )
    {
LABEL_20:
      if ( v17 < 0 )
      {
        *v10++ = *v7++;
        goto LABEL_12;
      }
      v25 = (v17 & 0x40000000) != 0;
      v17 *= 2;
      if ( v25 )
      {
        *(_WORD *)v10 = *(_WORD *)v7;
        v10 += 2;
        v7 += 2;
        goto LABEL_12;
      }
      v25 = (v17 & 0x40000000) != 0;
      v17 *= 2;
      *(_DWORD *)v10 = *(_DWORD *)v7;
      if ( v25 )
        break;
      v10 += 4;
      v7 += 4;
      v25 = (v17 & 0x40000000) != 0;
      v17 *= 2;
      if ( v25 )
        goto LABEL_12;
      v17 *= 2;
    }
    v10 += 3;
    v7 += 3;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v18 = *(unsigned __int16 *)v7;
    v7 += 2;
    v19 = v18;
    v20 = (v18 >> 3) + 1;
    v21 = v19 & 7;
    if ( v21 != 7 )
      goto LABEL_14;
    if ( v14 )
    {
      v27 = (unsigned __int64)(unsigned __int8)*v14 >> 4;
      v14 = 0LL;
    }
    else
    {
      v14 = v7++;
      v27 = *v14 & 0xF;
    }
    if ( v27 == 15 )
      break;
LABEL_33:
    v21 = v27 + 7;
LABEL_14:
    v22 = v21;
    v23 = &v10[-v20];
    v24 = v21 + 3;
    if ( &v10[-v20] < a1 )
      return 3221226050LL;
    if ( v20 < 4 )
    {
      *v10 = *v23;
      v29 = v20 - 1;
      if ( v29 )
      {
        v10[1] = v23[1];
        if ( v29 == 1 )
        {
          v24 -= 2LL;
          v10 += 2;
          goto LABEL_44;
        }
        v30 = v23[2];
      }
      else
      {
        v10[1] = *v23;
        v30 = *v23;
      }
      v10[2] = v30;
      v24 = v22;
      v10 += 3;
LABEL_44:
      if ( !v24 )
        goto LABEL_18;
    }
    *(_DWORD *)v10 = *(_DWORD *)v23;
    *((_DWORD *)v10 + 1) = *((_DWORD *)v23 + 1);
    if ( v24 >= 9 )
    {
      v10 += 8;
      v26 = v23 + 8;
      for ( v24 -= 8LL; ; v24 -= 16LL )
      {
        if ( (unsigned __int64)v10 >= v13 )
        {
          if ( (unsigned __int64)v10 >= v11 )
            goto LABEL_57;
          v13 = sub_14038CF50(v58, v11, v10);
        }
        *(_DWORD *)v10 = *v26;
        *((_DWORD *)v10 + 1) = v26[1];
        *((_DWORD *)v10 + 2) = v26[2];
        *((_DWORD *)v10 + 3) = v26[3];
        if ( v24 < 17 )
          break;
        v11 = (unsigned __int64)(v57 - 352);
        v10 += 16;
        v26 += 4;
      }
    }
    v10 += v24;
LABEL_18:
    v11 = (unsigned __int64)(v57 - 352);
    if ( v17 >= 0 )
    {
      v17 *= 2;
      goto LABEL_20;
    }
LABEL_12:
    v17 *= 2;
    if ( !v17 )
      goto LABEL_7;
  }
  if ( (unsigned __int64)(v7 + 7) < v12 )
  {
    v28 = (unsigned __int8)*v7++;
    if ( v28 == 255 )
    {
      v31 = *(unsigned __int16 *)v7;
      v7 += 2;
      if ( !v31 )
      {
        v31 = *(unsigned int *)v7;
        v7 += 4;
      }
      if ( v31 < 0x16 || &v10[v31 + 3] < v10 )
        return 3221226050LL;
      v28 = v31 - 22;
    }
    v27 = v28 + 15;
    goto LABEL_33;
  }
  v34 = v56;
LABEL_96:
  if ( (unsigned __int64)v7 >= v34 )
    return 3221226050LL;
  v45 = (unsigned __int8)*v7++;
  if ( v45 == 255 )
  {
    if ( (unsigned __int64)(v7 + 1) >= v34 )
      return 3221226050LL;
    v52 = *(unsigned __int16 *)v7;
    v7 += 2;
    if ( !v52 )
    {
      if ( (unsigned __int64)(v7 + 3) >= v34 )
        return 3221226050LL;
      v52 = *(unsigned int *)v7;
      v7 += 4;
    }
    if ( v52 < 0x16 || &v10[v52 + 3] < v10 )
      return 3221226050LL;
    v45 = v52 - 22;
  }
  v44 = v45 + 15;
  while ( 2 )
  {
    v46 = v44 + 7;
LABEL_100:
    v47 = v46;
    v48 = &v10[-v20];
    v24 = v46 + 3;
    if ( &v10[-v20] < a1 )
      return 3221226050LL;
    if ( v20 >= 4 )
    {
LABEL_102:
      *(_DWORD *)v10 = *(_DWORD *)v48;
      *((_DWORD *)v10 + 1) = *((_DWORD *)v48 + 1);
      if ( v24 >= 9 )
      {
        v10 += 8;
        v26 = v48 + 8;
        for ( v24 -= 8LL; ; v24 -= 16LL )
        {
          if ( (unsigned __int64)v10 >= v13 )
          {
            if ( (unsigned __int64)v10 >= v11 )
            {
LABEL_57:
              v33 = (unsigned __int64)v57;
              if ( &v10[v24] <= v57 )
              {
                v34 = v56;
                qmemcpy(v10, v26, v24);
                v10 += v24;
                goto LABEL_69;
              }
              return 3221226050LL;
            }
            v13 = sub_14038CF50(v58, v11, v10);
          }
          *(_DWORD *)v10 = *v26;
          *((_DWORD *)v10 + 1) = v26[1];
          *((_DWORD *)v10 + 2) = v26[2];
          *((_DWORD *)v10 + 3) = v26[3];
          if ( v24 < 17 )
            break;
          v11 = (unsigned __int64)(v57 - 352);
          v10 += 16;
          v26 += 4;
        }
        v34 = v56;
      }
      v10 += v24;
      goto LABEL_104;
    }
    *v10 = *v48;
    if ( v20 == 1 )
    {
      v10[1] = *v48;
      v53 = *v48;
      goto LABEL_143;
    }
    v10[1] = v48[1];
    if ( v20 == 2 )
    {
      v24 -= 2LL;
      v10 += 2;
    }
    else
    {
      v53 = v48[2];
LABEL_143:
      v10[2] = v53;
      v24 = v47;
      v10 += 3;
    }
    if ( v24 )
      goto LABEL_102;
LABEL_104:
    if ( v17 >= 0 )
      goto LABEL_124;
LABEL_105:
    while ( 1 )
    {
      v11 = (unsigned __int64)(v57 - 352);
      v16 = v7;
      v17 *= 2;
      if ( v17 )
        break;
      if ( (unsigned __int64)(v7 + 3) >= v34 )
        return 3221226050LL;
      v15 = *(_DWORD *)v7;
LABEL_117:
      v7 = v16 + 4;
      if ( (unsigned __int64)v10 >= v13 )
      {
        if ( (unsigned __int64)v10 >= v11 )
          goto LABEL_91;
        v54 = sub_14038CF50(v58, v11, v10);
        v34 = v56;
        v13 = v54;
        v11 = (unsigned __int64)(v57 - 352);
      }
      v17 = 2 * v15 + 1;
      if ( v15 < 0 )
        break;
      while ( 1 )
      {
        if ( v17 < 0 )
        {
          if ( (unsigned __int64)v7 >= v34 )
            return 3221226050LL;
          *v10++ = *v7++;
          goto LABEL_105;
        }
        v25 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        if ( v25 )
        {
          if ( (unsigned __int64)(v7 + 1) >= v34 )
            return 3221226050LL;
          *(_WORD *)v10 = *(_WORD *)v7;
          v10 += 2;
          v7 += 2;
          goto LABEL_105;
        }
        v25 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        if ( v25 )
          break;
        v17 *= 2;
        if ( (unsigned __int64)(v7 + 3) >= v34 )
          return 3221226050LL;
        v51 = *(_DWORD *)v7;
        v7 += 4;
        *(_DWORD *)v10 = v51;
        v10 += 4;
        if ( v17 < 0 )
          goto LABEL_105;
LABEL_124:
        v17 *= 2;
      }
      if ( (unsigned __int64)(v7 + 2) >= v34 )
        return 3221226050LL;
      *(_WORD *)v10 = *(_WORD *)v7;
      v10[2] = v7[2];
      v10 += 3;
      v7 += 3;
    }
    if ( v7 == (_BYTE *)v34 )
    {
      v33 = (unsigned __int64)v57;
      goto LABEL_69;
    }
    if ( (unsigned __int64)(v7 + 1) < v34 )
    {
      v49 = *(unsigned __int16 *)v7;
      v7 += 2;
      v50 = v49;
      v20 = (v49 >> 3) + 1;
      v46 = v50 & 7;
      if ( v46 == 7 )
      {
        if ( v14 )
        {
          v44 = (unsigned __int64)(unsigned __int8)*v14 >> 4;
          v14 = 0LL;
        }
        else
        {
          if ( (unsigned __int64)v7 >= v34 )
            return 3221226050LL;
          v14 = v7++;
          v44 = *v14 & 0xF;
        }
        if ( v44 != 15 )
          continue;
        goto LABEL_96;
      }
      goto LABEL_100;
    }
    break;
  }
  v33 = (unsigned __int64)v57;
  if ( v10 >= v57 )
  {
    while ( 1 )
    {
LABEL_69:
      if ( v17 >= 0 )
      {
        v17 *= 2;
        goto LABEL_71;
      }
LABEL_62:
      while ( 1 )
      {
        v17 *= 2;
        if ( v17 )
          break;
        if ( (unsigned __int64)(v7 + 3) >= v34 )
          return 3221226050LL;
        v15 = *(_DWORD *)v7;
        v7 += 4;
LABEL_83:
        v17 = 2 * v15 + 1;
        if ( v15 < 0 )
          break;
LABEL_71:
        while ( v17 >= 0 )
        {
          v17 *= 2;
          if ( (unsigned __int64)(v7 + 2) > v34 || (unsigned __int64)(v10 + 2) > v33 )
            return 3221226050LL;
          v40 = *(_WORD *)v7;
          v7 += 2;
          *(_WORD *)v10 = v40;
          v10 += 2;
          if ( v17 < 0 )
            goto LABEL_62;
          v17 *= 2;
        }
        if ( (unsigned __int64)v7 >= v34 || (unsigned __int64)v10 >= v33 )
          return 3221226050LL;
        *v10++ = *v7++;
      }
      if ( v7 == (_BYTE *)v34 )
        goto LABEL_89;
      if ( (unsigned __int64)(v7 + 1) >= v34 )
        break;
      v35 = *(unsigned __int16 *)v7;
      v7 += 2;
      v36 = v35;
      v37 = (v35 >> 3) + 1;
      v38 = v36 & 7;
      if ( v38 == 7 )
      {
        if ( v14 )
        {
          v41 = (unsigned __int64)(unsigned __int8)*v14 >> 4;
          v14 = 0LL;
        }
        else
        {
          if ( (unsigned __int64)v7 >= v34 )
            return 3221226050LL;
          v14 = v7++;
          v41 = *v14 & 0xF;
        }
        if ( v41 == 15 )
        {
          if ( (unsigned __int64)v7 >= v34 )
            return 3221226050LL;
          v42 = (unsigned __int8)*v7++;
          if ( v42 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v34 )
              return 3221226050LL;
            v55 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v55 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v34 )
                return 3221226050LL;
              v55 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v55 < 0x16 || &v10[v55 + 3] < v10 )
              return 3221226050LL;
            v42 = v55 - 22;
          }
          v41 = v42 + 15;
        }
        v38 = v41 + 7;
      }
      v39 = v38 + 3;
      if ( &v10[-v37] < a1 || (unsigned __int64)&v10[v39] > v33 )
        return 3221226050LL;
      qmemcpy(v10, &v10[-v37], v39);
      v10 += v39;
    }
    if ( (unsigned __int64)v10 >= v33 )
    {
LABEL_89:
      *a5 = (_DWORD)v10 - (_DWORD)a1;
      return 0LL;
    }
  }
  return 3221226050LL;
}
