/*
 * XREFs of sub_1405F0E44 @ 0x1405F0E44
 * Callers:
 *     sub_140378450 @ 0x140378450 (sub_140378450.c)
 *     sub_14038CFA0 @ 0x14038CFA0 (sub_14038CFA0.c)
 * Callees:
 *     sub_14038CF50 @ 0x14038CF50 (sub_14038CF50.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405F0E44(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r12
  _QWORD *v15; // r15
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  _BYTE *v18; // rbx
  char *v19; // rdi
  _DWORD *v20; // r11
  int v21; // esi
  __int16 v22; // r10
  unsigned __int8 *v23; // r12
  unsigned __int64 v24; // r9
  char *v25; // rax
  __int64 v26; // r10
  char *v27; // r8
  unsigned __int64 v28; // rdx
  char *v29; // r8
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rax
  int v32; // r12d
  unsigned __int64 v33; // rdx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  _DWORD *v37; // rax
  char *v38; // rcx
  __int64 v39; // r9
  unsigned __int64 v40; // r10
  char *v41; // r11
  _BYTE *v42; // rax
  _BYTE *v43; // rdi
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rax
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  _BYTE *v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  char v53; // cl
  char v54; // al
  unsigned int v55; // ebx
  _BYTE *v56; // [rsp+20h] [rbp-98h]
  _DWORD *v57; // [rsp+28h] [rbp-90h]
  char *v58; // [rsp+30h] [rbp-88h]
  unsigned __int64 v59; // [rsp+38h] [rbp-80h]
  unsigned __int64 v60; // [rsp+40h] [rbp-78h]
  unsigned __int64 v61; // [rsp+48h] [rbp-70h]
  __int16 v62; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v63; // [rsp+58h] [rbp-60h]
  unsigned __int64 v64; // [rsp+60h] [rbp-58h]
  _QWORD v65[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v66; // [rsp+78h] [rbp-40h]
  int v67; // [rsp+7Ch] [rbp-3Ch]
  char *v68; // [rsp+C0h] [rbp+8h]
  int v69; // [rsp+D0h] [rbp+18h]

  v69 = a3;
  v9 = (unsigned __int64)&a1[a2];
  v10 = a3 + a4;
  v68 = 0LL;
  v67 = 0;
  v64 = v10;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( (unsigned __int64)a1 <= 0x2001 )
    return 3221225659LL;
  v15 = a6;
  memset(a6, 0, 0x40000uLL);
  v56 = 0LL;
  v60 = v10 - 41;
  v16 = v9 - 5;
  if ( !a7 || (v17 = a9, a9 > a2) )
  {
    v17 = a2;
    a9 = a2;
  }
  v65[0] = a7;
  v18 = (_BYTE *)(a3 + 5);
  v19 = (char *)(a1 + 1);
  v65[1] = a8;
  v20 = (_DWORD *)a3;
  v21 = 2;
  *(_BYTE *)(a3 + 4) = *a1;
  v22 = 0;
  v57 = (_DWORD *)a3;
  v23 = a1;
  v66 = v17;
  v63 = a1;
  while ( 2 )
  {
    v24 = v16;
    if ( (unsigned __int64)(v23 + 0x2000) <= v16 )
      v24 = (unsigned __int64)(v23 + 0x2000);
    v25 = &v19[v17];
    v61 = v24;
    if ( v24 < (unsigned __int64)v25 )
      v25 = (char *)v24;
    v26 = v22 & 0x3FFF;
    v59 = (unsigned __int64)v25;
    v62 = v26;
    if ( (unsigned __int64)v23 < v24 )
    {
      v27 = (char *)&v15[v26 + 0x8000];
      do
      {
        v27 += 8;
        LOWORD(v26) = v26 + 1;
        v28 = (unsigned __int16)word_14000F2D0[*v23] ^ (unsigned __int16)word_14000F2D0[v23[2] + 512] ^ (unsigned __int64)(unsigned __int16)word_14000F2D0[v23[1] + 256];
        *((_QWORD *)v27 - 1) = v15[v28];
        v15[v28] = v23++;
      }
      while ( (unsigned __int64)v23 < v24 );
      v63 = v23;
      v62 = v26;
    }
    v29 = (char *)(v15 + 0x8000);
    v58 = (char *)(v15 + 0x8000);
LABEL_18:
    v30 = (unsigned __int64)(v19 - 0x2000);
    while ( 1 )
    {
      if ( v19 < v25 )
        goto LABEL_22;
      if ( (unsigned __int64)v19 >= v24 )
        break;
      v31 = sub_14038CF50((__int64)v65, v24, (__int64)v19);
      v20 = v57;
      v24 = v61;
      v29 = v58;
      v59 = v31;
LABEL_22:
      v32 = *(_DWORD *)v19;
      v33 = *(_QWORD *)&v29[8 * ((0x2000 - (_WORD)a1 + (_WORD)v30) & 0x3FFF)];
      if ( v33 >= v30 )
      {
        v34 = *(_DWORD *)v33 ^ v32;
        if ( !v34 )
          goto LABEL_36;
        if ( (v34 & 0xFFFFFF) == 0 )
          goto LABEL_35;
        v33 = *(_QWORD *)&v29[8 * (((_WORD)v33 - (_WORD)a1) & 0x3FFF)];
        if ( v33 >= v30 )
        {
          v35 = *(_DWORD *)v33 ^ v32;
          if ( !v35 )
            goto LABEL_36;
          if ( (v35 & 0xFFFFFF) == 0 )
          {
LABEL_35:
            v30 = (unsigned __int64)(v19 - 0x2000);
            v38 = &v19[-v33];
            v68 = &v19[-v33];
            v39 = 0LL;
            v40 = 3LL;
            goto LABEL_74;
          }
          v33 = *(_QWORD *)&v29[8 * (((_WORD)v33 - (_WORD)a1) & 0x3FFF)];
          if ( v33 >= v30 )
          {
            v36 = *(_DWORD *)v33 ^ v32;
            if ( !v36 )
            {
LABEL_36:
              v38 = v68;
              v39 = 0LL;
              v40 = 3LL;
LABEL_37:
              v41 = v19;
              v42 = v19 + 36;
              v43 = v19 + 4;
              v33 += 4LL;
              if ( (unsigned __int64)v42 >= v9 )
              {
LABEL_48:
                while ( (unsigned __int64)v43 < v9 )
                {
                  if ( *v43 != *(_BYTE *)v33 )
                    break;
                  ++v43;
                  ++v33;
                }
              }
              else
              {
                while ( 1 )
                {
                  v44 = *(_DWORD *)v43;
                  v45 = *(_DWORD *)v33;
                  if ( *(_DWORD *)v43 != *(_DWORD *)v33 )
                    break;
                  v44 = *((_DWORD *)v43 + 1);
                  v45 = *(_DWORD *)(v33 + 4);
                  if ( v44 != v45 )
                  {
                    v43 += 4;
                    v33 += 4LL;
                    break;
                  }
                  v44 = *((_DWORD *)v43 + 2);
                  v45 = *(_DWORD *)(v33 + 8);
                  if ( v44 != v45 )
                  {
                    v43 += 8;
                    v33 += 8LL;
                    break;
                  }
                  v44 = *((_DWORD *)v43 + 3);
                  v45 = *(_DWORD *)(v33 + 12);
                  if ( v44 != v45 )
                  {
                    v43 += 12;
                    v33 += 12LL;
                    break;
                  }
                  v44 = *((_DWORD *)v43 + 4);
                  v45 = *(_DWORD *)(v33 + 16);
                  if ( v44 != v45 )
                  {
                    v43 += 16;
                    v33 += 16LL;
                    break;
                  }
                  v44 = *((_DWORD *)v43 + 5);
                  v45 = *(_DWORD *)(v33 + 20);
                  if ( v44 != v45 )
                  {
                    v43 += 20;
                    v33 += 20LL;
                    break;
                  }
                  v44 = *((_DWORD *)v43 + 6);
                  v45 = *(_DWORD *)(v33 + 24);
                  if ( v44 != v45 )
                  {
                    v43 += 24;
                    v33 += 24LL;
                    break;
                  }
                  v44 = *((_DWORD *)v43 + 7);
                  v45 = *(_DWORD *)(v33 + 28);
                  if ( v44 != v45 )
                  {
                    v43 += 28;
                    v33 += 28LL;
                    break;
                  }
                  v43 += 32;
                  v33 += 32LL;
                  if ( (unsigned __int64)(v43 + 32) >= v9 )
                  {
                    v38 = v68;
                    goto LABEL_48;
                  }
                }
                if ( (_BYTE)v44 == (_BYTE)v45 )
                {
                  v29 = v58;
                  if ( v43[1] != *(_BYTE *)(v33 + 1) )
                  {
                    ++v43;
                    ++v33;
                    goto LABEL_62;
                  }
                  v38 = v68;
                  if ( v43[2] == *(_BYTE *)(v33 + 2) )
                  {
                    v43 += 3;
                    v33 += 3LL;
                  }
                  else
                  {
                    v43 += 2;
                    v33 += 2LL;
                  }
                }
                else
                {
LABEL_62:
                  v38 = v68;
                }
              }
              v46 = v43 - v41;
              if ( v43 - v41 <= v40 )
              {
                v39 += v46;
              }
              else
              {
                v40 = v43 - v41;
                v38 = &v43[-v33];
                v68 = &v43[-v33];
                if ( v33 > (unsigned __int64)v41 )
                {
                  v19 = v41;
                  v20 = v57;
                  goto LABEL_66;
                }
              }
              v19 = v41;
              LOWORD(v33) = v33 - v46;
              v20 = v57;
              while ( (unsigned __int64)++v39 < 0x18 )
              {
LABEL_74:
                v33 = *(_QWORD *)&v29[8 * (((_WORD)v33 - (_WORD)a1) & 0x3FFF)];
                if ( v33 < v30 )
                  break;
                if ( v32 == *(_DWORD *)v33 )
                  goto LABEL_37;
              }
LABEL_66:
              v47 = v40 - 3;
              v19 += v40;
              v48 = 8LL * (_QWORD)v38 - 8;
              if ( v40 - 3 < 7 )
              {
                v49 = v40 - 3 + v48;
                *(_WORD *)v18 = v49;
                v18 += 2;
                v68 = (char *)v49;
                goto LABEL_89;
              }
              v50 = v56;
              v51 = v48 | 7;
              *(_WORD *)v18 = v51;
              v52 = v40 - 10;
              v18 += 2;
              v68 = (char *)v51;
              if ( v56 )
              {
                v53 = *v56;
                v56 = 0LL;
                if ( v52 < 0xF )
                {
                  *v50 = v53 | (16 * v52);
LABEL_89:
                  if ( v21 <= 0 )
                  {
                    *v20 = 2 * v21 + 1;
                    v21 = 1;
                    v20 = v18;
                    v57 = v18;
                    v18 += 4;
                  }
                  else
                  {
                    v21 = 2 * v21 + 1;
                  }
                  if ( (unsigned __int64)v18 < v60 )
                  {
                    v24 = v61;
                    v29 = v58;
                    v25 = (char *)v59;
                    goto LABEL_18;
                  }
                  goto LABEL_95;
                }
                *v50 = v53 | 0xF0;
              }
              else
              {
                v56 = v18;
                if ( v52 < 0xF )
                {
                  *v18++ = v52;
                  goto LABEL_89;
                }
                *v18++ = 15;
              }
              if ( v40 - 25 >= 0xFF )
              {
                *v18 = -1;
                if ( v47 >= 0x10000 )
                {
                  *(_WORD *)(v18 + 1) = 0;
                  *(_DWORD *)(v18 + 3) = v47;
                  v18 += 7;
                }
                else
                {
                  *(_WORD *)(v18 + 1) = v47;
                  v18 += 3;
                }
              }
              else
              {
                *v18++ = v40 - 25;
              }
              goto LABEL_89;
            }
            if ( (v36 & 0xFFFFFF) == 0 )
              goto LABEL_35;
          }
        }
      }
      *v18++ = v32;
      ++v19;
      ++v30;
      v37 = v18;
      if ( v21 <= 0 )
      {
        v18 += 4;
        *v20 = 2 * v21;
        v21 = 1;
        v20 = v37;
        if ( (unsigned __int64)v18 >= v60 )
          goto LABEL_95;
        v57 = v37;
        v25 = (char *)v59;
      }
      else
      {
        v25 = (char *)v59;
        v21 *= 2;
      }
    }
    v17 = a9;
    v16 = v9 - 5;
    v15 = a6;
    v22 = v62;
    v23 = v63;
    if ( (unsigned __int64)v19 < v9 - 5 )
      continue;
    break;
  }
LABEL_95:
  if ( (unsigned __int64)v19 >= v9 )
  {
LABEL_101:
    if ( (unsigned __int64)v18 >= v64 )
      return 3221225507LL;
    for ( ; v21 > 0; v21 = 2 * v21 + 1 )
      ;
    v55 = (_DWORD)v18 - v69;
    *v20 = 2 * v21 + 1;
    if ( v55 < 8 )
      v55 = 8;
    *a5 = v55;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v18 < v64 )
    {
      v54 = *v19++;
      *v18++ = v54;
      if ( v21 <= 0 )
      {
        *v20 = 2 * v21;
        v21 = 1;
        v20 = v18;
        v18 += 4;
      }
      else
      {
        v21 *= 2;
      }
      if ( (unsigned __int64)v19 >= v9 )
        goto LABEL_101;
    }
    return 3221225507LL;
  }
}
