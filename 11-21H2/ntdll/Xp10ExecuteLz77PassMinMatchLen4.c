/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen4 @ 0x18011C4B4
 * Callers:
 *     Xp10CompressBuffer @ 0x18011AC98 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ExecuteLz77PassMinMatchLen4(
        unsigned int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  unsigned int *v6; // r10
  unsigned __int64 v7; // r14
  int v8; // r11d
  unsigned __int8 *v9; // r8
  __int16 v10; // cx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _DWORD *v13; // r9
  unsigned int *v14; // rbx
  _BYTE *v15; // r15
  __int64 v16; // rdx
  unsigned __int8 *v17; // r11
  int v18; // eax
  unsigned __int8 *v19; // rcx
  int v20; // edi
  int v21; // esi
  int v22; // edi
  unsigned __int8 *v23; // rcx
  int v24; // edx
  _DWORD *v25; // rsi
  unsigned int v26; // ecx
  _DWORD *v27; // rdx
  signed __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int8 *i; // rdx
  unsigned int *v31; // r14
  unsigned int v32; // ebx
  unsigned int v33; // ebp
  int v34; // r13d
  unsigned __int8 *v35; // rdx
  unsigned __int8 *v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned int v40; // esi
  int v41; // edx
  unsigned __int8 *v42; // r13
  unsigned __int8 *v43; // r12
  unsigned __int16 *v44; // r9
  unsigned __int16 *v45; // rcx
  int v46; // r8d
  unsigned __int16 *v47; // r11
  unsigned int v48; // ecx
  unsigned int v49; // eax
  unsigned __int16 v50; // ax
  unsigned int v51; // edx
  unsigned __int8 *v52; // rdi
  int v53; // ecx
  unsigned __int8 v54; // al
  unsigned __int16 v55; // ax
  __int64 v56; // rax
  unsigned __int16 *v57; // rcx
  int v59; // [rsp+0h] [rbp-98h]
  unsigned __int16 *v60; // [rsp+8h] [rbp-90h]
  int v61; // [rsp+10h] [rbp-88h]
  unsigned int v62; // [rsp+14h] [rbp-84h]
  unsigned int v63; // [rsp+18h] [rbp-80h]
  unsigned int v64; // [rsp+1Ch] [rbp-7Ch]
  unsigned __int8 *v65; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v66; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v67; // [rsp+30h] [rbp-68h]
  unsigned __int8 *v68; // [rsp+38h] [rbp-60h]
  unsigned __int64 v69; // [rsp+40h] [rbp-58h]
  unsigned int v71; // [rsp+A8h] [rbp+10h]
  int v73; // [rsp+B8h] [rbp+20h]

  v73 = (int)a4;
  v6 = a1;
  v71 = 0;
  v7 = a3;
  v8 = (int)a4;
  v9 = a2 + 1;
  v10 = **(_WORD **)a1;
  v6[6] = 0;
  v64 = 1 << (v10 & 0x1F);
  memset64(v6 + 1416, (unsigned __int64)a2, 0xEF2uLL);
  memset64(v6 + 9068, (unsigned __int64)a2, 0x12EEuLL);
  v11 = *a2;
  *a4 = v11;
  v12 = a5 - 15;
  v13 = a4 + 1;
  ++v6[v11 + 7];
  v60 = (unsigned __int16 *)v13;
  v69 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v13 >= v12 )
        goto LABEL_96;
      v14 = v6 + 2;
      v65 = v9;
      v59 = 0;
      v62 = 0;
      v63 = 0;
      v68 = v9;
      v66 = v9;
      do
      {
        v15 = v9 + 1;
        v67 = v9 + 1;
        v16 = *v9 + 8 * v9[1] + 4 * v9[3] + 2 * (unsigned int)v9[2];
        v17 = *(unsigned __int8 **)&v6[2 * v16 + 1416];
        *(_QWORD *)&v6[2 * v16 + 1416] = v9;
        if ( *v17 != *v9
          || v17[1] != *v15
          || v17[2] != v9[2]
          || v17[3] != v9[3]
          || (int)v9 - (int)v17 >= v64
          || v9 == v17 )
        {
          v61 = 0;
          v26 = 1;
          goto LABEL_51;
        }
        v18 = v9[4];
        v61 = 1;
        if ( v17[4] != (_BYTE)v18 )
        {
          v19 = *(unsigned __int8 **)&v6[2 * (unsigned int)(v16 + v18) + 9068];
          *(_QWORD *)&v6[2 * (unsigned int)v16 + 9068 + 2 * v17[4]] = v17;
          if ( *(_DWORD *)v19 != *(_DWORD *)v9
            || (v20 = v9[4], v19[4] != (_BYTE)v20)
            || (int)v9 - (int)v19 >= v64
            || v9 == v19 )
          {
            v26 = 4;
            goto LABEL_51;
          }
          v17 = v19;
          *(_QWORD *)&v6[2 * (unsigned int)(v16 + v20) + 9068] = v9;
        }
        v21 = v17[5];
        if ( v9[5] != (_BYTE)v21 )
        {
          v22 = 2
              * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, v9[4]))
               + 4
               * ((unsigned __int8)__ROR1__(*v15 ^ __ROL1__(v9[3], 3), 1)
                + (unsigned __int8)__ROL1__(v9[4] ^ (__ROR1__(*v9, 1) + 69), 3)));
          v23 = *(unsigned __int8 **)&v6[2 * v22 + 9068 + 2 * v9[5]];
          *(_QWORD *)&v6[2 * (v22 + v21) + 9068] = v17;
          if ( *(_DWORD *)v9 != *(_DWORD *)v23
            || v9[4] != v23[4]
            || (v24 = v9[5], (_BYTE)v24 != v23[5])
            || (int)v9 - (int)v23 >= v64
            || v9 == v23 )
          {
            v26 = 5;
            goto LABEL_51;
          }
          v17 = v23;
          *(_QWORD *)&v6[2 * (v22 + v24) + 9068] = v9;
        }
        v25 = v9 + 6;
        v26 = 6;
        if ( (unsigned __int64)(v9 + 6) < v7 - 40 )
        {
          v27 = v17 + 14;
          v28 = v9 - v17;
          while ( v26 < v64 - 32 && *v25 == *(v27 - 2) )
          {
            if ( *(_DWORD *)((char *)v27 + v28 - 4) != *(v27 - 1) )
            {
              v26 += 4;
              break;
            }
            if ( *(_DWORD *)((char *)v27 + v28) != *v27 )
            {
              v26 += 8;
              break;
            }
            if ( *(_DWORD *)((char *)v27 + v28 + 4) != v27[1] )
            {
              v26 += 12;
              break;
            }
            if ( *(_DWORD *)((char *)v27 + v28 + 8) != v27[2] )
            {
              v26 += 16;
              break;
            }
            if ( *(_DWORD *)((char *)v27 + v28 + 12) != v27[3] )
            {
              v26 += 20;
              break;
            }
            if ( *(_DWORD *)((char *)v27 + v28 + 16) != v27[4] )
            {
              v26 += 24;
              break;
            }
            if ( *(_DWORD *)((char *)v27 + v28 + 20) != v27[5] )
            {
              v26 += 28;
              break;
            }
            v26 += 32;
            v25 += 8;
            v27 += 8;
            if ( (unsigned __int64)v25 >= v7 - 40 )
              break;
          }
        }
        v29 = v26;
        for ( i = &v9[v26]; (unsigned __int64)i < v7 && *i == v17[v29]; i = &v9[v26] )
          v29 = ++v26;
LABEL_51:
        v31 = v14;
        v32 = v71;
        v33 = 0;
        v34 = v61;
        do
        {
          v35 = &v9[-*v31];
          if ( *v35 == *v9 && v35[1] == *v67 && v35[2] == v9[2] && v35[3] == v9[3] && v35 != v9 )
          {
            v36 = v9 + 4;
            LODWORD(v37) = 4;
            if ( (unsigned __int64)(v9 + 4) < a3 )
            {
              v38 = 4LL;
              do
              {
                if ( *v36 != v35[v38] )
                  break;
                v37 = (unsigned int)(v37 + 1);
                v38 = (unsigned int)v37;
                v36 = &v9[v37];
              }
              while ( (unsigned __int64)&v9[v37] < a3 );
            }
            if ( (unsigned int)v37 >= v26 )
            {
              v17 = &v9[-*v31];
              v34 = 2;
              v32 = v33;
              v26 = v37;
            }
          }
          ++v33;
          ++v31;
        }
        while ( v33 < 4 );
        v39 = v32;
        v6 = a1;
        v40 = v26;
        if ( v26 < v63 )
        {
          v9 = v66;
          v34 = v59;
          v17 = v65;
          v39 = v62;
        }
        v41 = (int)v17;
        if ( v26 < v63 )
          v40 = v63;
        v7 = a3;
        v59 = v34;
        v42 = v9;
        v66 = v9;
        v9 = v67;
        v43 = v68;
        v71 = v32;
        v62 = v39;
        v14 = a1 + 2;
        v65 = v17;
        v63 = v40;
      }
      while ( v67 - v68 <= 2 );
      v44 = v60;
      v71 = v39;
      while ( v43 < v42 )
      {
        v45 = v44;
        *v44++ = *v43;
        ++a1[*v45 + 7];
        ++v43;
      }
      v46 = 0;
      v47 = v44;
      if ( !v59 )
      {
        *v44 = *v42;
        v13 = v44 + 1;
        v60 = (unsigned __int16 *)v13;
        ++a1[*v47 + 7];
        v56 = 1LL;
        goto LABEL_95;
      }
      if ( v59 == 1 )
      {
        v48 = (_DWORD)v42 - v41;
        _BitScanReverse((unsigned int *)&v46, (_DWORD)v42 - v41);
        *v44 = 16 * (v46 + 20);
LABEL_79:
        a1[5] = a1[4];
        goto LABEL_80;
      }
      *v44 = 16 * (v39 + 16);
      v48 = a1[v39 + 2];
      if ( !(_DWORD)v39 )
        goto LABEL_82;
      if ( (unsigned int)v39 >= 3 )
        goto LABEL_79;
      if ( (unsigned int)v39 >= 2 )
LABEL_80:
        a1[4] = a1[3];
      v49 = *v14;
      *v14 = v48;
      a1[3] = v49;
LABEL_82:
      v50 = *v44;
      v51 = v40 - 4;
      if ( v40 - 4 < 0xF )
      {
        v55 = v51 + v50;
        *v44 = v55;
        v13 = v44 + 1;
        v60 = (unsigned __int16 *)v13;
      }
      else
      {
        v52 = (unsigned __int8 *)(v44 + 1);
        *v44 = v50 + 15;
        v13 = (_DWORD *)((char *)v44 + 3);
        v60 = (unsigned __int16 *)v13;
        if ( v51 <= 0xF6 )
        {
          v54 = v40 - 19;
          *v52 = v40 - 19;
LABEL_87:
          v60 = (unsigned __int16 *)v13;
        }
        else
        {
          _BitScanReverse((unsigned int *)&v53, v40 - 250);
          v54 = v53 - 24;
          *v52 = v53 - 24;
          if ( v40 - 250 > 1 )
          {
            a1[6] += v53;
            *v13++ = v40 - 250 - (1 << v53);
            v54 = *v52;
            goto LABEL_87;
          }
        }
        ++a1[v54 + 711];
        v55 = *v47;
      }
      ++a1[v55 + 7];
      if ( v59 == 1 && v46 )
      {
        a1[6] += v46;
        *v13++ = (_DWORD)v42 - (1 << v46) - (_DWORD)v65;
        v60 = (unsigned __int16 *)v13;
      }
      v56 = v40;
LABEL_95:
      v7 = a3;
      v9 = &v42[v56];
      v12 = a5 - 15;
      if ( (unsigned __int64)&v42[v56] >= v69 )
      {
LABEL_96:
        v8 = v73;
        break;
      }
    }
  }
  if ( (unsigned __int64)v9 < v7 )
  {
    do
    {
      if ( (unsigned __int64)v13 >= a5 )
        break;
      v57 = (unsigned __int16 *)v13;
      *(_WORD *)v13 = *v9++;
      v13 = (_DWORD *)((char *)v13 + 2);
      ++v6[*v57 + 7];
    }
    while ( (unsigned __int64)v9 < v7 );
    v8 = v73;
  }
  *a6 = (_DWORD)v13 - v8;
  return 0LL;
}
