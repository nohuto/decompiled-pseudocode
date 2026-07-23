/*
 * XREFs of sub_140377590 @ 0x140377590
 * Callers:
 *     sub_140377520 @ 0x140377520 (sub_140377520.c)
 *     sub_14038CFA0 @ 0x14038CFA0 (sub_14038CFA0.c)
 * Callees:
 *     sub_140377DA0 @ 0x140377DA0 (sub_140377DA0.c)
 *     sub_140378090 @ 0x140378090 (sub_140378090.c)
 *     sub_14038CF50 @ 0x14038CF50 (sub_14038CF50.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140377590(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // rbx
  unsigned __int8 *v10; // rdi
  unsigned int v11; // ecx
  unsigned __int8 *v12; // r12
  void *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r13
  unsigned __int8 *v17; // rcx
  unsigned __int64 v18; // r15
  bool v19; // cf
  unsigned __int8 *v20; // rbx
  int v21; // esi
  unsigned __int8 v22; // al
  unsigned __int8 *v23; // r10
  unsigned __int8 *v24; // r11
  _DWORD *v25; // rdx
  __int64 v26; // r8
  unsigned __int8 *v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rbp
  unsigned __int8 *v30; // r13
  __int64 v31; // r15
  __int64 v32; // rbp
  int v33; // eax
  int v34; // ecx
  __int64 v35; // r8
  unsigned __int8 *v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // r9
  _BYTE *v41; // r8
  unsigned __int64 v42; // rdx
  char v43; // cl
  unsigned __int8 v44; // cl
  _WORD *v45; // rbx
  int v46; // eax
  int v47; // esi
  __int64 v48; // rax
  bool v49; // zf
  __int64 v51; // r8
  unsigned __int8 *v52; // rdx
  unsigned __int64 v53; // r8
  unsigned __int8 *v54; // rdx
  __int64 v55; // rax
  int *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int8 v59; // al
  unsigned __int8 *v60; // [rsp+30h] [rbp-B8h]
  char *v61; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v62; // [rsp+40h] [rbp-A8h]
  __int64 v63; // [rsp+48h] [rbp-A0h]
  __int64 v64; // [rsp+50h] [rbp-98h]
  unsigned __int64 v65; // [rsp+58h] [rbp-90h]
  unsigned __int64 v66; // [rsp+60h] [rbp-88h]
  unsigned __int8 *v67; // [rsp+68h] [rbp-80h]
  __int64 v68; // [rsp+70h] [rbp-78h]
  unsigned __int64 v69; // [rsp+78h] [rbp-70h]
  __int64 v70; // [rsp+80h] [rbp-68h]
  _QWORD v71[2]; // [rsp+88h] [rbp-60h] BYREF
  unsigned int v72; // [rsp+98h] [rbp-50h]
  int v73; // [rsp+9Ch] [rbp-4Ch]
  unsigned __int8 v75; // [rsp+F8h] [rbp+10h]
  unsigned __int8 v76; // [rsp+F8h] [rbp+10h]
  int v77; // [rsp+100h] [rbp+18h]
  unsigned __int8 v78; // [rsp+108h] [rbp+20h]

  v77 = a3;
  v9 = a1 + a2;
  v65 = v9;
  v69 = a3 + a4;
  v73 = 0;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v68 = a3;
  memset64(a6, a1, 0xAF6uLL);
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v10 = (unsigned __int8 *)a1;
  if ( !a7 || (v11 = a9, a9 > a2) )
    v11 = a2;
  v71[0] = a7;
  v12 = (unsigned __int8 *)(a6 + 23184);
  v13 = a6 + 22608;
  v14 = v11;
  v71[1] = a8;
  v72 = v11;
  v70 = v11;
  while ( 2 )
  {
    v63 = 0LL;
    v64 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    memset(v13, 0, 0x800uLL);
    v17 = v10 + 0x10000;
    v67 = v10 + 0x10000;
    if ( (unsigned __int64)(v10 + 0x10000) > v9 )
    {
      v17 = (unsigned __int8 *)v9;
      v67 = (unsigned __int8 *)v9;
    }
    v60 = v12;
    v18 = (unsigned __int64)&v10[v14];
    v66 = (unsigned __int64)(v17 - 40);
    v19 = v17 - 40 < &v10[v14];
    v20 = (unsigned __int8 *)(a6 + 23185);
    v21 = 1;
    if ( v19 )
      v18 = (unsigned __int64)(v17 - 40);
    v62 = v18;
    if ( v10 == (unsigned __int8 *)a1 )
    {
      v21 = 2;
      ++a6[*v10 + 22608];
      v22 = *v10++;
      *v20 = v22;
      v20 = (unsigned __int8 *)a6 + 92741;
    }
    if ( v10 >= v17 - 40 )
      goto LABEL_48;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v23 = v10 + 1;
            v24 = v10;
            v25 = &a6[2 * *v10];
            v26 = v10[2] + 4LL * v10[1];
            v27 = *(unsigned __int8 **)&v25[4 * v26];
            *(_QWORD *)&v25[4 * v26] = v10;
            v28 = *v10;
            if ( *v27 != (_BYTE)v28 || v27[1] != *v23 || v27[2] != v10[2] || v10 - v27 >= 0x10000 )
              break;
            v29 = v27[3];
            v30 = v10;
            v31 = v10[3];
            if ( (_BYTE)v31 != (_BYTE)v29 )
            {
              v35 = v28 + 2 * v26;
              v36 = *(unsigned __int8 **)&a6[2 * v35 + 5612 + 2 * v31];
              *(_QWORD *)&a6[2 * v35 + 5612 + 2 * v29] = v27;
              if ( v10 - v36 >= 0x10000 )
                goto LABEL_37;
              v37 = *(unsigned int *)v10;
              if ( (_DWORD)v37 != *(_DWORD *)v36 )
                goto LABEL_37;
              v27 = v36;
              *(_QWORD *)&a6[2 * v35 + 5612 + 2 * (v37 >> 24)] = v10;
            }
            v32 = v27[4];
            v61 = (char *)(v10 + 4);
            v75 = v10[4];
            if ( v75 != (_BYTE)v32 )
            {
              v51 = 2
                  * ((unsigned __int8)__ROR1__(*v23 ^ __ROL1__(*v10 + v10[3], 3), 1)
                   + 4LL * (unsigned __int8)__ROL1__(*v10 ^ __ROR1__(v10[2] + *v23 + 97, 1), 3));
              v52 = *(unsigned __int8 **)&a6[2 * v51 + 5612 + 2 * v75];
              *(_QWORD *)&a6[2 * v51 + 5612 + 2 * v32] = v27;
              if ( v10 - v52 >= 0x10000
                || *(_DWORD *)v10 != *(_DWORD *)v52
                || (v57 = (unsigned __int8)*v61, (_BYTE)v57 != v52[4])
                || v10 == v52 )
              {
                v10 += 4;
                v27 += 4;
                goto LABEL_38;
              }
              v27 = v52;
              *(_QWORD *)&a6[2 * v51 + 5612 + 2 * v57] = v10;
            }
            v78 = v27[5];
            v76 = v10[5];
            if ( v76 != v78 )
            {
              v53 = 2
                  * ((v10[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v10, *v61))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v23 ^ __ROL1__(v10[3], 3), 1)
                    + (unsigned __int64)(unsigned __int8)__ROL1__(*v61 ^ (__ROR1__(*v10, 1) + 69), 3)));
              v54 = *(unsigned __int8 **)&a6[2 * v53 + 5612 + 2 * v76];
              *(_QWORD *)&a6[2 * v53 + 5612 + 2 * v78] = v27;
              if ( v10 - v54 >= 0x10000
                || *(_DWORD *)v10 != *(_DWORD *)v54
                || *v61 != v54[4]
                || (v58 = v10[5], (_BYTE)v58 != v54[5])
                || v10 == v54 )
              {
                v10 += 5;
                v27 += 5;
                goto LABEL_38;
              }
              v27 = v54;
              *(_QWORD *)&a6[2 * v53 + 5612 + 2 * v58] = v10;
            }
            v10 += 6;
            v27 += 6;
            if ( (unsigned __int64)v10 >= v65 - 40 )
            {
LABEL_31:
              while ( (unsigned __int64)v10 < v65 )
              {
                if ( *v10 != *v27 )
                  break;
                ++v10;
                ++v27;
              }
            }
            else
            {
              while ( 1 )
              {
                v33 = *(_DWORD *)v27;
                v34 = *(_DWORD *)v10;
                if ( *(_DWORD *)v10 != *(_DWORD *)v27 )
                  break;
                v33 = *((_DWORD *)v27 + 1);
                v34 = *((_DWORD *)v10 + 1);
                if ( v34 != v33 )
                {
                  v10 += 4;
                  v27 += 4;
                  break;
                }
                v33 = *((_DWORD *)v27 + 2);
                v34 = *((_DWORD *)v10 + 2);
                if ( v34 != v33 )
                {
                  v10 += 8;
                  v27 += 8;
                  break;
                }
                v33 = *((_DWORD *)v27 + 3);
                v34 = *((_DWORD *)v10 + 3);
                if ( v34 != v33 )
                {
                  v10 += 12;
                  v27 += 12;
                  break;
                }
                v33 = *((_DWORD *)v27 + 4);
                v34 = *((_DWORD *)v10 + 4);
                if ( v34 != v33 )
                {
                  v10 += 16;
                  v27 += 16;
                  break;
                }
                v33 = *((_DWORD *)v27 + 5);
                v34 = *((_DWORD *)v10 + 5);
                if ( v34 != v33 )
                {
                  v10 += 20;
                  v27 += 20;
                  break;
                }
                v33 = *((_DWORD *)v27 + 6);
                v34 = *((_DWORD *)v10 + 6);
                if ( v34 != v33 )
                {
                  v10 += 24;
                  v27 += 24;
                  break;
                }
                v33 = *((_DWORD *)v27 + 7);
                v34 = *((_DWORD *)v10 + 7);
                if ( v34 != v33 )
                {
                  v10 += 28;
                  v27 += 28;
                  break;
                }
                v10 += 32;
                v27 += 32;
                if ( (unsigned __int64)v10 >= v65 - 40 )
                  goto LABEL_31;
              }
              if ( (_BYTE)v34 == (_BYTE)v33 )
              {
                if ( v10[1] != v27[1] )
                {
                  ++v10;
                  ++v27;
                  goto LABEL_38;
                }
                if ( v10[2] != v27[2] )
                {
                  v10 += 2;
                  v27 += 2;
                  goto LABEL_38;
                }
LABEL_37:
                v10 += 3;
                v27 += 3;
              }
            }
LABEL_38:
            v38 = v10 - v27;
            if ( v10 - v30 == 3 && v38 > 0x1000 )
            {
              v18 = v62;
              v12 = v60;
              break;
            }
            if ( v38 >= 0x100 )
              v39 = *((unsigned __int8 *)qword_14000F1D0 + (v38 >> 8)) + 8LL;
            else
              v39 = *((unsigned __int8 *)qword_14000F1D0 + v38);
            v40 = v10 - v30 - 3;
            v15 = v39 + v63;
            v41 = v20 + 1;
            v63 += v39;
            v42 = v38 - (1LL << v39);
            v43 = 16 * v39;
            if ( v40 >= 0xF )
            {
              v44 = v43 + 15;
              *v20 = v44;
              v45 = v20 + 2;
              if ( (unsigned __int64)(v10 - v30 - 18) >= 0xFF )
              {
                *v41 = -1;
                if ( v40 < 0x10000 )
                {
                  *v45 = v40;
                  v64 += 3LL;
                  v45 = v41 + 3;
                  goto LABEL_43;
                }
                *(_DWORD *)(v41 + 3) = v40;
                *v45 = 0;
                v45 = v41 + 7;
                v55 = 7LL;
              }
              else
              {
                *v41 = (_BYTE)v10 - (_BYTE)v30 - 18;
                v55 = 1LL;
              }
              v64 += v55;
            }
            else
            {
              v44 = v40 + v43;
              *v20 = v44;
              v45 = v20 + 1;
            }
LABEL_43:
            ++a6[v44 + 22864];
            v46 = 2 * v21 + 1;
            *v45 = v42;
            v20 = (unsigned __int8 *)(v45 + 1);
            if ( v21 <= 0 )
            {
              v56 = (int *)v60;
              v21 = 1;
              v60 = v20;
              v20 += 4;
              *v56 = v46;
            }
            else
            {
              v21 = 2 * v21 + 1;
            }
            v18 = v62;
            v12 = v60;
            if ( (unsigned __int64)v10 >= v62 )
            {
              if ( (unsigned __int64)v10 >= v66 )
                goto LABEL_47;
              v18 = sub_14038CF50(v71, v66, v10);
              v62 = v18;
            }
          }
          v10 = v23;
          ++a6[*v24 + 22608];
          *v20++ = *v24;
          if ( v21 <= 0 )
            break;
          v21 *= 2;
        }
        *(_DWORD *)v12 = 2 * v21;
        v21 = 1;
        v12 = v20;
        v60 = v20;
        v20 += 4;
      }
      while ( (unsigned __int64)v23 < v18 );
      if ( (unsigned __int64)v23 >= v66 )
        break;
      v18 = sub_14038CF50(v71, v66, v23);
      v62 = v18;
    }
    v15 = v63;
LABEL_47:
    v16 = v64;
    v17 = v67;
LABEL_48:
    while ( v10 < v17 )
    {
      ++a6[*v10 + 22608];
      v59 = *v10++;
      *v20++ = v59;
      if ( v21 <= 0 )
      {
        *(_DWORD *)v12 = 2 * v21;
        v21 = 1;
        v12 = v20;
        v20 += 4;
      }
      else
      {
        v21 *= 2;
      }
    }
    for ( ; v21 > 0; v21 = 2 * v21 + 1 )
      ;
    *(_DWORD *)v12 = 2 * v21 + 1;
    if ( (unsigned __int64)v10 < v65 )
    {
      v47 = 0;
    }
    else
    {
      ++a6[22864];
      v47 = 1;
    }
    if ( v16 + 4 * ((unsigned __int64)(v15 + sub_140378090(a6 + 15304) + 31) >> 5) + v68 + 258 < v69 )
    {
      v12 = (unsigned __int8 *)(a6 + 23184);
      v48 = sub_140377DA0((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v20, v68, v47);
      v9 = v65;
      v13 = a6 + 22608;
      v49 = v47 == 0;
      v68 = v48;
      v14 = v70;
      if ( !v49 )
      {
        *a5 = v48 - v77;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
