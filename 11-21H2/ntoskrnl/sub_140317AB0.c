/*
 * XREFs of sub_140317AB0 @ 0x140317AB0
 * Callers:
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 */

unsigned __int64 __fastcall sub_140317AB0(unsigned int *a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v2; // r10
  unsigned int *v3; // r15
  unsigned __int64 v4; // r13
  __int64 v5; // rdi
  unsigned int v6; // r12d
  unsigned __int64 *v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  signed __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned __int64 result; // rax
  __int64 v24; // rdi
  char v25; // r8
  unsigned int v26; // ecx
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 *v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r11
  unsigned int v37; // r15d
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  _QWORD *v40; // r10
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rbx
  _QWORD *v45; // rax
  __int64 *v46; // r8
  unsigned __int64 v47; // rax
  unsigned int v48; // edx
  unsigned __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // r14
  signed __int64 v55; // rcx
  __int64 v56; // r9
  unsigned __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  bool v61; // zf
  __int128 *v62; // rax
  unsigned __int64 v63; // rdx
  __int128 v64; // xmm1
  __int128 v65; // xmm1
  __int128 v66; // xmm1
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // rax
  char v72; // r8
  unsigned __int64 v73; // r13
  bool v74; // cc
  __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // rax
  char v83; // r8
  unsigned __int64 v84; // [rsp+20h] [rbp-E0h]
  __int64 v85; // [rsp+28h] [rbp-D8h]
  int v86; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v87; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v88; // [rsp+50h] [rbp-B0h]
  __int128 v89; // [rsp+60h] [rbp-A0h]
  __int128 v90; // [rsp+70h] [rbp-90h]
  __int128 v91; // [rsp+80h] [rbp-80h]
  __int128 v92; // [rsp+90h] [rbp-70h]
  __int128 v93; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v94; // [rsp+B0h] [rbp-50h]
  __int64 v95; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v97; // [rsp+C8h] [rbp-38h]
  __int64 v98; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v99; // [rsp+D8h] [rbp-28h]
  __int128 v100; // [rsp+E0h] [rbp-20h]
  __int128 v101; // [rsp+F0h] [rbp-10h]
  __int128 v102; // [rsp+100h] [rbp+0h]
  __int128 v103; // [rsp+110h] [rbp+10h]
  char v105; // [rsp+178h] [rbp+78h]
  unsigned int v106; // [rsp+180h] [rbp+80h]
  int v107; // [rsp+188h] [rbp+88h] BYREF

  v1 = (unsigned __int64 *)*((_QWORD *)a1 + 1);
  v87 = 0LL;
  v2 = 0LL;
  v3 = a1;
  v96 = 0LL;
  v4 = *v1;
  v5 = (*v1 >> 9) & 0x7FFFFFFFF8LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v6 = a1[8];
  v7 = (unsigned __int64 *)(v5 - 0x98000000000LL);
  v8 = *((_QWORD *)a1 + 3);
  v106 = v6;
  v9 = 0;
  v97 = 0LL;
  v10 = (__int64)((_QWORD)v7 << 25) >> 16;
  while ( v10 > 0x7FFFFFFEFFFFLL )
  {
    ++v9;
    v10 = (__int64)(v10 << 25) >> 16;
    if ( v9 >= 3 )
      goto LABEL_12;
  }
  v11 = (((unsigned __int64)((__int64)((_QWORD)v7 << 25) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v12 = *(_QWORD *)v11;
  if ( v11 >= 0xFFFFF6FB7DBED000uLL
    && v11 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v67 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v67 )
    {
      v68 = *(_QWORD *)(v67 + 8 * ((v11 >> 3) & 0x1FF));
      v69 = v12 | 0x20;
      if ( (v68 & 0x20) == 0 )
        v69 = v12;
      v12 = v69;
      if ( (v68 & 0x42) != 0 )
        v12 = v69 | 0x42;
    }
  }
  v95 = v12;
  v13 = sub_140317A10((unsigned __int64)&v95);
  v2 = 0LL;
  v17 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v107 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
    {
      do
        sub_1402F32E0(&v107, v14, v15, v16);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
    v2 = 0LL;
  }
  *(_QWORD *)(v17 + 16) ^= ((unsigned int)*(_QWORD *)(v17 + 16) ^ ((unsigned int)*(_QWORD *)(v17 + 16) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
  v100 = 0LL;
  v101 = 0LL;
  if ( (unsigned __int64)((v18 >> 47) + 1) <= 1 )
  {
    *(_QWORD *)&v100 = (((unsigned __int64)v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v100 + 1) = (((unsigned __int64)v100 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v101 = ((*((_QWORD *)&v100 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v101 + 1) = (((unsigned __int64)v101 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = 4LL;
    do
    {
      v20 = (unsigned __int64)(&v99)[v19--];
      v21 = *(_QWORD *)v20;
      if ( v20 >= 0xFFFFF6FB7DBED000uLL
        && v20 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
      {
        if ( (v21 & 1) == 0 )
          break;
        if ( (v21 & 0x20) == 0 || (v21 & 0x42) == 0 )
        {
          v70 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v70 )
          {
            v71 = *(_QWORD *)(v70 + 8 * ((v20 >> 3) & 0x1FF));
            v72 = v21 | 0x20;
            if ( (v71 & 0x20) == 0 )
              v72 = v21;
            LOBYTE(v21) = v72;
            if ( (v71 & 0x42) != 0 )
              LOBYTE(v21) = v72 | 0x42;
          }
        }
      }
    }
    while ( (v21 & 1) != 0 && (v21 & 0x80u) == 0LL && v19 );
  }
LABEL_12:
  if ( v6 == 256 )
  {
    v22 = v8 << 16;
    result = v22 | 0x400;
    if ( qword_140C50780 )
    {
      result = v22 | 0x410;
      if ( ((v22 | 0x400) & qword_140C50780) == 0 )
        result = v22 | qword_140C50780 | 0x400;
    }
  }
  else
  {
    result = sub_1402CCC50(32 * (v6 & 0x1F | 0xFFFFFFFFF8000020uLL));
  }
  *v7 = result;
  v24 = *((_QWORD *)v3 + 8);
  if ( v24 )
  {
    v25 = 0;
    v26 = *(_DWORD *)(v24 + 48);
    v27 = *(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32);
    v28 = *(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32);
    v105 = 0;
    if ( qword_1400161D0[(v26 >> 19) & 3] == 16 )
    {
      v73 = v4 & 0xFFFFFFFFFFFF0000uLL;
      *((_QWORD *)&v87 + 1) = 0x10000LL;
      *(_QWORD *)&v87 = v73;
      result = v73 >> 12;
      if ( v73 >> 12 >= v27 )
      {
        result = (v73 + 0xFFFF) >> 12;
        if ( result <= v28 )
        {
          LOWORD(v88) = 2;
          *((_QWORD *)&v88 + 1) = &v87;
          v34 = v2;
          *(_QWORD *)&v89 = 1LL;
          v36 = 16LL;
          *((_QWORD *)&v89 + 1) = v2;
          *(_QWORD *)&v90 = v2;
          v85 = 16LL;
LABEL_38:
          v37 = v106;
          v38 = v2;
          v39 = v2;
          v84 = v2;
          while ( 1 )
          {
            v40 = (_QWORD *)(*((_QWORD *)&v88 + 1) + 16 * v34);
            v99 = v40;
            v41 = (*v40 + ((_QWORD)v90 << 12)) & 0xFFFFFFFFFFFFF000uLL;
            v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v94 = v42;
            if ( v39 && (v41 != v38 + 4096 || (v42 & 0xFFF) == 0) )
            {
LABEL_68:
              v3 = a1;
              result = v84;
              v25 = v105;
              goto LABEL_69;
            }
            v43 = *(_QWORD *)v42;
            if ( v42 >= 0xFFFFF6FB7DBED000uLL && v42 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
            {
              if ( *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
                && (v43 & 1) != 0
                && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
              {
                v75 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
                if ( v75 )
                {
                  v76 = *(_QWORD *)(v75 + 8 * ((v42 >> 3) & 0x1FF));
                  v77 = v43 | 0x20;
                  if ( (v76 & 0x20) == 0 )
                    v77 = *(_QWORD *)v42;
                  v43 = v77;
                  if ( (v76 & 0x42) != 0 )
                    v43 = v77 | 0x42;
                }
                v39 = v84;
              }
              v34 = *((_QWORD *)&v89 + 1);
            }
            if ( !v43 )
            {
              v44 = sub_140319600(v24, v41 >> 12, 4LL, &v96);
              if ( !v44 )
                goto LABEL_68;
              v45 = *(_QWORD **)(v24 + 120);
              if ( (__int64)v45 < 0 && (v41 >> 12) - v27 > (unsigned __int64)(*v45 - 1LL) >> 12 )
                goto LABEL_68;
              v46 = (__int64 *)v94;
              v47 = (__int64)((v94 << 25) - v97) >> 16;
              v48 = 0;
              while ( v47 > 0x7FFFFFFEFFFFLL )
              {
                ++v48;
                v47 = (__int64)((v47 << 25) - v97) >> 16;
                if ( v48 >= 3 )
                  goto LABEL_59;
              }
              v49 = (((unsigned __int64)((__int64)((v94 << 25) - v97) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
              v50 = *(_QWORD *)v49;
              if ( v49 >= 0xFFFFF6FB7DBED000uLL
                && v49 <= 0xFFFFF6FB7DBED7F8uLL
                && (dword_140D06880 & 0xC00000) != 0
                && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
                && (v50 & 1) != 0
                && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
              {
                v78 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
                if ( v78 )
                {
                  v79 = *(_QWORD *)(v78 + 8 * ((v49 >> 3) & 0x1FF));
                  v80 = v50 | 0x20;
                  if ( (v79 & 0x20) == 0 )
                    v80 = v50;
                  v50 = v80;
                  if ( (v79 & 0x42) != 0 )
                    v50 = v80 | 0x42;
                }
              }
              v98 = v50;
              v54 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v98) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL;
              v86 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
              {
                do
                  sub_1402F32E0(&v86, v51, v52, v53);
                while ( *(__int64 *)(v54 + 24) < 0 );
              }
              *(_QWORD *)(v54 + 16) ^= ((unsigned int)*(_QWORD *)(v54 + 16) ^ ((unsigned int)*(_QWORD *)(v54 + 16)
                                                                             + 0x10000)) & 0x3FF0000;
              _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v55 = *(_QWORD *)(v54 + 8) | 0x8000000000000000uLL;
              v102 = 0LL;
              v103 = 0LL;
              if ( (unsigned __int64)((v55 >> 47) + 1) <= 1 )
              {
                v56 = 4LL;
                *(_QWORD *)&v102 = (((unsigned __int64)v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                *((_QWORD *)&v102 + 1) = (((unsigned __int64)v102 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                *(_QWORD *)&v103 = ((*((_QWORD *)&v102 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                *((_QWORD *)&v103 + 1) = (((unsigned __int64)v103 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                do
                {
                  v57 = *((_QWORD *)&v101 + v56-- + 1);
                  v58 = *(_QWORD *)v57;
                  if ( v57 >= 0xFFFFF6FB7DBED000uLL
                    && v57 <= 0xFFFFF6FB7DBED7F8uLL
                    && (dword_140D06880 & 0xC00000) != 0
                    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
                  {
                    if ( (v58 & 1) == 0 )
                      break;
                    if ( (v58 & 0x20) == 0 || (v58 & 0x42) == 0 )
                    {
                      v81 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
                      if ( v81 )
                      {
                        v82 = *(_QWORD *)(v81 + 8 * ((v57 >> 3) & 0x1FF));
                        v83 = v58 | 0x20;
                        if ( (v82 & 0x20) == 0 )
                          v83 = v58;
                        LOBYTE(v58) = v83;
                        if ( (v82 & 0x42) != 0 )
                          LOBYTE(v58) = v83 | 0x42;
                      }
                    }
                  }
                }
                while ( (v58 & 1) != 0 && (v58 & 0x80u) == 0LL && v56 );
                v37 = v106;
              }
              v34 = *((_QWORD *)&v89 + 1);
              v46 = (__int64 *)v94;
LABEL_59:
              if ( v37 == 256 )
              {
                v59 = sub_1402CCC50((v44 << 16) | 0x400);
              }
              else
              {
                v59 = 32 * (v37 & 0x1F | 0xFFFFFFFFF8000020uLL);
                if ( qword_140C50780 )
                {
                  if ( (qword_140C50780 & v59) != 0 )
                    v59 |= 0x10uLL;
                  else
                    v59 |= qword_140C50780;
                }
              }
              v40 = v99;
              v36 = v85;
              *v46 = v59;
              v39 = v84;
            }
            v60 = (v40[1] + (unsigned __int64)(*(_DWORD *)v40 & 0xFFF) + 4095) >> 12;
            *(_QWORD *)&v90 = v90 + 1;
            if ( (_QWORD)v90 != v60 )
              goto LABEL_65;
            ++v34;
            *(_QWORD *)&v90 = 0LL;
            *((_QWORD *)&v89 + 1) = v34;
            v61 = v34 == (_QWORD)v89;
            if ( v34 < (unsigned __int64)v89 )
              break;
LABEL_66:
            if ( !v61 )
            {
              ++v39;
              v38 = v41;
              v84 = v39;
              if ( v39 < v36 )
                continue;
            }
            goto LABEL_68;
          }
          if ( !*(_QWORD *)(*((_QWORD *)&v88 + 1) + 16 * v34 + 8) )
            goto LABEL_68;
LABEL_65:
          v61 = v34 == (_QWORD)v89;
          goto LABEL_66;
        }
      }
    }
    else
    {
      result = *v3;
      if ( (result & 2) != 0 )
      {
        v62 = (__int128 *)*((_QWORD *)v3 + 7);
        v85 = 256LL;
        v63 = v28 - (v4 >> 12) + 1;
        v64 = v62[1];
        v88 = *v62;
        v89 = v64;
        v34 = *((_QWORD *)&v64 + 1);
        v65 = v62[3];
        v90 = v62[2];
        v91 = v65;
        v66 = v62[5];
        v92 = v62[4];
        v93 = v66;
        if ( v63 < 0x100 )
          v85 = v63;
      }
      else
      {
        if ( (v26 & 0x70) == 0x20 )
          return result;
        v29 = 8LL;
        *(_QWORD *)&v87 = v4 & 0xFFFFFFFFFFFFF000uLL;
        v30 = *(_QWORD *)(v24 + 120);
        if ( v30 >= 0 )
        {
          v31 = *(_QWORD *)(v24 + 120) & 0xFFFLL;
          if ( (v30 & 0xFFF) != 0
            && v31 + ((unsigned __int64)v30 >> 12) - 1 == v4 >> 12
            && (v32 = *(__int64 **)(v24 + 72)) != 0LL
            && (v33 = *v32, *(_QWORD *)(*v32 + 64))
            && (*(_DWORD *)(v33 + 56) & 0x20) == 0
            && (*(_BYTE *)(v33 + 62) & 0xC) == 4 )
          {
            v29 = 2 * v31;
            v74 = (unsigned __int64)(2 * v31) <= 0x80;
            v25 = 1;
            v105 = 1;
            if ( !v74 )
              v29 = 128LL;
          }
          else
          {
            v25 = 0;
          }
        }
        v34 = v2;
        LOWORD(v88) = 2;
        *(_QWORD *)&v89 = 1LL;
        *((_QWORD *)&v89 + 1) = v2;
        *(_QWORD *)&v90 = v2;
        v35 = v28 - (v4 >> 12) + 1;
        if ( v29 <= v35 )
          v35 = v29;
        v85 = v35;
        *((_QWORD *)&v87 + 1) = v35 << 12;
        *((_QWORD *)&v88 + 1) = &v87;
      }
      v36 = v85;
      result = v2;
      if ( v85 )
        goto LABEL_38;
LABEL_69:
      if ( v25 )
        *((_BYTE *)v3 + 1) = result;
    }
  }
  return result;
}
