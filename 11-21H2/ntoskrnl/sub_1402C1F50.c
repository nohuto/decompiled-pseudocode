/*
 * XREFs of sub_1402C1F50 @ 0x1402C1F50
 * Callers:
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402292C0 @ 0x1402292C0 (sub_1402292C0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022BAE0 @ 0x14022BAE0 (sub_14022BAE0.c)
 *     sub_140233738 @ 0x140233738 (sub_140233738.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_14024B3B0 @ 0x14024B3B0 (sub_14024B3B0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402829A8 @ 0x1402829A8 (sub_1402829A8.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033AC90 @ 0x14033AC90 (sub_14033AC90.c)
 *     sub_14033B640 @ 0x14033B640 (sub_14033B640.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 */

unsigned __int64 __fastcall sub_1402C1F50(char *a1, unsigned __int64 a2, char a3, __int64 a4)
{
  int v7; // r14d
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  signed __int64 v13; // r13
  signed __int8 v14; // cf
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  int v18; // edi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // ecx
  volatile __int64 v34; // rdx
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r8
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  __int64 v41; // r10
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  char v46; // r11
  __int64 v47; // rdx
  __int64 v48; // r11
  unsigned __int64 v49; // rbx
  char v50; // cl
  unsigned int v51; // ebx
  __int64 v52; // r10
  __int64 v53; // r9
  __int64 v54; // rax
  unsigned __int64 v55; // r8
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // r8
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  unsigned int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // rdx
  unsigned __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r10
  int v72; // [rsp+20h] [rbp-58h] BYREF
  __int64 v73; // [rsp+28h] [rbp-50h] BYREF
  signed __int64 v74; // [rsp+30h] [rbp-48h]
  signed __int64 v75; // [rsp+38h] [rbp-40h]
  unsigned __int64 v78; // [rsp+88h] [rbp+10h]
  unsigned __int64 v79; // [rsp+88h] [rbp+10h]
  unsigned __int64 v80; // [rsp+88h] [rbp+10h]

  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = *(_QWORD *)v8;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 8 * ((v8 >> 3) & 0x1FF));
      v12 = v9 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = *(_QWORD *)v8;
      v9 = v12;
      if ( (v11 & 0x42) != 0 )
        v9 = v12 | 0x42;
    }
  }
  v73 = v9;
  v75 = 48 * (((unsigned __int64)sub_140317A10(&v73) >> 12) & 0xFFFFFFFFFFLL);
  v13 = v75 - 0x220000000000LL;
  if ( (*(_QWORD *)(v75 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(v13 + 40) >= 0 )
    return 0LL;
  if ( (a1[184] & 7) != 0 )
  {
    if ( *(_WORD *)(v13 + 32) > 1u )
      return 0LL;
    v72 = 0;
    v14 = _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL);
    v74 = v13;
    if ( v14 )
    {
      do
      {
        do
          sub_1402F32E0(&v72);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
    }
    if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(v13 + 40) >= 0
      || (a1[184] & 7) != 0 && *(_WORD *)(v13 + 32) > 1u )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    goto LABEL_31;
  }
  v74 = 0LL;
  v16 = 0xFFFFF68000000000uLL;
  if ( *(__int64 *)(v13 + 40) >= 0
    && v8 <= 0xFFFFF6BFFFFFFF78uLL
    && v8 >= 0xFFFFF68000000000uLL
    && (v9 & 0x42) != 0
    && (*((_DWORD *)a1 - 135) & 0x8000) != 0 )
  {
    sub_1402358D4((__int64)(a1 - 1664), a2, 0LL);
LABEL_31:
    v16 = 0xFFFFF68000000000uLL;
  }
  v17 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
  v18 = 0;
  if ( *(__int64 *)(v13 + 40) < 0 )
  {
    v29 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
    {
      v16 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( *(_BYTE *)(v16 + 912) != 1 && (v29 & 1) != 0 && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v16 = *((_QWORD *)KeGetCurrentThread() + 23);
        v30 = *(_QWORD *)(v16 + 1928);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 8 * ((v8 >> 3) & 0x1FF));
          v32 = v29 | 0x20;
          v16 = (unsigned __int8)v31;
          LOBYTE(v16) = v31 & 0x20;
          if ( (v31 & 0x20) == 0 )
            v32 = *(_QWORD *)v8;
          v29 = v32;
          if ( (v31 & 0x42) != 0 )
            v29 = v32 | 0x42;
        }
      }
    }
    v33 = (v29 >> 60) & 7;
    if ( v33 )
    {
      if ( (*(_QWORD *)v8 & 0x10) != 0 )
      {
        v33 |= 8u;
      }
      else if ( (*(_QWORD *)v8 & 8) != 0 )
      {
        v33 |= 0x18u;
      }
      v28 = (__int64)a1;
      v73 = sub_1402CCC50(32 * (*(_QWORD *)&v33 | 0xFFFFFFFFF8000020uLL), v16);
    }
    else
    {
      v28 = (__int64)a1;
      v39 = sub_1402CCC50(((*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) << 16) | 0x400, *(_QWORD *)(v13 + 8));
      v73 = v39;
      v42 = v39;
      if ( (a1[184] & 7u) >= 2 && (v9 & 0xA00) == 0 && v9 < 0 )
      {
        v73 = v39 | 8;
        v42 = v39 | 8;
      }
      if ( (v41 & 0x10000000000LL) != 0 || v38 <= 0 )
      {
        if ( (a3 & 2) != 0 )
        {
          if ( *((_QWORD *)a1 - 50) )
          {
            v43 = sub_140234F14((__int64)(a1 - 1664), v40);
            if ( v43 )
            {
              v19 = a2;
              if ( *(_QWORD *)(*(_QWORD *)(v44 + 1680) + 344LL) > v43[12] )
                v73 = v45 | 8;
              goto LABEL_81;
            }
          }
        }
      }
      else
      {
        v73 = v42 | 0x800;
      }
    }
    v19 = a2;
    goto LABEL_81;
  }
  v19 = a2;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v18 = 1;
    sub_14031DE00(a1, v8, 0LL);
    if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)sub_14024B3B0(a2) )
    {
      sub_14020D8D0((__int64)a1, v8);
      if ( v74 )
        _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
  }
  if ( ((*(_QWORD *)(v13 + 40) >> 60) & 7) == 4 && a1 == sub_14026DFC0(2) )
  {
    v20 = a2 & 0xFFFFFFFFFFFFF000uLL;
    v78 = a2 & 0xFFFFFFFFFFFFF000uLL;
    if ( (dword_140D06880 & 0x4000000) != 0 )
    {
      v21 = sub_1402CC7C0(0xAAAAAAAAAAAAAAABuLL * (v75 >> 4), 0LL, 0x80000000LL);
      v22 = sub_140317A10(v21);
      sub_1402BEDD0(v21, 0x11u);
    }
    else
    {
      v22 = sub_140317A10(v20);
    }
    v23 = v22 | 2;
    v73 = v23;
    v24 = v23;
    v17 |= 4uLL;
    v7 = 1;
    if ( (unsigned int)sub_140317A80(v8) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v25 = v23;
        if ( !HIBYTE(word_140C51864) && (v23 & 1) != 0 )
          v25 = v23 | 0x8000000000000000uLL;
        *(_QWORD *)v8 = v25;
        sub_1402294F0(v8, v25);
        goto LABEL_55;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v23 & 1) != 0 )
        v24 = v23 | 0x8000000000000000uLL;
    }
    *(_QWORD *)v8 = v24;
LABEL_55:
    sub_1402CF280(a4, v78, 1LL, 0LL);
    sub_14032F1B0(a4);
    goto LABEL_152;
  }
  v26 = (32 * ((*(_DWORD *)(v13 + 16) >> 5) & 0x1F | 0x40LL)) | sub_140317A10(&v73) & 0xFFFFFFFFFF000LL;
  if ( qword_140C50780 )
  {
    if ( (qword_140C50780 & v26) != 0 )
      v26 |= 0x10uLL;
    else
      v26 |= qword_140C50780;
  }
  v27 = v18 == 0;
  v73 = v26;
  v28 = (__int64)a1;
  if ( !v27 )
  {
    sub_1402292C0((__int64)a1, (volatile __int64 *)v8, v26, 0);
    sub_1402CF280(a4, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
    goto LABEL_153;
  }
LABEL_81:
  v34 = *(_QWORD *)v8;
  v35 = 0xFFFFF6FB7DBED000uLL;
  v36 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)sub_140229550() )
    goto LABEL_113;
  v37 = ((unsigned int)dword_140D06880 >> 27) & 3;
  if ( v37 <= 1 )
  {
    if ( v37 )
    {
      if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL && (v34 & 0x80u) == 0LL )
        LOBYTE(v34) = 32;
      goto LABEL_105;
    }
LABEL_113:
    v47 = v73;
    if ( v8 >= v35 && v8 <= v36 )
    {
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) && (v47 & 1) != 0 )
          v47 |= v48;
        *(_QWORD *)v8 = v47;
        sub_1402294F0(v8, v47);
LABEL_124:
        v49 = v19 & 0xFFFFFFFFFFFFF000uLL;
        v79 = v49;
        if ( *(_DWORD *)a4 != 1 )
        {
          v50 = *(_BYTE *)(a4 + 4);
          if ( (v50 & 8) == 0 && v49 >= 0xFFFFF68000000000uLL && v49 <= 0xFFFFF6FFFFFFFFFFuLL )
            *(_BYTE *)(a4 + 4) = v50 | 8;
        }
        v51 = *(_DWORD *)(a4 + 12);
        if ( !v51 || (*(_BYTE *)(a4 + 4) & 4) != 0 )
        {
          v52 = v79;
        }
        else
        {
          v52 = v79;
          v53 = a4 + 8LL * (v51 - 1);
          v54 = *(_QWORD *)(v53 + 24);
          if ( (v54 & 0xC00) == 0 )
          {
            v55 = *(_QWORD *)(v53 + 24) & 0x3FFLL;
            if ( (v54 & 0xFFFFFFFFFFFFF000uLL) + ((v55 + 1) << 12) == v79 && v55 + 1 >= v55 && v55 + 1 <= 0x3FF )
            {
              ++*(_QWORD *)(a4 + 16);
              *(_QWORD *)(v53 + 24) = v54 ^ ((unsigned __int16)v54 ^ (unsigned __int16)(v54 + 1)) & 0x3FF;
              goto LABEL_153;
            }
          }
        }
        v56 = 1LL;
        if ( sub_140233738(a4, v52, 1LL, 0) )
        {
          v57 = a4 + 8LL * (v51 - 1);
          v58 = *(_QWORD *)(v57 + 24);
          ++*(_QWORD *)(a4 + 16);
          *(_QWORD *)(v57 + 24) = (v58 - 4096) ^ ((unsigned __int16)(v58 - 4096) ^ (unsigned __int16)(v58 - 4096 + 1)) & 0x3FF;
        }
        else
        {
          if ( v51 < *(_DWORD *)(a4 + 8) )
          {
            v59 = v79;
            while ( 1 )
            {
              v60 = 1024LL;
              if ( (unsigned __int64)(v56 - 1) <= 0x3FF )
                v60 = v56;
              v56 -= v60;
              v61 = v59 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v60 - 1) & 0x3FF;
              v59 += v60 << 12;
              v80 = v59;
              *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v61;
              v62 = *(_DWORD *)(a4 + 12);
              *(_QWORD *)(a4 + 16) += v60;
              if ( v62 == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
              {
                qsort((void *)(a4 + 24), v62, 8uLL, (int (__cdecl *)(const void *, const void *))sub_14022E340);
                sub_14022BAE0(a4);
                v63 = *(unsigned int *)(a4 + 12);
                if ( (_DWORD)v63 == *(_DWORD *)(a4 + 8) )
                {
                  v27 = v56 == 0;
                  v28 = (__int64)a1;
                  if ( !v27 )
                  {
                    *(_BYTE *)(a4 + 5) = 1;
                    *(_QWORD *)(a4 + 16) = v63;
                  }
                  goto LABEL_153;
                }
                v59 = v80;
              }
              if ( !v56 )
                goto LABEL_152;
            }
          }
          *(_BYTE *)(a4 + 5) = 1;
        }
LABEL_152:
        v28 = (__int64)a1;
        goto LABEL_153;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v47 & 1) != 0 )
        v47 |= v48;
    }
    *(_QWORD *)v8 = v47;
    goto LABEL_124;
  }
  if ( (dword_140D06880 & 0x4000000) != 0 )
    _mm_lfence();
LABEL_105:
  if ( (v34 & 0x20) != 0 )
    goto LABEL_113;
  if ( (dword_140D06880 & 0x4000000) != 0 )
    _mm_lfence();
  v46 = _InterlockedExchange64((volatile __int64 *)v8, v73);
  if ( v8 >= v35 && v8 <= v36 )
    sub_1402294F0(v8, v73);
  if ( (v46 & 0x20) != 0 )
    goto LABEL_124;
LABEL_153:
  if ( v74 )
    _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 )
    return v17;
  v64 = *(_QWORD *)(v13 + 40);
  if ( v64 < 0 || (((unsigned __int64)v64 >> 60) & 7) == 4 )
    return v17;
  v65 = *(_QWORD *)(v13 + 16);
  if ( (unsigned __int64)(v13 + 16) >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)(v13 + 16) <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)sub_140229550() )
  {
    if ( (v65 & 1) == 0 )
      goto LABEL_170;
    if ( (v65 & 0x20) == 0 || (v65 & 0x42) == 0 )
    {
      v67 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v67 )
      {
        v68 = *(_QWORD *)(v67 + 8 * ((v66 >> 3) & 0x1FF));
        v69 = v65 | 0x20;
        if ( (v68 & 0x20) == 0 )
          v69 = v65;
        v65 = v69;
        if ( (v68 & 0x42) != 0 )
          v65 = v69 | 0x42;
      }
    }
  }
  if ( (v65 & 1) == 0 )
  {
LABEL_170:
    if ( (!v65 || !qword_140C50780 || (v65 & qword_140C50780) != 0)
      && *(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v64 >> 43) & 0x3FF)) + 1060LL)
      && (v65 & 2) == 0
      && !sub_1402829A8(v28)
      && (!(unsigned int)sub_14033B640(v70) || (*(_BYTE *)(v13 + 34) & 0x10) != 0 || (*(_BYTE *)v8 & 0x42) != 0)
      && v8 <= 0xFFFFF6BFFFFFFF78uLL
      && v8 >= 0xFFFFF68000000000uLL )
    {
      sub_14033AC90(v71, v8, v28);
    }
  }
  return v17;
}
