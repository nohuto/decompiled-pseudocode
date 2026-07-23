/*
 * XREFs of sub_1405F0724 @ 0x1405F0724
 * Callers:
 *     sub_140377520 @ 0x140377520 (sub_140377520.c)
 *     sub_14038CFA0 @ 0x14038CFA0 (sub_14038CFA0.c)
 * Callees:
 *     sub_140377DA0 @ 0x140377DA0 (sub_140377DA0.c)
 *     sub_140378090 @ 0x140378090 (sub_140378090.c)
 *     sub_14038CF50 @ 0x14038CF50 (sub_14038CF50.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405F0724(
        unsigned __int64 a1,
        unsigned int a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned int v10; // edi
  unsigned __int8 *v13; // rbx
  char *v14; // r15
  unsigned __int8 *v15; // r12
  unsigned __int64 v16; // r8
  __int64 v17; // r11
  unsigned __int8 *v18; // rbp
  unsigned __int8 *v19; // rdi
  int v20; // esi
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r10
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // r15d
  unsigned __int8 *v30; // rdx
  int v31; // eax
  unsigned __int8 *v32; // rcx
  unsigned __int8 *v33; // rbp
  unsigned __int8 *v34; // r9
  __int64 v35; // r10
  unsigned __int64 v36; // r11
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // rdx
  unsigned __int8 *v40; // rax
  unsigned __int8 *v41; // rbx
  int v42; // eax
  int v43; // ecx
  unsigned __int64 v44; // rbx
  unsigned __int8 *v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // r9
  _BYTE *v49; // r8
  unsigned __int64 v50; // rdx
  char v51; // cl
  unsigned __int8 v52; // cl
  _WORD *v53; // rdi
  __int64 v54; // rax
  unsigned __int8 v55; // al
  int v56; // esi
  char *v57; // rax
  unsigned __int64 v58; // [rsp+30h] [rbp-98h]
  unsigned __int64 v59; // [rsp+38h] [rbp-90h]
  unsigned __int64 v60; // [rsp+40h] [rbp-88h]
  __int64 v61; // [rsp+48h] [rbp-80h]
  __int64 v62; // [rsp+50h] [rbp-78h]
  char *v63; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v64; // [rsp+60h] [rbp-68h]
  char *v65; // [rsp+68h] [rbp-60h]
  _QWORD v66[2]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v67; // [rsp+80h] [rbp-48h]
  int v68; // [rsp+84h] [rbp-44h]
  unsigned __int8 *v69; // [rsp+D0h] [rbp+8h]
  int v70; // [rsp+E0h] [rbp+18h]

  v70 = (int)a3;
  v10 = a2;
  v68 = 0;
  v58 = a1 + a2;
  v65 = &a3[a4];
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset(a6, 0, 0x40000uLL);
    v13 = (unsigned __int8 *)a1;
    v63 = a3;
    v14 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    if ( a7 && a9 <= v10 )
      v10 = a9;
    else
      a9 = v10;
    v66[0] = a7;
    v15 = a6 + 1342240;
    v66[1] = a8;
    v67 = v10;
    v69 = 0LL;
    while ( 1 )
    {
      v61 = 0LL;
      v62 = 0LL;
      memset(a6 + 1339936, 0, 0x800uLL);
      v16 = v58;
      v17 = v10;
      v18 = (unsigned __int8 *)v58;
      v19 = v15 + 4;
      if ( (unsigned __int64)(v13 + 0x10000) <= v58 )
        v18 = v13 + 0x10000;
      v20 = 1;
      v21 = (unsigned __int64)&v13[v17];
      v64 = v18;
      v22 = (unsigned __int64)(v18 - 5);
      v59 = (unsigned __int64)(v18 - 5);
      if ( (unsigned __int64)(v18 - 5) < v21 )
        v21 = (unsigned __int64)(v18 - 5);
      v60 = v21;
      if ( v13 == (unsigned __int8 *)a1 )
      {
        v20 = 2;
        ++*(_DWORD *)&a6[4 * *v13 + 1339936];
        v23 = *v13++;
        *v19 = v23;
        v19 = v15 + 5;
      }
      if ( (unsigned __int64)v13 >= v22 )
        goto LABEL_91;
      v24 = v13;
      v25 = (__int64)&v13[-a1] % 0x20000;
      do
      {
        v26 = (unsigned __int16)word_14000F2D0[*v24] ^ (unsigned __int16)word_14000F6D0[v24[2]] ^ (unsigned __int64)(unsigned __int16)word_14000F4D0[v24[1]];
        v27 = *(_QWORD *)&a6[8 * v26];
        *(_QWORD *)&a6[8 * v26] = v24++;
        *(_QWORD *)&a6[8 * v25 + 0x40000] = v27;
        v25 = ((_DWORD)v25 + 1) & 0x1FFFF;
      }
      while ( (unsigned __int64)v24 < v22 );
LABEL_18:
      v16 = v58;
      while ( (unsigned __int64)v13 < v21 )
      {
LABEL_22:
        v29 = *(_DWORD *)v13;
        v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v13[-a1] % 0x20000) + 0x40000];
        if ( v30 + 0x10000 > v13 )
        {
          v31 = *(_DWORD *)v30 ^ v29;
          if ( !v31 )
            goto LABEL_24;
          if ( (v31 & 0xFFFFFF) == 0 )
            goto LABEL_32;
          v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v30[-a1] % 0x20000) + 0x40000];
          if ( v30 + 0x10000 > v13 )
          {
            v37 = *(_DWORD *)v30 ^ v29;
            if ( !v37 )
              goto LABEL_24;
            if ( (v37 & 0xFFFFFF) == 0 )
              goto LABEL_32;
            v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v30[-a1] % 0x20000) + 0x40000];
            if ( v30 + 0x10000 > v13 )
            {
              v38 = *(_DWORD *)v30 ^ v29;
              if ( !v38 )
              {
LABEL_24:
                v32 = v69;
                v33 = v13 - 0x10000;
                v34 = v13;
                v35 = 0LL;
                v36 = 3LL;
                goto LABEL_36;
              }
              if ( (v38 & 0xFFFFFF) == 0 )
              {
LABEL_32:
                v69 = v30;
                v34 = v13;
                v33 = v13 - 0x10000;
                v32 = v30;
                v35 = 0LL;
                v36 = 3LL;
                while ( 1 )
                {
                  v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v30[-a1] % 0x20000) + 0x40000];
                  if ( v30 <= v33 )
                  {
LABEL_70:
                    v13 = &v34[v36];
                    v46 = v34 - v32;
                    if ( v36 == 3 && v46 > 0x1000 )
                    {
                      v22 = v59;
                      v13 = v34;
                      v21 = v60;
                      goto LABEL_73;
                    }
                    if ( v46 < 0x100 )
                      v47 = *((unsigned __int8 *)qword_14000F1D0 + v46);
                    else
                      v47 = *((unsigned __int8 *)qword_14000F1D0 + (v46 >> 8)) + 8LL;
                    v61 += v47;
                    v48 = v36 - 3;
                    v49 = v19 + 1;
                    v50 = v46 - (1LL << v47);
                    v51 = 16 * v47;
                    if ( v36 - 3 < 0xF )
                    {
                      v52 = v36 - 3 + v51;
                      *v19 = v52;
                      v53 = v19 + 1;
                    }
                    else
                    {
                      v52 = v51 + 15;
                      *v19 = v52;
                      v53 = v19 + 2;
                      if ( v36 - 18 >= 0xFF )
                      {
                        *v49 = -1;
                        if ( v48 >= 0x10000 )
                        {
                          *(_DWORD *)(v49 + 3) = v48;
                          *v53 = 0;
                          v53 = v49 + 7;
                          v54 = 7LL;
                        }
                        else
                        {
                          *v53 = v48;
                          v54 = 3LL;
                          v53 = v49 + 3;
                        }
                      }
                      else
                      {
                        *v49 = v36 - 18;
                        v54 = 1LL;
                      }
                      v62 += v54;
                    }
                    v22 = v59;
                    v21 = v60;
                    ++*(_DWORD *)&a6[4 * v52 + 1340960];
                    *v53 = v50;
                    v19 = (unsigned __int8 *)(v53 + 1);
                    if ( v20 <= 0 )
                    {
                      *(_DWORD *)v15 = 2 * v20 + 1;
                      v20 = 1;
                      v15 = v19;
                      v19 += 4;
                    }
                    else
                    {
                      v20 = 2 * v20 + 1;
                    }
                    goto LABEL_18;
                  }
                  if ( v29 == *(_DWORD *)v30 )
                    break;
LABEL_69:
                  if ( (unsigned __int64)++v35 >= 0xC )
                    goto LABEL_70;
                }
                v13 = v34;
LABEL_36:
                v39 = v30 + 4;
                v40 = v13 + 36;
                v41 = v13 + 4;
                if ( (unsigned __int64)v40 >= v16 )
                {
LABEL_47:
                  while ( (unsigned __int64)v41 < v16 )
                  {
                    if ( *v41 != *(_BYTE *)v39 )
                      break;
                    ++v41;
                    v39 = (_DWORD *)((char *)v39 + 1);
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v42 = *(_DWORD *)v41;
                    v43 = *v39;
                    if ( *(_DWORD *)v41 != *v39 )
                      goto LABEL_58;
                    v42 = *((_DWORD *)v41 + 1);
                    v43 = v39[1];
                    if ( v42 != v43 )
                      break;
                    v42 = *((_DWORD *)v41 + 2);
                    v43 = v39[2];
                    if ( v42 != v43 )
                    {
                      v41 += 8;
                      v39 += 2;
                      goto LABEL_58;
                    }
                    v42 = *((_DWORD *)v41 + 3);
                    v43 = v39[3];
                    if ( v42 != v43 )
                    {
                      v41 += 12;
                      v39 += 3;
                      goto LABEL_58;
                    }
                    v42 = *((_DWORD *)v41 + 4);
                    v43 = v39[4];
                    if ( v42 != v43 )
                    {
                      v41 += 16;
                      v39 += 4;
                      goto LABEL_58;
                    }
                    v42 = *((_DWORD *)v41 + 5);
                    v43 = v39[5];
                    if ( v42 != v43 )
                    {
                      v41 += 20;
                      v39 += 5;
                      goto LABEL_58;
                    }
                    v42 = *((_DWORD *)v41 + 6);
                    v43 = v39[6];
                    if ( v42 != v43 )
                    {
                      v41 += 24;
                      v39 += 6;
                      goto LABEL_58;
                    }
                    v42 = *((_DWORD *)v41 + 7);
                    v43 = v39[7];
                    if ( v42 != v43 )
                    {
                      v41 += 28;
                      v39 += 7;
                      goto LABEL_58;
                    }
                    v41 += 32;
                    v39 += 8;
                    if ( (unsigned __int64)(v41 + 32) >= v16 )
                    {
                      v32 = v69;
                      goto LABEL_47;
                    }
                  }
                  v41 += 4;
                  ++v39;
LABEL_58:
                  if ( (_BYTE)v42 == (_BYTE)v43 )
                  {
                    v16 = v58;
                    if ( v41[1] != *((_BYTE *)v39 + 1) )
                    {
                      ++v41;
                      v39 = (_DWORD *)((char *)v39 + 1);
                      goto LABEL_61;
                    }
                    v32 = v69;
                    if ( v41[2] == *((_BYTE *)v39 + 2) )
                    {
                      v41 += 3;
                      v39 = (_DWORD *)((char *)v39 + 3);
                    }
                    else
                    {
                      v41 += 2;
                      v39 = (_DWORD *)((char *)v39 + 2);
                    }
                  }
                  else
                  {
LABEL_61:
                    v32 = v69;
                  }
                }
                v44 = v41 - v34;
                v45 = (unsigned __int8 *)v39;
                v30 = (unsigned __int8 *)v39 - v44;
                if ( v44 <= v36 )
                {
                  v35 += v44;
                  goto LABEL_69;
                }
                v69 = v30;
                v36 = v44;
                v32 = v30;
                if ( v45 > v34 )
                  goto LABEL_70;
                goto LABEL_69;
              }
            }
          }
        }
LABEL_73:
        ++v13;
        ++*(_DWORD *)&a6[4 * (unsigned __int8)v29 + 1339936];
        *v19++ = v29;
        if ( v20 <= 0 )
        {
          *(_DWORD *)v15 = 2 * v20;
          v20 = 1;
          v15 = v19;
          v19 += 4;
        }
        else
        {
          v20 *= 2;
        }
      }
      if ( (unsigned __int64)v13 < v22 )
        break;
      v14 = v63;
      v18 = v64;
LABEL_91:
      while ( v13 < v18 )
      {
        ++*(_DWORD *)&a6[4 * *v13 + 1339936];
        v55 = *v13++;
        *v19++ = v55;
        if ( v20 <= 0 )
        {
          *(_DWORD *)v15 = 2 * v20;
          v20 = 1;
          v15 = v19;
          v19 += 4;
        }
        else
        {
          v20 *= 2;
        }
      }
      for ( ; v20 > 0; v20 = 2 * v20 + 1 )
        ;
      *(_DWORD *)v15 = 2 * v20 + 1;
      if ( (unsigned __int64)v13 < v16 )
      {
        v56 = 0;
      }
      else
      {
        ++*((_DWORD *)a6 + 335240);
        v56 = 1;
      }
      if ( &v14[4 * ((unsigned __int64)(sub_140378090((_QWORD *)a6 + 163840) + v61 + 31) >> 5) + 258 + v62] >= v65 )
        return 3221225507LL;
      v15 = a6 + 1342240;
      v57 = sub_140377DA0((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v19, v14, v56);
      v10 = a9;
      v14 = v57;
      v63 = v57;
      if ( v56 )
      {
        *a5 = (_DWORD)v57 - v70;
        return 0LL;
      }
    }
    v28 = sub_14038CF50((__int64)v66, v22, (__int64)v13);
    v22 = v59;
    v21 = v28;
    v16 = v58;
    v60 = v28;
    goto LABEL_22;
  }
  return 3221225507LL;
}
