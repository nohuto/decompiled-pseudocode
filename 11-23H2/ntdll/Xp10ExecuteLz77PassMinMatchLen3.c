/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen3 @ 0x18011E6C0
 * Callers:
 *     Xp10CompressBuffer @ 0x18011D4E4 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ExecuteLz77PassMinMatchLen3(
        unsigned int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  unsigned int *v6; // r10
  unsigned __int64 v7; // r15
  int v8; // r11d
  unsigned __int8 *v9; // r8
  __int16 v10; // cx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _DWORD *v13; // r9
  unsigned int *v14; // rsi
  _BYTE *v15; // r14
  __int64 v16; // rdx
  unsigned __int8 *v17; // r11
  int v18; // eax
  unsigned __int8 *v19; // rcx
  int v20; // edi
  int v21; // edi
  int v22; // ebx
  unsigned __int8 *v23; // rcx
  int v24; // edx
  int v25; // ebx
  int v26; // edi
  unsigned __int8 *v27; // rcx
  int v28; // edx
  _DWORD *v29; // rbx
  unsigned int v30; // ecx
  _DWORD *v31; // rdx
  signed __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int8 *i; // rdx
  unsigned int *v35; // r14
  unsigned int v36; // ebp
  unsigned int v37; // r10d
  int v38; // r13d
  unsigned __int8 *v39; // rdx
  __int64 v40; // rax
  unsigned __int8 *v41; // rbx
  unsigned int v42; // edi
  __int64 v43; // rdi
  unsigned __int8 *v44; // r12
  unsigned int v45; // ebx
  int v46; // r14d
  int v47; // edx
  unsigned __int8 *v48; // r13
  _WORD *v49; // r9
  unsigned __int16 *v50; // rcx
  int v51; // r8d
  unsigned __int16 *v52; // r11
  unsigned int v53; // edx
  unsigned int *v54; // rcx
  unsigned int v55; // eax
  unsigned __int16 v56; // ax
  unsigned int v57; // edx
  unsigned __int8 *v58; // rdi
  int v59; // ecx
  unsigned __int8 v60; // al
  __int64 v61; // rax
  unsigned __int16 *v62; // rcx
  _WORD *v64; // [rsp+0h] [rbp-98h]
  int v65; // [rsp+8h] [rbp-90h]
  unsigned int v66; // [rsp+Ch] [rbp-8Ch]
  int v67; // [rsp+10h] [rbp-88h]
  unsigned int v68; // [rsp+14h] [rbp-84h]
  unsigned int v69; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v70; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v71; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v72; // [rsp+30h] [rbp-68h]
  unsigned __int8 *v73; // [rsp+38h] [rbp-60h]
  unsigned __int64 v74; // [rsp+40h] [rbp-58h]
  unsigned int v76; // [rsp+A8h] [rbp+10h]
  int v78; // [rsp+B8h] [rbp+20h]

  v78 = (int)a4;
  v6 = a1;
  v76 = 0;
  v7 = a3;
  v8 = (int)a4;
  v9 = a2 + 1;
  v10 = **(_WORD **)a1;
  v6[6] = 0;
  v69 = 1 << (v10 & 0x1F);
  memset64(v6 + 1416, (unsigned __int64)a2, 0xEF2uLL);
  memset64(v6 + 9068, (unsigned __int64)a2, 0x12EEuLL);
  v11 = *a2;
  *a4 = v11;
  v12 = a5 - 15;
  v13 = a4 + 1;
  ++v6[v11 + 7];
  v64 = v13;
  v74 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v13 >= v12 )
        goto LABEL_103;
      v67 = 0;
      v14 = v6 + 2;
      v66 = 0;
      v68 = 0;
      v70 = v9;
      v73 = v9;
      v71 = v9;
      do
      {
        v15 = v9 + 1;
        v72 = v9 + 1;
        v16 = *v9 + 8 * v9[1] + 2 * (unsigned int)v9[2];
        v17 = *(unsigned __int8 **)&v6[2 * v16 + 1416];
        *(_QWORD *)&v6[2 * v16 + 1416] = v9;
        if ( *v17 != *v9 || v17[1] != *v15 || v17[2] != v9[2] || (int)v9 - (int)v17 >= v69 || v9 == v17 )
        {
          v65 = 0;
          v30 = 1;
          goto LABEL_57;
        }
        v18 = v9[3];
        v65 = 1;
        if ( v17[3] != (_BYTE)v18 )
        {
          v19 = *(unsigned __int8 **)&v6[2 * (unsigned int)(v16 + v18) + 9068];
          *(_QWORD *)&v6[2 * (unsigned int)v16 + 9068 + 2 * v17[3]] = v17;
          if ( *(_DWORD *)v19 != *(_DWORD *)v9
            || (v20 = v9[3], v19[3] != (_BYTE)v20)
            || (int)v9 - (int)v19 >= v69
            || v9 == v19 )
          {
            v30 = 3;
            goto LABEL_57;
          }
          v17 = v19;
          *(_QWORD *)&v6[2 * (unsigned int)(v16 + v20) + 9068] = v9;
        }
        v21 = v9[4];
        if ( v17[4] != (_BYTE)v21 )
        {
          v22 = 2
              * ((unsigned __int8)__ROR1__(*v15 ^ __ROL1__(v9[3] + *v9, 3), 1)
               + 4 * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(v9[2] + *v15 + 97, 1), 3));
          v23 = *(unsigned __int8 **)&v6[2 * (v22 + v21) + 9068];
          *(_QWORD *)&v6[2 * v22 + 9068 + 2 * v17[4]] = v17;
          if ( *(_DWORD *)v9 != *(_DWORD *)v23
            || (v24 = v9[4], (_BYTE)v24 != v23[4])
            || (int)v9 - (int)v23 >= v69
            || v9 == v23 )
          {
            v30 = 4;
            goto LABEL_57;
          }
          v17 = v23;
          *(_QWORD *)&v6[2 * (v22 + v24) + 9068] = v9;
        }
        v25 = v17[5];
        if ( v9[5] != (_BYTE)v25 )
        {
          v26 = 2
              * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, v9[4]))
               + 4
               * ((unsigned __int8)__ROR1__(*v15 ^ __ROL1__(v9[3], 3), 1)
                + (unsigned __int8)__ROL1__(v9[4] ^ (__ROR1__(*v9, 1) + 69), 3)));
          v27 = *(unsigned __int8 **)&v6[2 * v26 + 9068 + 2 * v9[5]];
          *(_QWORD *)&v6[2 * (v26 + v25) + 9068] = v17;
          if ( *(_DWORD *)v9 != *(_DWORD *)v27
            || v9[4] != v27[4]
            || (v28 = v9[5], (_BYTE)v28 != v27[5])
            || (int)v9 - (int)v27 >= v69
            || v9 == v27 )
          {
            v30 = 5;
            goto LABEL_57;
          }
          v17 = v27;
          *(_QWORD *)&v6[2 * (v26 + v28) + 9068] = v9;
        }
        v29 = v9 + 6;
        v30 = 6;
        if ( (unsigned __int64)(v9 + 6) < v7 - 40 )
        {
          v31 = v17 + 14;
          v32 = v9 - v17;
          while ( v30 < v69 - 32 && *v29 == *(v31 - 2) )
          {
            if ( *(_DWORD *)((char *)v31 + v32 - 4) != *(v31 - 1) )
            {
              v30 += 4;
              break;
            }
            if ( *(_DWORD *)((char *)v31 + v32) != *v31 )
            {
              v30 += 8;
              break;
            }
            if ( *(_DWORD *)((char *)v31 + v32 + 4) != v31[1] )
            {
              v30 += 12;
              break;
            }
            if ( *(_DWORD *)((char *)v31 + v32 + 8) != v31[2] )
            {
              v30 += 16;
              break;
            }
            if ( *(_DWORD *)((char *)v31 + v32 + 12) != v31[3] )
            {
              v30 += 20;
              break;
            }
            if ( *(_DWORD *)((char *)v31 + v32 + 16) != v31[4] )
            {
              v30 += 24;
              break;
            }
            if ( *(_DWORD *)((char *)v31 + v32 + 20) != v31[5] )
            {
              v30 += 28;
              break;
            }
            v30 += 32;
            v29 += 8;
            v31 += 8;
            if ( (unsigned __int64)v29 >= v7 - 40 )
              break;
          }
        }
        v33 = v30;
        for ( i = &v9[v30]; (unsigned __int64)i < v7 && *i == v17[v33]; i = &v9[v30] )
          v33 = ++v30;
LABEL_57:
        v35 = v14;
        v36 = 0;
        v37 = v76;
        v38 = v65;
        do
        {
          v39 = &v9[-*v35];
          if ( *v39 == *v9 && v39[1] == *v72 && v39[2] == v9[2] && v39 != v9 )
          {
            v40 = 3LL;
            v41 = v9 + 3;
            v42 = 3;
            while ( (unsigned __int64)v41 < a3 && *v41 == v39[v40] )
            {
              v40 = ++v42;
              v41 = &v9[v42];
            }
            if ( v42 >= v30 )
            {
              v17 = &v9[-*v35];
              v38 = 2;
              v37 = v36;
              v30 = v42;
            }
          }
          ++v36;
          ++v35;
        }
        while ( v36 < 4 );
        v43 = v37;
        v44 = v73;
        v45 = v30;
        if ( v30 < v68 )
        {
          v38 = v67;
          v9 = v71;
        }
        v46 = v38;
        if ( v30 < v68 )
        {
          v17 = v70;
          v43 = v66;
        }
        v47 = (int)v17;
        if ( v30 < v68 )
          v45 = v68;
        v7 = a3;
        v67 = v38;
        v48 = v9;
        v76 = v37;
        v6 = a1;
        v71 = v9;
        v9 = v72;
        v66 = v43;
        v70 = v17;
        v14 = a1 + 2;
        v68 = v45;
      }
      while ( v72 - v73 <= 2 );
      v49 = v64;
      v76 = v43;
      while ( v44 < v48 )
      {
        v50 = v49;
        *v49++ = *v44;
        ++a1[*v50 + 7];
        ++v44;
      }
      v51 = 0;
      v52 = v49;
      if ( v46 )
      {
        if ( v46 == 1 )
        {
          _BitScanReverse((unsigned int *)&v51, (_DWORD)v48 - v47);
          *v49 = 16 * (v51 + 20);
          a1[5] = a1[4];
          a1[4] = a1[3];
          v55 = *v14;
          *v14 = (_DWORD)v48 - v47;
          goto LABEL_88;
        }
        *v49 = 16 * (v43 + 16);
        v53 = a1[v43 + 2];
        if ( (_DWORD)v43 )
        {
          v54 = a1 + 4;
          if ( (unsigned int)v43 >= 3 )
          {
            a1[5] = *v54;
            goto LABEL_85;
          }
          if ( (unsigned int)v43 >= 2 )
LABEL_85:
            *v54 = a1[3];
          v55 = *v14;
          *v14 = v53;
LABEL_88:
          a1[3] = v55;
        }
        v56 = *v49;
        v57 = v45 - 3;
        if ( v45 - 3 < 0xF )
        {
          *v49 = v56 + v57;
          v13 = v49 + 1;
          v64 = v13;
        }
        else
        {
          v58 = (unsigned __int8 *)(v49 + 1);
          *v49 = v56 + 15;
          v13 = (_DWORD *)((char *)v49 + 3);
          v64 = v13;
          if ( v57 <= 0xF6 )
          {
            v60 = v45 - 18;
            *v58 = v45 - 18;
LABEL_94:
            v64 = v13;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v59, v45 - 249);
            v60 = v59 - 24;
            *v58 = v59 - 24;
            if ( v45 - 249 > 1 )
            {
              a1[6] += v59;
              *v13++ = v45 - 249 - (1 << v59);
              v60 = *v58;
              goto LABEL_94;
            }
          }
          ++a1[v60 + 711];
        }
        ++a1[*v52 + 7];
        if ( v46 == 1 && v51 )
        {
          a1[6] += v51;
          *v13++ = (_DWORD)v48 - (1 << v51) - (_DWORD)v70;
          v64 = v13;
        }
        v61 = v45;
      }
      else
      {
        *v49 = *v48;
        v13 = v49 + 1;
        v64 = v13;
        ++a1[*v52 + 7];
        v61 = 1LL;
      }
      v7 = a3;
      v9 = &v48[v61];
      v12 = a5 - 15;
      if ( (unsigned __int64)&v48[v61] >= v74 )
      {
LABEL_103:
        v8 = v78;
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
      v62 = (unsigned __int16 *)v13;
      *(_WORD *)v13 = *v9++;
      v13 = (_DWORD *)((char *)v13 + 2);
      ++v6[*v62 + 7];
    }
    while ( (unsigned __int64)v9 < v7 );
    v8 = v78;
  }
  *a6 = (_DWORD)v13 - v8;
  return 0LL;
}
