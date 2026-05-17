/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x180056EA0
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x180057430 (XpressBuildHuffmanDecodingTable.c)
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
  _BYTE *v12; // r11
  __int64 v13; // r8
  _BYTE *v14; // r13
  unsigned __int16 *v15; // rbx
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // r9d
  unsigned __int64 v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int16 v23; // di
  __int64 v24; // rdx
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rdi
  _BYTE *v29; // rcx
  int v30; // edx
  int v31; // edx
  _DWORD *v32; // rcx
  int v33; // ecx
  unsigned __int64 v34; // r10
  char v35; // al
  unsigned __int64 v36; // r10
  __int64 v38; // rdx
  unsigned __int64 v39; // r10
  __int16 v40; // di
  __int64 v41; // rcx
  int v42; // edx
  int v43; // edx
  int v44; // eax
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // [rsp+80h] [rbp+38h]

  v7 = a3;
  if ( !a7 )
    return 3221225704LL;
  v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = &a1[a2];
  v47 = (unsigned __int64)v12;
LABEL_3:
  if ( (__int64)(v11 - (_QWORD)v7) < 260 )
  {
    if ( v10 != v12 )
      return 3221226050LL;
  }
  else
  {
    if ( (unsigned int)XpressBuildHuffmanDecodingTable(v9, v7) )
      return 3221226050LL;
    v12 = (_BYTE *)v47;
    v13 = 16LL;
    v14 = (_BYTE *)v47;
    v15 = (unsigned __int16 *)(v7 + 256);
    v16 = v15[1];
    v17 = *v15;
    v7 = (unsigned __int8 *)(v15 + 2);
    v18 = v16 + (v17 << 16);
    if ( (unsigned __int64)(v10 + 0x10000) <= v47 )
      v14 = v10 + 0x10000;
    v19 = (unsigned __int64)(v14 - 188);
    if ( v10 < v14 - 188 )
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
                v33 = (unsigned __int64)v18 >> 31;
                v18 *= 2;
                v20 = *(_WORD *)(v9 + 2LL * (__int16)(v33 - v20) + 3104);
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
                goto LABEL_67;
              if ( (unsigned __int64)(v7 + 1) >= v11 )
                return 3221226050LL;
              v30 = *(unsigned __int16 *)v7;
              v7 += 2;
              v18 += v30 << -(char)v13;
              v13 += 16LL;
            }
            if ( v23 >= 0 )
              break;
            *v10++ = v22;
          }
          if ( v22 == 256 && (unsigned __int64)v7 >= v11 && v10 == v12 )
            goto LABEL_51;
          v24 = (v22 - 256) / 16;
          v25 = (v22 - 256) % 16;
          if ( v25 == 15 )
          {
            if ( (unsigned __int64)v7 >= v11 )
              return 3221226050LL;
            v34 = *v7++;
            if ( v34 == 255 )
            {
              if ( (unsigned __int64)(v7 + 1) >= v11 )
                return 3221226050LL;
              v36 = *(unsigned __int16 *)v7;
              v7 += 2;
              if ( !v36 )
              {
                if ( (unsigned __int64)(v7 + 3) >= v11 )
                  return 3221226050LL;
                v36 = *(unsigned int *)v7;
                v7 += 4;
              }
              if ( v36 < 0xF || &v10[v36 + 3] < v10 )
                return 3221226050LL;
              v34 = v36 - 15;
            }
            v25 = v34 + 15;
          }
          v26 = v25;
          v27 = v25 + 3;
          v28 = (1LL << v24) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v24) >> 1);
          v18 <<= v24;
          v13 -= v24;
          if ( v13 < 0 )
          {
            if ( (unsigned __int64)v10 >= v19 )
              goto LABEL_69;
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v31 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v31 << -(char)v13;
            v13 += 16LL;
          }
          v29 = &v10[-v28];
          if ( &v10[-v28] < a1 )
            return 3221226050LL;
          if ( v28 < 4 )
            break;
LABEL_18:
          *(_DWORD *)v10 = *(_DWORD *)v29;
          *((_DWORD *)v10 + 1) = *((_DWORD *)v29 + 1);
          if ( v27 >= 9 )
          {
            v10 += 8;
            v32 = v29 + 8;
            v27 -= 8LL;
            while ( (unsigned __int64)v10 < v19 )
            {
              *(_DWORD *)v10 = *v32;
              *((_DWORD *)v10 + 1) = v32[1];
              *((_DWORD *)v10 + 2) = v32[2];
              *((_DWORD *)v10 + 3) = v32[3];
              if ( v27 < 0x11 )
                goto LABEL_19;
              v10 += 16;
              v32 += 4;
              v27 -= 16LL;
            }
            v12 = (_BYTE *)v47;
            if ( (unsigned __int64)&v10[v27] <= v47 )
            {
              qmemcpy(v10, v32, v27);
              v10 += v27;
              goto LABEL_61;
            }
            return 3221226050LL;
          }
LABEL_19:
          v12 = (_BYTE *)v47;
          v10 += v27;
        }
        *v10 = *v29;
        if ( v28 == 1 )
        {
          v10[1] = *v29;
          v35 = *v29;
        }
        else
        {
          v10[1] = v29[1];
          if ( v28 == 2 )
          {
            v27 -= 2LL;
            v10 += 2;
            goto LABEL_39;
          }
          v35 = v29[2];
        }
        v10[2] = v35;
        v27 = v26;
        v10 += 3;
LABEL_39:
        v12 = (_BYTE *)v47;
        if ( v27 )
          goto LABEL_18;
      }
    }
    while ( 1 )
    {
LABEL_61:
      if ( v10 >= v14 )
        goto LABEL_3;
      v40 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
      if ( v40 <= 0 )
      {
        v18 <<= 10;
        v13 -= 10LL;
        do
        {
          --v13;
          v44 = (unsigned __int64)v18 >> 31;
          v18 *= 2;
          v40 = *(_WORD *)(v9 + 2LL * (__int16)(v44 - v40) + 3104);
        }
        while ( v40 <= 0 );
      }
      else
      {
        v41 = v40 & 0xF;
        v18 <<= v41;
        v13 -= v41;
      }
      v23 = ((unsigned __int16)v40 >> 4) - 256;
      if ( v13 < 0 )
      {
LABEL_67:
        if ( (unsigned __int64)(v7 + 1) < v11 )
        {
          v42 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v42 << -(char)v13;
          v13 += 16LL;
          goto LABEL_65;
        }
        return 3221226050LL;
      }
LABEL_65:
      if ( v23 >= 0 )
        break;
      *v10++ = v23;
    }
    if ( v23 || (unsigned __int64)v7 < v11 || v10 != v12 )
    {
      v38 = v23 / 16;
      v39 = v23 % 16;
      if ( v39 != 15 )
        goto LABEL_57;
      if ( (unsigned __int64)v7 >= v11 )
        return 3221226050LL;
      v45 = *v7++;
      if ( v45 == 255 )
      {
        if ( (unsigned __int64)(v7 + 1) >= v11 )
          return 3221226050LL;
        v46 = *(unsigned __int16 *)v7;
        v7 += 2;
        if ( !v46 )
        {
          if ( (unsigned __int64)(v7 + 3) >= v11 )
            return 3221226050LL;
          v46 = *(unsigned int *)v7;
          v7 += 4;
        }
        if ( v46 >= 0xF && &v10[v46 + 3] >= v10 )
        {
          v45 = v46 - 15;
          goto LABEL_76;
        }
      }
      else
      {
LABEL_76:
        v39 = v45 + 15;
LABEL_57:
        v27 = v39 + 3;
        v28 = (1LL << v38) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v38) >> 1);
        v18 <<= v38;
        v13 -= v38;
        if ( v13 < 0 )
        {
LABEL_69:
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v43 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v43 << -(char)v13;
          v13 += 16LL;
        }
        if ( &v10[-v28] >= a1 )
        {
          v12 = (_BYTE *)v47;
          if ( (unsigned __int64)&v10[v27] <= v47 )
          {
            qmemcpy(v10, &v10[-v28], v27);
            v10 += v27;
            goto LABEL_61;
          }
        }
      }
      return 3221226050LL;
    }
  }
LABEL_51:
  *a6 = (_DWORD)v10 - (_DWORD)a1;
  return 0LL;
}
