/*
 * XREFs of sub_14021B140 @ 0x14021B140
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021B6C0 @ 0x14021B6C0 (sub_14021B6C0.c)
 */

__int64 __fastcall sub_14021B140(_BYTE *a1, int a2, unsigned __int8 *a3, int a4, int a5, _DWORD *a6, __int64 a7)
{
  unsigned __int8 *v7; // rbp
  unsigned __int64 v9; // rbx
  _BYTE *v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  unsigned __int16 *v14; // rbp
  _BYTE *v15; // r13
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // r9d
  unsigned __int64 v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int16 v23; // di
  int v24; // edx
  int v25; // eax
  char v26; // dl
  int v27; // edx
  int v28; // ecx
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rdi
  _BYTE *v33; // rcx
  int v34; // edx
  int v35; // ecx
  unsigned __int64 v36; // kr00_8
  _DWORD *v37; // rcx
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rdi
  char v40; // al
  int v42; // edx
  int v43; // ecx
  unsigned __int64 v44; // r10
  __int16 v45; // di
  __int64 v46; // rcx
  int v47; // edx
  int v48; // eax
  unsigned __int64 v49; // kr08_8
  unsigned __int64 v50; // r10
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // r10
  _BYTE *v53; // [rsp+80h] [rbp+38h]

  v7 = a3;
  if ( !a7 )
    return 3221225704LL;
  v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = (unsigned __int64)&a1[a2];
  v53 = (_BYTE *)v12;
LABEL_3:
  if ( (__int64)(v11 - (_QWORD)v7) < 260 )
  {
    if ( v10 != (_BYTE *)v12 )
      return 3221226050LL;
    goto LABEL_44;
  }
  if ( (unsigned int)sub_14021B6C0(v9, v7) )
    return 3221226050LL;
  v13 = 16LL;
  v14 = (unsigned __int16 *)(v7 + 256);
  v15 = (_BYTE *)v12;
  v16 = v14[1];
  v17 = *v14;
  v7 = (unsigned __int8 *)(v14 + 2);
  v18 = v16 + (v17 << 16);
  if ( (unsigned __int64)(v10 + 0x10000) <= v12 )
    v15 = v10 + 0x10000;
  v19 = (unsigned __int64)(v15 - 188);
  if ( v10 < v15 - 188 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
          if ( v20 <= 0 )
          {
            v18 <<= 10;
            v13 -= 10LL;
            do
            {
              --v13;
              v36 = 2LL * v18;
              v35 = HIDWORD(v36);
              v18 = v36;
              v20 = *(_WORD *)(v9 + 2LL * (__int16)(v35 - v20) + 3104);
            }
            while ( v20 <= 0 );
          }
          else
          {
            v21 = v20 & 0xF;
            v18 <<= v21;
            v13 -= v21;
          }
          v22 = (unsigned __int16)v20 >> 4;
          v23 = v22 - 256;
          if ( v13 < 0 )
          {
            if ( (unsigned __int64)v10 >= v19 )
              goto LABEL_45;
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v24 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v24 << -(char)v13;
            v13 += 16LL;
          }
          if ( v23 >= 0 )
            break;
          *v10++ = v22;
        }
        if ( v22 == 256 && (unsigned __int64)v7 >= v11 && v10 == v53 )
          goto LABEL_44;
        v26 = (v22 - 256) >> 31;
        v25 = v22 - 256;
        v27 = v26 & 0xF;
        v28 = (v27 + v25) >> 4;
        v29 = ((v27 + v25) & 0xF) - v27;
        if ( v29 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v38 = *v7++;
          if ( v38 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v51 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v51 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v51 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v51 < 0xF || &v10[v51 + 3] < v10 )
              return 3221226050LL;
            v38 = v51 - 15;
          }
          v29 = v38 + 15;
        }
        v30 = v29;
        v31 = v29 + 3;
        v32 = (1LL << v28) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v28) >> 1);
        v18 <<= v28;
        v13 -= v28;
        if ( v13 < 0 )
        {
          if ( (unsigned __int64)v10 >= v19 )
            goto LABEL_59;
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v34 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v34 << -(char)v13;
          v13 += 16LL;
        }
        v33 = &v10[-v32];
        if ( &v10[-v32] < a1 )
          return 3221226050LL;
        if ( v32 < 4 )
          break;
LABEL_21:
        *(_DWORD *)v10 = *(_DWORD *)v33;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v33 + 1);
        if ( v31 >= 9 )
        {
          v10 += 8;
          v37 = v33 + 8;
          v31 -= 8LL;
          while ( (unsigned __int64)v10 < v19 )
          {
            *(_DWORD *)v10 = *v37;
            *((_DWORD *)v10 + 1) = v37[1];
            *((_DWORD *)v10 + 2) = v37[2];
            *((_DWORD *)v10 + 3) = v37[3];
            if ( v31 < 0x11 )
              goto LABEL_22;
            v10 += 16;
            v37 += 4;
            v31 -= 16LL;
          }
          if ( &v10[v31] <= v53 )
          {
            qmemcpy(v10, v37, v31);
            v10 += v31;
            goto LABEL_53;
          }
          return 3221226050LL;
        }
LABEL_22:
        v10 += v31;
      }
      *v10 = *v33;
      v39 = v32 - 1;
      if ( v39 )
      {
        v10[1] = v33[1];
        if ( v39 == 1 )
        {
          v31 -= 2LL;
          v10 += 2;
          goto LABEL_41;
        }
        v40 = v33[2];
      }
      else
      {
        v10[1] = *v33;
        v40 = *v33;
      }
      v10[2] = v40;
      v31 = v30;
      v10 += 3;
LABEL_41:
      if ( v31 )
        goto LABEL_21;
    }
  }
  while ( 1 )
  {
LABEL_53:
    if ( v10 >= v15 )
    {
      v12 = (unsigned __int64)v53;
      goto LABEL_3;
    }
    v45 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v45 <= 0 )
    {
      v18 <<= 10;
      v13 -= 10LL;
      do
      {
        --v13;
        v49 = 2LL * v18;
        v48 = HIDWORD(v49);
        v18 = v49;
        v45 = *(_WORD *)(v9 + 2LL * (__int16)(v48 - v45) + 3104);
      }
      while ( v45 <= 0 );
    }
    else
    {
      v46 = v45 & 0xF;
      v18 <<= v46;
      v13 -= v46;
    }
    v23 = ((unsigned __int16)v45 >> 4) - 256;
    if ( v13 < 0 )
    {
LABEL_45:
      if ( (unsigned __int64)(v7 + 1) < v11 )
      {
        v42 = *(unsigned __int16 *)v7;
        v7 += 2;
        v18 += v42 << -(char)v13;
        v13 += 16LL;
        goto LABEL_57;
      }
      return 3221226050LL;
    }
LABEL_57:
    if ( v23 >= 0 )
      break;
    *v10++ = v23;
  }
  if ( !v23 && (unsigned __int64)v7 >= v11 && v10 == v53 )
  {
LABEL_44:
    *a6 = (_DWORD)v10 - (_DWORD)a1;
    return 0LL;
  }
  v43 = v23 / 16;
  v44 = v23 % 16;
  if ( v44 != 15 )
    goto LABEL_49;
  if ( (unsigned __int64)v7 >= v11 )
    return 3221226050LL;
  v50 = *v7++;
  if ( v50 == 255 )
  {
    if ( (unsigned __int64)(v7 + 1) >= v11 )
      return 3221226050LL;
    v52 = *(unsigned __int16 *)v7;
    v7 += 2;
    if ( !v52 )
    {
      if ( (unsigned __int64)(v7 + 3) >= v11 )
        return 3221226050LL;
      v52 = *(unsigned int *)v7;
      v7 += 4;
    }
    if ( v52 >= 0xF && &v10[v52 + 3] >= v10 )
    {
      v50 = v52 - 15;
      goto LABEL_67;
    }
  }
  else
  {
LABEL_67:
    v44 = v50 + 15;
LABEL_49:
    v31 = v44 + 3;
    v32 = (1LL << v43) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v43) >> 1);
    v18 <<= v43;
    v13 -= v43;
    if ( v13 < 0 )
    {
LABEL_59:
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        return 3221226050LL;
      v47 = *(unsigned __int16 *)v7;
      v7 += 2;
      v18 += v47 << -(char)v13;
      v13 += 16LL;
    }
    if ( &v10[-v32] >= a1 && &v10[v31] <= v53 )
    {
      qmemcpy(v10, &v10[-v32], v31);
      v10 += v31;
      goto LABEL_53;
    }
  }
  return 3221226050LL;
}
