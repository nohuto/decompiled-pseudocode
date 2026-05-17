/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen3 @ 0x18011BDEC
 * Callers:
 *     Xp10CompressBuffer @ 0x18011AC98 (Xp10CompressBuffer.c)
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
  unsigned __int64 v7; // r14
  int v8; // r11d
  unsigned __int8 *v9; // r8
  __int16 v10; // cx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  _DWORD *v13; // r9
  unsigned __int64 v14; // rax
  unsigned int *v15; // rsi
  unsigned __int8 *v16; // r13
  __int64 v17; // rdx
  unsigned __int8 *v18; // r11
  int v19; // eax
  unsigned __int8 *v20; // rcx
  int v21; // edi
  int v22; // edx
  int v23; // edi
  unsigned __int8 *v24; // rcx
  int v25; // edx
  int v26; // ebx
  int v27; // edi
  unsigned __int8 *v28; // rcx
  int v29; // edx
  _DWORD *v30; // rbx
  unsigned int v31; // ecx
  _DWORD *v32; // rdx
  signed __int64 v33; // rdi
  __int64 v34; // rax
  unsigned __int8 *i; // rdx
  unsigned int *v36; // r14
  unsigned int v37; // esi
  unsigned int v38; // ebp
  int v39; // r12d
  unsigned __int8 *v40; // rdx
  __int64 v41; // rax
  unsigned __int8 *v42; // rbx
  unsigned int v43; // edi
  __int64 v44; // rbp
  unsigned int v45; // ebx
  int v46; // r15d
  unsigned __int8 *v47; // rdi
  int v48; // edx
  unsigned __int8 *v49; // r12
  unsigned __int16 *v50; // r9
  unsigned __int16 *v51; // rcx
  int v52; // r8d
  unsigned __int16 *v53; // r11
  unsigned int v54; // ecx
  unsigned int v55; // eax
  unsigned __int16 v56; // ax
  unsigned int v57; // edx
  unsigned __int8 *v58; // rdi
  int v59; // ecx
  unsigned __int8 v60; // al
  unsigned __int16 v61; // dx
  __int64 v62; // rax
  unsigned __int16 *v63; // rcx
  unsigned __int16 *v65; // [rsp+0h] [rbp-98h]
  int v66; // [rsp+8h] [rbp-90h]
  unsigned int v67; // [rsp+Ch] [rbp-8Ch]
  int v68; // [rsp+10h] [rbp-88h]
  unsigned int v69; // [rsp+14h] [rbp-84h]
  unsigned int v70; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v71; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v72; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v73; // [rsp+30h] [rbp-68h]
  unsigned __int64 v74; // [rsp+38h] [rbp-60h]
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
  v11 = v7 - 40;
  v74 = v7 - 40;
  v70 = 1 << (v10 & 0x1F);
  memset64(v6 + 1416, (unsigned __int64)a2, 0xEF2uLL);
  memset64(v6 + 9068, (unsigned __int64)a2, 0x12EEuLL);
  v12 = *a2;
  *a4 = v12;
  v13 = a4 + 1;
  v65 = (unsigned __int16 *)v13;
  ++v6[v12 + 7];
  v14 = a5 - 15;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v13 >= v14 )
        goto LABEL_106;
      v68 = 0;
      v15 = v6 + 2;
      v72 = v9;
      v67 = 0;
      v69 = 0;
      v73 = v9;
      v71 = v9;
      while ( 1 )
      {
        v16 = v9 + 1;
        v17 = *v9 + 8 * v9[1] + 2 * (unsigned int)v9[2];
        v18 = *(unsigned __int8 **)&v6[2 * v17 + 1416];
        *(_QWORD *)&v6[2 * v17 + 1416] = v9;
        if ( *v18 != *v9 || v18[1] != *v16 || v18[2] != v9[2] || (int)v9 - (int)v18 >= v70 || v9 == v18 )
        {
          v66 = 0;
          v31 = 1;
          goto LABEL_58;
        }
        v19 = v9[3];
        v66 = 1;
        if ( v18[3] != (_BYTE)v19 )
        {
          v20 = *(unsigned __int8 **)&v6[2 * (unsigned int)(v17 + v19) + 9068];
          *(_QWORD *)&v6[2 * (unsigned int)v17 + 9068 + 2 * v18[3]] = v18;
          if ( *(_DWORD *)v20 != *(_DWORD *)v9
            || (v21 = v9[3], v20[3] != (_BYTE)v21)
            || (int)v9 - (int)v20 >= v70
            || v9 == v20 )
          {
            v31 = 3;
            goto LABEL_58;
          }
          v18 = v20;
          *(_QWORD *)&v6[2 * (unsigned int)(v17 + v21) + 9068] = v9;
        }
        v22 = v9[4];
        if ( v18[4] != (_BYTE)v22 )
        {
          v23 = 2
              * ((unsigned __int8)__ROR1__(*v16 ^ __ROL1__(*v9 + v9[3], 3), 1)
               + 4 * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(*v16 + v9[2] + 97, 1), 3));
          v24 = *(unsigned __int8 **)&v6[2 * (v23 + v22) + 9068];
          *(_QWORD *)&v6[2 * v23 + 9068 + 2 * v18[4]] = v18;
          if ( *(_DWORD *)v9 != *(_DWORD *)v24
            || (v25 = v9[4], (_BYTE)v25 != v24[4])
            || (int)v9 - (int)v24 >= v70
            || v9 == v24 )
          {
            v31 = 4;
            goto LABEL_58;
          }
          v18 = v24;
          *(_QWORD *)&v6[2 * (v23 + v25) + 9068] = v9;
        }
        v26 = v18[5];
        if ( v9[5] != (_BYTE)v26 )
        {
          v27 = 2
              * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, v9[4]))
               + 4
               * ((unsigned __int8)__ROR1__(*v16 ^ __ROL1__(v9[3], 3), 1)
                + (unsigned __int8)__ROL1__(v9[4] ^ (__ROR1__(*v9, 1) + 69), 3)));
          v28 = *(unsigned __int8 **)&v6[2 * v27 + 9068 + 2 * v9[5]];
          *(_QWORD *)&v6[2 * (v27 + v26) + 9068] = v18;
          if ( *(_DWORD *)v9 != *(_DWORD *)v28
            || v9[4] != v28[4]
            || (v29 = v9[5], (_BYTE)v29 != v28[5])
            || (int)v9 - (int)v28 >= v70
            || v9 == v28 )
          {
            v31 = 5;
            goto LABEL_58;
          }
          v18 = v28;
          *(_QWORD *)&v6[2 * (v27 + v29) + 9068] = v9;
        }
        v30 = v9 + 6;
        v31 = 6;
        if ( (unsigned __int64)(v9 + 6) < v11 )
        {
          v32 = v18 + 14;
          v33 = v9 - v18;
          while ( v31 < v70 - 32 && *v30 == *(v32 - 2) )
          {
            if ( *(_DWORD *)((char *)v32 + v33 - 4) != *(v32 - 1) )
            {
              v31 += 4;
              break;
            }
            if ( *(_DWORD *)((char *)v32 + v33) != *v32 )
            {
              v31 += 8;
              break;
            }
            if ( *(_DWORD *)((char *)v32 + v33 + 4) != v32[1] )
            {
              v31 += 12;
              break;
            }
            if ( *(_DWORD *)((char *)v32 + v33 + 8) != v32[2] )
            {
              v31 += 16;
              break;
            }
            if ( *(_DWORD *)((char *)v32 + v33 + 12) != v32[3] )
            {
              v31 += 20;
              break;
            }
            if ( *(_DWORD *)((char *)v32 + v33 + 16) != v32[4] )
            {
              v31 += 24;
              break;
            }
            if ( *(_DWORD *)((char *)v32 + v33 + 20) != v32[5] )
            {
              v31 += 28;
              break;
            }
            v31 += 32;
            v30 += 8;
            v32 += 8;
            if ( (unsigned __int64)v30 >= v11 )
              break;
          }
        }
        v34 = v31;
        for ( i = &v9[v31]; (unsigned __int64)i < v7 && *i == v18[v34]; i = &v9[v31] )
          v34 = ++v31;
LABEL_58:
        v36 = v15;
        v37 = v76;
        v38 = 0;
        v39 = v66;
        do
        {
          v40 = &v9[-*v36];
          if ( *v40 == *v9 && v40[1] == *v16 && v40[2] == v9[2] && v40 != v9 )
          {
            v41 = 3LL;
            v42 = v9 + 3;
            v43 = 3;
            while ( (unsigned __int64)v42 < a3 && *v42 == v40[v41] )
            {
              v41 = ++v43;
              v42 = &v9[v43];
            }
            if ( v43 >= v31 )
            {
              v18 = &v9[-*v36];
              v39 = 2;
              v37 = v38;
              v31 = v43;
            }
          }
          ++v38;
          ++v36;
        }
        while ( v38 < 4 );
        v44 = v37;
        v6 = a1;
        v45 = v31;
        if ( v31 < v69 )
        {
          v39 = v68;
          v9 = v71;
        }
        v46 = v39;
        if ( v31 < v69 )
          v18 = v72;
        v47 = v9;
        if ( v31 < v69 )
          v44 = v67;
        v48 = (int)v18;
        if ( v31 < v69 )
          v45 = v69;
        v7 = a3;
        v68 = v39;
        v49 = v73;
        v71 = v9;
        v9 = v16;
        v76 = v37;
        v67 = v44;
        v15 = a1 + 2;
        v72 = v18;
        v69 = v45;
        if ( v16 - v73 > 2 )
          break;
        v11 = a3 - 40;
      }
      v50 = v65;
      v76 = v44;
      while ( v49 < v47 )
      {
        v51 = v50;
        *v50++ = *v49;
        ++a1[*v51 + 7];
        ++v49;
      }
      v52 = 0;
      v53 = v50;
      if ( !v46 )
      {
        *v50 = *v47;
        v13 = v50 + 1;
        v65 = (unsigned __int16 *)v13;
        ++a1[*v53 + 7];
        v62 = 1LL;
        goto LABEL_105;
      }
      if ( v46 == 1 )
      {
        v54 = (_DWORD)v47 - v48;
        _BitScanReverse((unsigned int *)&v52, (_DWORD)v47 - v48);
        *v50 = 16 * (v52 + 20);
LABEL_89:
        a1[5] = a1[4];
        goto LABEL_90;
      }
      *v50 = 16 * (v44 + 16);
      v54 = a1[v44 + 2];
      if ( !(_DWORD)v44 )
        goto LABEL_92;
      if ( (unsigned int)v44 >= 3 )
        goto LABEL_89;
      if ( (unsigned int)v44 >= 2 )
LABEL_90:
        a1[4] = a1[3];
      v55 = *v15;
      *v15 = v54;
      a1[3] = v55;
LABEL_92:
      v56 = *v50;
      v57 = v45 - 3;
      if ( v45 - 3 < 0xF )
      {
        v61 = v56 + v57;
        *v50 = v61;
        v13 = v50 + 1;
        v65 = (unsigned __int16 *)v13;
      }
      else
      {
        v58 = (unsigned __int8 *)(v50 + 1);
        *v50 = v56 + 15;
        v13 = (_DWORD *)((char *)v50 + 3);
        v65 = (unsigned __int16 *)v13;
        if ( v57 <= 0xF6 )
        {
          v60 = v45 - 18;
          *v58 = v45 - 18;
LABEL_97:
          v65 = (unsigned __int16 *)v13;
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
            goto LABEL_97;
          }
        }
        v47 = v71;
        ++a1[v60 + 711];
        v61 = *v53;
      }
      ++a1[v61 + 7];
      if ( v46 == 1 && v52 )
      {
        a1[6] += v52;
        *v13++ = (_DWORD)v47 - (1 << v52) - (_DWORD)v72;
        v65 = (unsigned __int16 *)v13;
      }
      v62 = v45;
LABEL_105:
      v11 = v74;
      v9 = &v47[v62];
      v7 = a3;
      v14 = a5 - 15;
      if ( (unsigned __int64)v9 >= v74 )
      {
LABEL_106:
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
      v63 = (unsigned __int16 *)v13;
      *(_WORD *)v13 = *v9++;
      v13 = (_DWORD *)((char *)v13 + 2);
      ++v6[*v63 + 7];
    }
    while ( (unsigned __int64)v9 < v7 );
    v8 = v78;
  }
  *a6 = (_DWORD)v13 - v8;
  return 0LL;
}
