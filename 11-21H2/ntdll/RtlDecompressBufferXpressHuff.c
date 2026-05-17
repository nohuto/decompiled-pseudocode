/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x18005D400
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x18005D960 (XpressBuildHuffmanDecodingTable.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuff(
        _BYTE *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rbx
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  unsigned __int16 *v14; // rbx
  _BYTE *v15; // r13
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // r9d
  unsigned __int64 v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int16 v23; // di
  int v24; // eax
  char v25; // dl
  int v26; // edx
  int v27; // ecx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rdi
  _BYTE *v32; // rcx
  int v33; // edx
  int v34; // edx
  _DWORD *v35; // rcx
  int v36; // ecx
  unsigned __int64 v37; // kr00_8
  unsigned __int64 v38; // r10
  char v39; // al
  unsigned __int64 v40; // r10
  int v41; // ecx
  unsigned __int64 v42; // r10
  __int16 v43; // di
  __int64 v44; // rcx
  int v45; // edx
  int v46; // edx
  int v47; // eax
  unsigned __int64 v48; // kr08_8
  unsigned __int64 v49; // r10
  unsigned __int64 v51; // r10
  _BYTE *v52; // [rsp+80h] [rbp+38h]

  v7 = a3;
  if ( !a7 )
    return 3221225704LL;
  v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = (unsigned __int64)&a1[a2];
  v52 = (_BYTE *)v12;
LABEL_3:
  if ( (__int64)(v11 - (_QWORD)v7) < 260 )
  {
    if ( v10 != (_BYTE *)v12 )
      return 3221226050LL;
    goto LABEL_74;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v9, v7) )
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
              v37 = 2LL * v18;
              v36 = HIDWORD(v37);
              v18 = v37;
              v20 = *(_WORD *)(v9 + 2LL * (__int16)(v36 - v20) + 3104);
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
              goto LABEL_62;
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v33 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v33 << -(char)v13;
            v13 += 16LL;
          }
          if ( v23 >= 0 )
            break;
          *v10++ = v22;
        }
        if ( v22 == 256 && (unsigned __int64)v7 >= v11 && v10 == v52 )
          goto LABEL_74;
        v25 = (v22 - 256) >> 31;
        v24 = v22 - 256;
        v26 = v25 & 0xF;
        v27 = (v26 + v24) >> 4;
        v28 = ((v26 + v24) & 0xF) - v26;
        if ( v28 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v38 = *v7++;
          if ( v38 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v40 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v40 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v40 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v40 < 0xF || &v10[v40 + 3] < v10 )
              return 3221226050LL;
            v38 = v40 - 15;
          }
          v28 = v38 + 15;
        }
        v29 = v28;
        v30 = v28 + 3;
        v31 = (1LL << v27) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v27) >> 1);
        v18 <<= v27;
        v13 -= v27;
        if ( v13 < 0 )
        {
          if ( (unsigned __int64)v10 >= v19 )
            goto LABEL_64;
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v34 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v34 << -(char)v13;
          v13 += 16LL;
        }
        v32 = &v10[-v31];
        if ( &v10[-v31] < a1 )
          return 3221226050LL;
        if ( v31 < 4 )
          break;
LABEL_18:
        *(_DWORD *)v10 = *(_DWORD *)v32;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v32 + 1);
        if ( v30 >= 9 )
        {
          v10 += 8;
          v35 = v32 + 8;
          v30 -= 8LL;
          while ( (unsigned __int64)v10 < v19 )
          {
            *(_DWORD *)v10 = *v35;
            *((_DWORD *)v10 + 1) = v35[1];
            *((_DWORD *)v10 + 2) = v35[2];
            *((_DWORD *)v10 + 3) = v35[3];
            if ( v30 < 0x11 )
              goto LABEL_19;
            v10 += 16;
            v35 += 4;
            v30 -= 16LL;
          }
          if ( &v10[v30] <= v52 )
          {
            qmemcpy(v10, v35, v30);
            v10 += v30;
            goto LABEL_56;
          }
          return 3221226050LL;
        }
LABEL_19:
        v10 += v30;
      }
      *v10 = *v32;
      if ( v31 == 1 )
      {
        v10[1] = *v32;
        v39 = *v32;
      }
      else
      {
        v10[1] = v32[1];
        if ( v31 == 2 )
        {
          v30 -= 2LL;
          v10 += 2;
          goto LABEL_39;
        }
        v39 = v32[2];
      }
      v10[2] = v39;
      v30 = v29;
      v10 += 3;
LABEL_39:
      if ( v30 )
        goto LABEL_18;
    }
  }
  while ( 1 )
  {
LABEL_56:
    if ( v10 >= v15 )
    {
      v12 = (unsigned __int64)v52;
      goto LABEL_3;
    }
    v43 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v43 <= 0 )
    {
      v18 <<= 10;
      v13 -= 10LL;
      do
      {
        --v13;
        v48 = 2LL * v18;
        v47 = HIDWORD(v48);
        v18 = v48;
        v43 = *(_WORD *)(v9 + 2LL * (__int16)(v47 - v43) + 3104);
      }
      while ( v43 <= 0 );
    }
    else
    {
      v44 = v43 & 0xF;
      v18 <<= v44;
      v13 -= v44;
    }
    v23 = ((unsigned __int16)v43 >> 4) - 256;
    if ( v13 < 0 )
    {
LABEL_62:
      if ( (unsigned __int64)(v7 + 1) < v11 )
      {
        v45 = *(unsigned __int16 *)v7;
        v7 += 2;
        v18 += v45 << -(char)v13;
        v13 += 16LL;
        goto LABEL_60;
      }
      return 3221226050LL;
    }
LABEL_60:
    if ( v23 >= 0 )
      break;
    *v10++ = v23;
  }
  if ( !v23 && (unsigned __int64)v7 >= v11 && v10 == v52 )
  {
LABEL_74:
    *a6 = (_DWORD)v10 - (_DWORD)a1;
    return 0LL;
  }
  v41 = v23 / 16;
  v42 = v23 % 16;
  if ( v42 != 15 )
    goto LABEL_52;
  if ( (unsigned __int64)v7 >= v11 )
    return 3221226050LL;
  v49 = *v7++;
  if ( v49 == 255 )
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
    if ( v51 >= 0xF && &v10[v51 + 3] >= v10 )
    {
      v49 = v51 - 15;
      goto LABEL_71;
    }
  }
  else
  {
LABEL_71:
    v42 = v49 + 15;
LABEL_52:
    v30 = v42 + 3;
    v31 = (1LL << v41) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v41) >> 1);
    v18 <<= v41;
    v13 -= v41;
    if ( v13 < 0 )
    {
LABEL_64:
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        return 3221226050LL;
      v46 = *(unsigned __int16 *)v7;
      v7 += 2;
      v18 += v46 << -(char)v13;
      v13 += 16LL;
    }
    if ( &v10[-v31] >= a1 && &v10[v30] <= v52 )
    {
      qmemcpy(v10, &v10[-v31], v30);
      v10 += v30;
      goto LABEL_56;
    }
  }
  return 3221226050LL;
}
