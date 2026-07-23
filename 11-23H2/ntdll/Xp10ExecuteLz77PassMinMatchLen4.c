/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen4 @ 0x18011ED94
 * Callers:
 *     Xp10CompressBuffer @ 0x18011D4E4 (Xp10CompressBuffer.c)
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
  unsigned __int8 *v8; // r8
  int v9; // r11d
  __int16 v10; // cx
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _DWORD *v14; // r9
  unsigned int v15; // r9d
  unsigned int *v16; // rbx
  _BYTE *v17; // r15
  __int64 v18; // rdx
  unsigned __int8 *v19; // r11
  int v20; // eax
  unsigned __int8 *v21; // rcx
  int v22; // edi
  int v23; // esi
  int v24; // edi
  unsigned __int8 *v25; // rcx
  int v26; // edx
  _DWORD *v27; // rsi
  unsigned int v28; // ecx
  unsigned int v29; // ebp
  _DWORD *v30; // rdx
  signed __int64 v31; // rdi
  __int64 v32; // rax
  unsigned __int8 *i; // rdx
  unsigned int *v34; // r14
  unsigned int v35; // ebx
  unsigned int v36; // ebp
  int v37; // r12d
  unsigned __int8 *v38; // rdx
  unsigned __int8 *v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned int v43; // esi
  int v44; // edx
  unsigned __int8 *v45; // r13
  unsigned __int8 *v46; // r12
  _WORD *v47; // r9
  unsigned __int16 *v48; // rcx
  int v49; // r8d
  unsigned __int16 *v50; // r11
  unsigned int v51; // edx
  unsigned int *v52; // rcx
  int v53; // ebp
  unsigned __int16 v54; // ax
  unsigned int v55; // edx
  unsigned __int8 *v56; // rdi
  int v57; // ecx
  unsigned __int8 v58; // al
  __int64 v59; // rax
  unsigned __int16 *v60; // rcx
  int v62; // [rsp+0h] [rbp-98h]
  _WORD *v63; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v64; // [rsp+10h] [rbp-88h]
  int v65; // [rsp+18h] [rbp-80h]
  unsigned int v66; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v67; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v68; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v69; // [rsp+30h] [rbp-68h]
  unsigned __int8 *v70; // [rsp+38h] [rbp-60h]
  unsigned __int64 v71; // [rsp+40h] [rbp-58h]
  unsigned int v73; // [rsp+A8h] [rbp+10h]
  int v75; // [rsp+B8h] [rbp+20h]

  v75 = (int)a4;
  v6 = a1;
  v73 = 0;
  v7 = a3;
  v8 = a2 + 1;
  v9 = (int)a4;
  v10 = **(_WORD **)a1;
  v6[6] = 0;
  v11 = 1 << (v10 & 0x1F);
  v67 = v11;
  memset64(v6 + 1416, (unsigned __int64)a2, 0xEF2uLL);
  memset64(v6 + 9068, (unsigned __int64)a2, 0x12EEuLL);
  v12 = *a2;
  *a4 = v12;
  v13 = a5 - 15;
  v14 = a4 + 1;
  ++v6[v12 + 7];
  v63 = v14;
  v71 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v14 >= v13 )
        goto LABEL_98;
      v68 = v8;
      v64 = v8;
      v15 = 0;
      v62 = 0;
      v66 = 0;
      v16 = v6 + 2;
      v70 = v8;
      do
      {
        v17 = v8 + 1;
        v69 = v8 + 1;
        v18 = *v8 + 8 * v8[1] + 4 * v8[3] + 2 * (unsigned int)v8[2];
        v19 = *(unsigned __int8 **)&v6[2 * v18 + 1416];
        *(_QWORD *)&v6[2 * v18 + 1416] = v8;
        if ( *v19 != *v8
          || v19[1] != *v17
          || v19[2] != v8[2]
          || v19[3] != v8[3]
          || (int)v8 - (int)v19 >= v11
          || v8 == v19 )
        {
          v65 = 0;
          v28 = 1;
          goto LABEL_51;
        }
        v20 = v8[4];
        v65 = 1;
        if ( v19[4] != (_BYTE)v20 )
        {
          v21 = *(unsigned __int8 **)&v6[2 * (unsigned int)(v18 + v20) + 9068];
          *(_QWORD *)&v6[2 * (unsigned int)v18 + 9068 + 2 * v19[4]] = v19;
          if ( *(_DWORD *)v21 != *(_DWORD *)v8
            || (v22 = v8[4], v21[4] != (_BYTE)v22)
            || (int)v8 - (int)v21 >= v11
            || v8 == v21 )
          {
            v28 = 4;
            goto LABEL_51;
          }
          v19 = v21;
          *(_QWORD *)&v6[2 * (unsigned int)(v18 + v22) + 9068] = v8;
        }
        v23 = v19[5];
        if ( v8[5] != (_BYTE)v23 )
        {
          v24 = 2
              * ((v8[2] ^ (unsigned __int8)__ROL1__(*v8, v8[4]))
               + 4
               * ((unsigned __int8)__ROR1__(*v17 ^ __ROL1__(v8[3], 3), 1)
                + (unsigned __int8)__ROL1__(v8[4] ^ (__ROR1__(*v8, 1) + 69), 3)));
          v25 = *(unsigned __int8 **)&v6[2 * v24 + 9068 + 2 * v8[5]];
          *(_QWORD *)&v6[2 * (v24 + v23) + 9068] = v19;
          if ( *(_DWORD *)v8 != *(_DWORD *)v25
            || v8[4] != v25[4]
            || (v26 = v8[5], (_BYTE)v26 != v25[5])
            || (int)v8 - (int)v25 >= v11
            || v8 == v25 )
          {
            v28 = 5;
            goto LABEL_51;
          }
          v19 = v25;
          *(_QWORD *)&v6[2 * (v24 + v26) + 9068] = v8;
        }
        v27 = v8 + 6;
        v28 = 6;
        if ( (unsigned __int64)(v8 + 6) < v7 - 40 )
        {
          v29 = v11 - 32;
          v30 = v19 + 14;
          v31 = v8 - v19;
          while ( v28 < v29 && *v27 == *(v30 - 2) )
          {
            if ( *(_DWORD *)((char *)v30 + v31 - 4) != *(v30 - 1) )
            {
              v28 += 4;
              break;
            }
            if ( *(_DWORD *)((char *)v30 + v31) != *v30 )
            {
              v28 += 8;
              break;
            }
            if ( *(_DWORD *)((char *)v30 + v31 + 4) != v30[1] )
            {
              v28 += 12;
              break;
            }
            if ( *(_DWORD *)((char *)v30 + v31 + 8) != v30[2] )
            {
              v28 += 16;
              break;
            }
            if ( *(_DWORD *)((char *)v30 + v31 + 12) != v30[3] )
            {
              v28 += 20;
              break;
            }
            if ( *(_DWORD *)((char *)v30 + v31 + 16) != v30[4] )
            {
              v28 += 24;
              break;
            }
            if ( *(_DWORD *)((char *)v30 + v31 + 20) != v30[5] )
            {
              v28 += 28;
              break;
            }
            v28 += 32;
            v27 += 8;
            v30 += 8;
            if ( (unsigned __int64)v27 >= v7 - 40 )
              break;
          }
        }
        v32 = v28;
        for ( i = &v8[v28]; (unsigned __int64)i < v7 && *i == v19[v32]; i = &v8[v28] )
          v32 = ++v28;
LABEL_51:
        v34 = v16;
        v35 = v73;
        v36 = 0;
        v37 = v65;
        do
        {
          v38 = &v8[-*v34];
          if ( *v38 == *v8 && v38[1] == *v69 && v38[2] == v8[2] && v38[3] == v8[3] && v38 != v8 )
          {
            v39 = v8 + 4;
            LODWORD(v40) = 4;
            if ( (unsigned __int64)(v8 + 4) < a3 )
            {
              v41 = 4LL;
              do
              {
                if ( *v39 != v38[v41] )
                  break;
                v40 = (unsigned int)(v40 + 1);
                v41 = (unsigned int)v40;
                v39 = &v8[v40];
              }
              while ( (unsigned __int64)&v8[v40] < a3 );
            }
            if ( (unsigned int)v40 >= v28 )
            {
              v19 = &v8[-*v34];
              v37 = 2;
              v35 = v36;
              v28 = v40;
            }
          }
          ++v36;
          ++v34;
        }
        while ( v36 < 4 );
        v6 = a1;
        v42 = v35;
        if ( v28 < v15 )
          v37 = v62;
        v43 = v28;
        if ( v28 < v15 )
        {
          v8 = v68;
          v43 = v15;
          v42 = v66;
        }
        v44 = v37;
        if ( v28 < v15 )
          v19 = v64;
        v45 = v8;
        v46 = v70;
        v15 = v43;
        v7 = a3;
        v11 = v67;
        v68 = v8;
        v8 = v69;
        v73 = v35;
        v66 = v42;
        v16 = a1 + 2;
        v62 = v44;
        v64 = v19;
      }
      while ( v69 - v70 <= 2 );
      v47 = v63;
      v73 = v42;
      while ( v46 < v45 )
      {
        v48 = v47;
        *v47++ = *v46;
        ++a1[*v48 + 7];
        ++v46;
      }
      v49 = 0;
      v50 = v47;
      if ( v44 )
      {
        if ( v44 == 1 )
        {
          v53 = (int)v64;
          _BitScanReverse((unsigned int *)&v49, (_DWORD)v45 - (_DWORD)v64);
          *v47 = 16 * (v49 + 20);
          a1[5] = a1[4];
          a1[4] = a1[3];
          a1[3] = *v16;
          *v16 = (_DWORD)v45 - (_DWORD)v64;
        }
        else
        {
          *v47 = 16 * (v42 + 16);
          v51 = a1[v42 + 2];
          if ( (_DWORD)v42 )
          {
            v52 = a1 + 4;
            if ( (unsigned int)v42 >= 3 )
            {
              a1[5] = *v52;
              goto LABEL_80;
            }
            if ( (unsigned int)v42 >= 2 )
LABEL_80:
              *v52 = a1[3];
            a1[3] = *v16;
            *v16 = v51;
          }
          v53 = (int)v64;
        }
        v54 = *v47;
        v55 = v43 - 4;
        if ( v43 - 4 < 0xF )
        {
          *v47 = v54 + v55;
          v14 = v47 + 1;
          v63 = v14;
        }
        else
        {
          v56 = (unsigned __int8 *)(v47 + 1);
          *v47 = v54 + 15;
          v14 = (_DWORD *)((char *)v47 + 3);
          v63 = v14;
          if ( v55 <= 0xF6 )
          {
            v58 = v43 - 19;
            *v56 = v43 - 19;
LABEL_89:
            v63 = v14;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v57, v43 - 250);
            v58 = v57 - 24;
            *v56 = v57 - 24;
            if ( v43 - 250 > 1 )
            {
              a1[6] += v57;
              *v14++ = v43 - 250 - (1 << v57);
              v58 = *v56;
              goto LABEL_89;
            }
          }
          ++a1[v58 + 711];
        }
        ++a1[*v50 + 7];
        if ( v62 == 1 && v49 )
        {
          a1[6] += v49;
          *v14++ = (_DWORD)v45 - (1 << v49) - v53;
          v63 = v14;
        }
        v59 = v43;
      }
      else
      {
        *v47 = *v45;
        v14 = v47 + 1;
        v63 = v14;
        ++a1[*v50 + 7];
        v59 = 1LL;
      }
      v7 = a3;
      v8 = &v45[v59];
      v11 = v67;
      v13 = a5 - 15;
      if ( (unsigned __int64)&v45[v59] >= v71 )
      {
LABEL_98:
        v9 = v75;
        break;
      }
    }
  }
  if ( (unsigned __int64)v8 < v7 )
  {
    do
    {
      if ( (unsigned __int64)v14 >= a5 )
        break;
      v60 = (unsigned __int16 *)v14;
      *(_WORD *)v14 = *v8++;
      v14 = (_DWORD *)((char *)v14 + 2);
      ++v6[*v60 + 7];
    }
    while ( (unsigned __int64)v8 < v7 );
    v9 = v75;
  }
  *a6 = (_DWORD)v14 - v9;
  return 0LL;
}
