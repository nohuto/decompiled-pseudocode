/*
 * XREFs of sub_14028B8B0 @ 0x14028B8B0
 * Callers:
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14028C14C @ 0x14028C14C (sub_14028C14C.c)
 *     sub_14028C82C @ 0x14028C82C (sub_14028C82C.c)
 *     sub_14028C9B4 @ 0x14028C9B4 (sub_14028C9B4.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char *__fastcall sub_14028B8B0(_QWORD *a1, char *a2, int a3)
{
  __int64 v3; // rbx
  char *v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r12
  int v18; // ecx
  unsigned __int64 v19; // r15
  __int64 *v20; // rdx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  char *result; // rax
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  ULONG_PTR v31; // r8
  __int64 v32; // rax
  int v33; // ecx
  _QWORD *v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  char *v41; // rax
  _QWORD *v42; // rsi
  unsigned __int64 *v43; // rdi
  int v44; // ebx
  __int64 v45; // rcx
  unsigned __int64 *i; // r13
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdx
  int v51; // eax
  unsigned __int64 v52; // rax
  __int64 v53; // r13
  unsigned __int64 *v54; // rbx
  int v55; // eax
  __int64 v56; // r15
  unsigned __int64 v57; // r13
  __int64 v58; // rax
  ULONG_PTR v59; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v61; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v63; // r9
  int v64; // eax
  bool v65; // zf
  __int64 v66; // rsi
  __int64 v67; // r14
  unsigned __int64 v68; // rsi
  __int64 v69; // rax
  ULONG_PTR v70; // rbx
  unsigned __int64 v71; // r13
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r10
  __int64 v74; // r9
  int v75; // eax
  __int64 v76; // [rsp+20h] [rbp-B8h]
  char *v77; // [rsp+20h] [rbp-B8h]
  ULONG_PTR v78; // [rsp+28h] [rbp-B0h]
  ULONG_PTR v79; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v80; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD *v81; // [rsp+38h] [rbp-A0h]
  unsigned __int64 *v82; // [rsp+40h] [rbp-98h]
  __int64 v83; // [rsp+48h] [rbp-90h]
  __int64 v84; // [rsp+50h] [rbp-88h]
  int v85; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v86; // [rsp+60h] [rbp-78h]
  __int64 v87; // [rsp+68h] [rbp-70h]
  char *v88; // [rsp+70h] [rbp-68h]
  unsigned __int64 v89; // [rsp+78h] [rbp-60h]
  unsigned __int64 *v90; // [rsp+80h] [rbp-58h]
  __int64 v93; // [rsp+E8h] [rbp+10h]
  int v94; // [rsp+E8h] [rbp+10h]
  unsigned __int8 v95; // [rsp+E8h] [rbp+10h]
  unsigned __int8 v96; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v97; // [rsp+F8h] [rbp+20h]

  v3 = a1[2];
  v5 = a2;
  v96 = 0;
  v6 = a1[1];
  v7 = a1[5];
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  v90 = (unsigned __int64 *)(a2 + 48);
  v81 = a2 + 48;
  v9 = v6 | 0x8000000000000000uLL;
  v86 = v8;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v89 = v9;
  v80 = v9;
  v83 = *(_QWORD *)(qword_140C51F48 + 8 * ((v7 >> 43) & 0x3FF));
  if ( qword_140C50780 && (v3 & 0x10) == 0 )
    v3 &= ~qword_140C50780;
  v11 = v3 >> 16;
  if ( v10 < *(_QWORD *)(v11 + 8) )
    v10 = *(_QWORD *)(v11 + 8);
  v12 = v10;
  if ( v10 < v9 - 120 )
    v12 = v9 - 120;
  v87 = v7 & 0xFFFFFFFFFFLL;
  v76 = sub_1402CC7C0(v7 & 0xFFFFFFFFFFLL, &v96, 0x80000000LL);
  LODWORD(v88) = v9;
  v13 = v76;
  v14 = v76 + (v9 & 0xFFF);
  v15 = v9;
  if ( a3 && v9 > v10 )
  {
    do
    {
      v37 = *(_QWORD *)(v14 - 8);
      v14 -= 8LL;
      if ( (v37 & 0xC01) != 0x800 )
        break;
      v38 = ((v37 & (unsigned __int64)~qword_140C50780) >> 12) & 0xFFFFFFFFFFLL;
      if ( v38 > qword_140C50840 )
        break;
      v39 = 6 * v38;
      if ( !_bittest64((const signed __int64 *)(48 * v38 - 0x21FFFFFFFFD8LL), 0x36u) )
        break;
      v40 = 48 * v38 - 0x220000000000LL;
      if ( (*(_BYTE *)(8 * v39 - 0x220000000000LL + 34) & 0x10) == 0
        || *(_WORD *)(v40 + 32)
        || v83 != *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v40 + 40) >> 43) & 0x3FFLL)) )
      {
        break;
      }
      v9 -= 8LL;
      if ( v9 >= v12 )
        v15 = v9;
    }
    while ( v9 > v10 );
    v5 = a2;
    v8 = v86;
    v13 = v76;
    v89 = v9;
  }
  v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v93 = ((unsigned __int16)v14 ^ (unsigned __int16)v15) & 0xFFF ^ v14;
  if ( v16 > *(_QWORD *)(v11 + 8) + 8 * (unsigned __int64)*(unsigned int *)(v11 + 44) )
    v16 = *(_QWORD *)(v11 + 8) + 8LL * *(unsigned int *)(v11 + 44);
  v82 = (unsigned __int64 *)v16;
  v17 = v16;
  if ( v16 > v15 + 128 )
    v17 = v15 + 128;
  if ( !a3 )
  {
    v17 = v15 + 8;
    v16 = v15 + 8;
    v82 = (unsigned __int64 *)(v15 + 8);
  }
  v84 = v15;
  v18 = 1;
  LODWORD(v97) = 1;
  v19 = v15;
  if ( v15 < v16 )
  {
    v20 = (__int64 *)(((unsigned __int16)v14 ^ (unsigned __int16)v15) & 0xFFF ^ v14);
    v21 = v80;
    while ( v19 == v21 )
    {
      v22 = v81;
      *v81 = v8;
      v81 = v22 + 1;
      v21 = v80;
LABEL_20:
      v18 = v97;
      ++v20;
      v19 += 8LL;
      v93 = (__int64)v20;
      v84 = v19;
      if ( v19 >= v16 )
        goto LABEL_21;
    }
    if ( v18 != 3 || (v35 = (unsigned __int64)v81, (__int64)(((char *)v81 - v5 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128) )
    {
      v27 = *v20;
      if ( (*v20 & 0xC01) == 0x800 )
      {
        v28 = ((v27 & (unsigned __int64)~qword_140C50780) >> 12) & 0xFFFFFFFFFFLL;
        if ( v28 > qword_140C50840
          || (v29 = 48 * v28, (*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
        {
          v21 = v80;
          --v20;
          v19 -= 8LL;
          goto LABEL_20;
        }
        v85 = 0;
        v78 = v29 - 0x220000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 - 0x220000000000LL + 24), 0x3FuLL) )
        {
          v53 = v29 - 0x220000000000LL;
          do
          {
            do
              sub_1402F32E0(&v85);
            while ( *(__int64 *)(v53 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v53 + 24), 0x3FuLL) );
          v8 = v86;
        }
        if ( v27 != sub_140317A10(v93) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v13 = v76;
          v20 = (__int64 *)(v93 - 8);
          v21 = v80;
          v19 -= 8LL;
          goto LABEL_20;
        }
        v31 = v78;
        if ( (*(_BYTE *)(v78 + 34) & 0x10) != 0
          && !*(_WORD *)(v78 + 32)
          && v83 == *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v78 + 40) >> 43) & 0x3FFLL)) )
        {
          if ( v19 >= v17 )
          {
            v13 = v76;
LABEL_40:
            _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v21 = v80;
LABEL_41:
            v20 = (__int64 *)v93;
            goto LABEL_20;
          }
          if ( v76 )
          {
            LOBYTE(v30) = 2;
            sub_1402BEDD0(v76, v30, 0x80000000LL);
            LODWORD(v97) = sub_14028C14C(v78);
            v32 = sub_1402CC7C0(v87, 0LL, 0x80000000LL);
            v33 = v97;
            v13 = v32;
            v76 = v32;
            v93 = v32 + (v93 & 0xFFF);
          }
          else
          {
            v55 = sub_14028C14C(v78);
            v13 = 0LL;
            v33 = v55;
            LODWORD(v97) = v55;
          }
          if ( v33 )
          {
            v31 = v78;
            v34 = v81;
            *v81 = ((v27 & (unsigned __int64)~qword_140C50780) >> 12) & 0xFFFFFFFFFFLL;
            v81 = v34 + 1;
            goto LABEL_40;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v13 = v76;
        }
      }
      v35 = (unsigned __int64)v81;
    }
    if ( v13 )
      sub_1402BEDD0(v13, v96, 0x80000000LL);
    v36 = v80;
    if ( v19 >= v80 )
      goto LABEL_23;
    v56 = (__int64)(v35 - (_QWORD)v5 - 48) >> 3;
    v84 = v56;
    if ( v56 )
    {
      if ( v35 > (unsigned __int64)(v5 + 48) )
      {
        v57 = (unsigned __int64)v81;
        do
        {
          v58 = *(_QWORD *)(v57 - 8);
          v57 -= 8LL;
          v59 = 48 * v58 - 0x220000000000LL;
          v95 = sub_1402F2700(v59);
          sub_14028C82C(v59);
          _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
          {
            v61 = v95;
            if ( v95 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v63 = *((_QWORD *)CurrentPrcb + 4375);
              v64 = ~(unsigned __int16)(-1LL << (v95 + 1));
              v65 = (v64 & *(_DWORD *)(v63 + 20)) == 0;
              *(_DWORD *)(v63 + 20) &= v64;
              if ( v65 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          else
          {
            v61 = v95;
          }
          __writecr8(v61);
        }
        while ( v57 > (unsigned __int64)(v5 + 48) );
        v16 = (unsigned __int64)v82;
        v9 = v89;
        v56 = v84;
        v81 = (_QWORD *)v57;
        v8 = v86;
      }
      sub_14028C9B4(v83, v56, 1LL);
      v36 = v80;
    }
    if ( v17 == v15 + 8 )
    {
      v16 = v36 + 8;
      v82 = (unsigned __int64 *)(v36 + 8);
      v17 = v36 + 8;
    }
    else if ( v16 > v36 + 128 )
    {
      v17 = v36 + 128;
    }
    v15 = v36;
    v13 = sub_1402CC7C0(v87, &v96, 0x80000000LL);
    v76 = v13;
    v21 = v80;
    v93 = v13 + ((unsigned __int16)v88 & 0xFFF) - 8LL;
    v19 = v80 - 8;
    goto LABEL_41;
  }
LABEL_21:
  if ( v13 )
    sub_1402BEDD0(v13, v96, 0x80000000LL);
LABEL_23:
  v23 = v17;
  if ( v19 <= v17 )
    v23 = v19;
  v24 = (__int64)(v23 - v15) >> 3;
  if ( (_DWORD)v97 != 3 && (v19 > v17 || v9 < v15) )
  {
    v41 = (char *)sub_1402828F0(64, 8 * ((__int64)(v19 - v9) >> 3) + 48, 0x65576D4Du);
    v77 = v41;
    if ( v41 )
    {
      v42 = a1;
      v82 = v90;
      v43 = (unsigned __int64 *)(v41 + 48);
      v88 = v41 + 48;
      v44 = 1;
      v94 = 1;
      v97 = sub_1402CC7C0(a1[5] & 0xFFFFFFFFFFLL, &v96, 0x80000000LL);
      v45 = v97;
      for ( i = (unsigned __int64 *)(v97 + (v9 & 0xFFF)); v9 < v19; v44 = v94 )
      {
        if ( v9 < v17 && v9 >= v15 )
        {
          v52 = *v82++;
          *v43 = v52;
          goto LABEL_73;
        }
        if ( v44 != 3
          || (v54 = (unsigned __int64 *)v77, (__int64)(((char *)v43 - v77 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128) )
        {
          v47 = *i;
          if ( (*i & 0xC01) == 0x800 )
          {
            v48 = ((v47 & ~qword_140C50780) >> 12) & 0xFFFFFFFFFFLL;
            if ( v48 > qword_140C50840 )
              continue;
            v49 = 48 * v48;
            if ( !_bittest64((const signed __int64 *)(48 * v48 - 0x21FFFFFFFFD8LL), 0x36u) )
              goto LABEL_127;
            LODWORD(v80) = 0;
            v79 = v49 - 0x220000000000LL;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v49 - 0x220000000000LL + 24), 0x3FuLL) )
            {
              v66 = v49 - 0x220000000000LL;
              do
              {
                do
                  sub_1402F32E0(&v80);
                while ( *(__int64 *)(v66 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) );
              v42 = a1;
            }
            if ( v47 != sub_140317A10(i) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_127:
              v45 = v97;
              continue;
            }
            if ( (*(_BYTE *)(v79 + 34) & 0x10) != 0
              && !*(_WORD *)(v79 + 32)
              && v83 == *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v79 + 40) >> 43) & 0x3FFLL)) )
            {
              if ( v97 )
              {
                LOBYTE(v50) = 2;
                sub_1402BEDD0(v97, v50, 0x80000000LL);
                v94 = sub_14028C14C(v79);
                v97 = sub_1402CC7C0(v87, 0LL, 0x80000000LL);
                i = (unsigned __int64 *)(v97 + ((unsigned __int16)i & 0xFFF));
                v45 = v97;
                v51 = v94;
              }
              else
              {
                v51 = sub_14028C14C(v79);
                v45 = v97;
                v94 = v51;
              }
              if ( v51 )
              {
                *v43 = (v47 >> 12) & ((unsigned __int64)~qword_140C50780 >> 12) & 0xFFFFFFFFFFLL;
                _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_73:
                ++i;
                v9 += 8LL;
                ++v43;
                continue;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v45 = v97;
            }
          }
          v54 = (unsigned __int64 *)v77;
        }
        if ( v45 )
          sub_1402BEDD0(v45, v96, 0x80000000LL);
        if ( v9 >= v15 )
          goto LABEL_77;
        v67 = ((char *)v43 - (char *)v54 - 48) >> 3;
        v97 = v67;
        if ( v67 )
        {
          if ( v43 > v54 + 6 )
          {
            v68 = (unsigned __int64)v88;
            do
            {
              v69 = *--v43;
              v70 = 48 * v69 - 0x220000000000LL;
              v71 = (unsigned __int8)sub_1402F2700(v70);
              sub_14028C82C(v70);
              _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v72 = KeGetCurrentIrql();
                  if ( v72 <= 0xFu && (unsigned __int8)v71 <= 0xFu && v72 >= 2u )
                  {
                    v73 = KeGetCurrentPrcb();
                    v74 = *((_QWORD *)v73 + 4375);
                    v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v71 + 1));
                    v65 = (v75 & *(_DWORD *)(v74 + 20)) == 0;
                    *(_DWORD *)(v74 + 20) &= v75;
                    if ( v65 )
                      sub_140418E4C(v73);
                  }
                }
              }
              __writecr8(v71);
            }
            while ( (unsigned __int64)v43 > v68 );
            v19 = v84;
            v42 = a1;
            v67 = v97;
          }
          sub_14028C9B4(v83, v67, 1LL);
        }
        v82 = v90;
        v9 = v15;
        v97 = sub_1402CC7C0(v42[5] & 0xFFFFFFFFFFLL, &v96, 0x80000000LL);
        v45 = v97;
        i = (unsigned __int64 *)(v97 + (v15 & 0xFFF));
      }
      if ( v45 )
        sub_1402BEDD0(v45, v96, 0x80000000LL);
LABEL_77:
      v5 = v77;
      v24 = ((char *)v43 - v77 - 48) >> 3;
    }
  }
  v25 = v24 << 12;
  *(_QWORD *)v5 = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_WORD *)v5 + 4) = 8 * ((v25 >> 12) + 6);
  *((_WORD *)v5 + 5) = 2;
  result = v5;
  *((_QWORD *)v5 + 5) = (unsigned int)v25;
  return result;
}
