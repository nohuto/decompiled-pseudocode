/*
 * XREFs of sub_1402C8FD0 @ 0x1402C8FD0
 * Callers:
 *     sub_140233B60 @ 0x140233B60 (sub_140233B60.c)
 *     sub_14032F0E0 @ 0x14032F0E0 (sub_14032F0E0.c)
 * Callees:
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 *     sub_140239CA8 @ 0x140239CA8 (sub_140239CA8.c)
 *     sub_14025C03C @ 0x14025C03C (sub_14025C03C.c)
 *     sub_14025C930 @ 0x14025C930 (sub_14025C930.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_140276D2C @ 0x140276D2C (sub_140276D2C.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C9E70 @ 0x1402C9E70 (sub_1402C9E70.c)
 *     sub_1402CBAF0 @ 0x1402CBAF0 (sub_1402CBAF0.c)
 *     sub_1402CC0F0 @ 0x1402CC0F0 (sub_1402CC0F0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033FD38 @ 0x14033FD38 (sub_14033FD38.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140593B18 @ 0x140593B18 (sub_140593B18.c)
 *     sub_1405AD6C8 @ 0x1405AD6C8 (sub_1405AD6C8.c)
 *     sub_1405AE8FC @ 0x1405AE8FC (sub_1405AE8FC.c)
 *     sub_1405BA498 @ 0x1405BA498 (sub_1405BA498.c)
 */

__int64 __fastcall sub_1402C8FD0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rdx
  ULONG_PTR v5; // rsi
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned int v9; // r14d
  __int64 v10; // rcx
  ULONG_PTR v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // r15d
  unsigned __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  ULONG_PTR v25; // r15
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  ULONG_PTR v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // rdx
  char v34; // cl
  __int64 v35; // r15
  __int64 v36; // r8
  _BOOL8 v37; // rdx
  int v38; // r15d
  BOOL v39; // r12d
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // r8
  _QWORD *v47; // rcx
  __int64 v48; // rbx
  BOOL v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r9
  __int64 result; // rax
  ULONG_PTR v56; // r9
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  char v61; // al
  unsigned __int64 v62; // r8
  int v63; // eax
  unsigned int v64; // edx
  __int64 v65; // r8
  int v66; // eax
  char v67; // al
  char v68; // al
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  ULONG_PTR v81; // rbx
  unsigned int v82; // [rsp+30h] [rbp-D0h]
  BOOL v83; // [rsp+34h] [rbp-CCh] BYREF
  int v84; // [rsp+38h] [rbp-C8h]
  __int64 v85; // [rsp+40h] [rbp-C0h]
  _QWORD *v86; // [rsp+48h] [rbp-B8h]
  char v87; // [rsp+50h] [rbp-B0h]
  int v88; // [rsp+54h] [rbp-ACh]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  int v91; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h]
  __int64 v93; // [rsp+78h] [rbp-88h] BYREF
  __int64 v94; // [rsp+80h] [rbp-80h]
  int v95; // [rsp+88h] [rbp-78h] BYREF
  int v96; // [rsp+8Ch] [rbp-74h] BYREF
  int v97; // [rsp+90h] [rbp-70h] BYREF
  __int64 v98; // [rsp+98h] [rbp-68h]
  ULONG_PTR v99; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v100; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v101; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v102; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v103; // [rsp+C0h] [rbp-40h]
  __int64 v104; // [rsp+C8h] [rbp-38h]
  __int64 v105; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v107; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v108; // [rsp+F0h] [rbp-10h]
  _QWORD v109[18]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v110[2]; // [rsp+190h] [rbp+90h] BYREF

  v85 = a1;
  v108 = 0LL;
  v107 = 0LL;
  memset(v109, 0, sizeof(v109));
  v3 = *(_QWORD **)(a2 + 16);
  v4 = *(unsigned int *)(a2 + 104);
  v5 = *(_QWORD *)a2;
  v87 = *(_BYTE *)(a2 + 108);
  v99 = *(_QWORD *)(a2 + 8);
  v101 = *(_QWORD *)(a2 + 88);
  v86 = v3;
  v82 = v4;
  v6 = 0LL;
  v104 = 0LL;
  v7 = (__int64)(v5 << 25) >> 16;
  v8 = 1LL;
  v83 = v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL;
  if ( (*(_BYTE *)(v85 + 184) & 7) != 0 )
  {
    v94 = 0LL;
  }
  else
  {
    v94 = v85 - 1664;
    v6 = v104;
  }
  v9 = 0;
  v10 = *(unsigned __int16 *)(v85 + 174);
  v11 = 0LL;
  v88 = 0;
  v98 = *(_QWORD *)(qword_140C51F48 + 8 * v10);
  v84 = 0;
  v92 = 0LL;
  v100 = 0LL;
  if ( v5 <= v99 )
  {
    v12 = v85;
    v8 = 0xFFFFF6FB7DBED000uLL;
    while ( 1 )
    {
      v13 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v70 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v70 )
        {
          v71 = *(_QWORD *)(v70 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v71 & 0x20) != 0 )
            v13 |= 0x20uLL;
          if ( (v71 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
        v4 = v82;
      }
      if ( v13 )
      {
        v14 = v4 & 0x80;
        v91 = v14;
        if ( (v4 & 0x80) != 0 && (v5 < 0xFFFFF6FB7DBED000uLL || v5 > 0xFFFFF6FB7DBEDFFFuLL) )
        {
          v84 = ++v9;
          if ( !v11 )
          {
            v57 = ((((__int64)((v5 << 25) - v6) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
            v58 = *(_QWORD *)v57;
            if ( v57 >= 0xFFFFF6FB7DBED000uLL
              && v57 <= 0xFFFFF6FB7DBED7F8uLL
              && (dword_140D06880 & 0xC00000) != 0
              && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
              && (v58 & 1) != 0
              && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
            {
              v72 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              if ( v72 )
              {
                v73 = *(_QWORD *)(v72 + 8 * ((v57 >> 3) & 0x1FF));
                if ( (v73 & 0x20) != 0 )
                  v58 |= 0x20uLL;
                if ( (v73 & 0x42) != 0 )
                  v58 |= 0x42uLL;
              }
            }
            v105 = v58;
            v100 = 48 * (((unsigned __int64)sub_140317A10(&v105) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          }
        }
        if ( (v13 & 0x400) != 0 )
        {
          v102 = 0LL;
          BugCheckParameter2 = 0LL;
          BugCheckParameter3 = v13 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          v15 = 0LL;
          v103 = 0LL;
          v16 = 0LL;
          v18 = ((unsigned __int64)sub_140317A10(&BugCheckParameter3) >> 12) & 0xFFFFFFFFFFLL;
          if ( v18 > qword_140C50840 )
            goto LABEL_188;
          v20 = 48 * v18;
          if ( !_bittest64((const signed __int64 *)(48 * v18 - 0x21FFFFFFFFD8LL), 0x36u) )
            goto LABEL_188;
          v21 = v20 - 0x220000000000LL;
          if ( (v82 & 0x60) != 0 && !v83 )
          {
            sub_1402C9E70(v109, v17, v6, v19);
            if ( !(unsigned int)sub_14025C930(v20 - 0x220000000000LL) )
              sub_140593B18(v18, 0LL);
            if ( (v82 & 0x40) != 0 )
              sub_14025C03C(v20 - 0x220000000000LL);
LABEL_187:
            v29 = 48 * sub_14033AC10(v5) - 0x220000000000LL;
            v39 = 0;
            v38 = 4;
LABEL_70:
            if ( v29 )
            {
              v97 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
              {
                do
                  sub_1402F32E0(&v97);
                while ( *(__int64 *)(v29 + 24) < 0 );
              }
              if ( (*(_BYTE *)(v29 + 34) & 7) != 6 )
                sub_1405AD6C8(v29, v37, v40, v32);
              v51 = (*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
              *(_QWORD *)(v29 + 24) ^= (*(_QWORD *)(v29 + 24) ^ v51) & 0x3FFFFFFFFFFFFFFFLL;
              if ( !v51 )
                sub_1402BF640(v29, 0LL);
              _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            if ( v16 )
              sub_1402E20D0(v92, v16, 1LL);
            if ( v102 )
            {
              v66 = sub_1402399A8(v94 + 1664, v102);
            }
            else
            {
              if ( !BugCheckParameter2 )
                goto LABEL_80;
              v66 = sub_1405BA498(BugCheckParameter2, v103);
            }
            v38 = v66;
LABEL_80:
            if ( !v39 )
            {
              if ( v38 == 3 )
              {
                if ( (*(_BYTE *)(v85 + 184) & 7) == 0 || v92 == v98 )
                  ++v86[1];
              }
              else if ( v38 == 5 )
              {
                ++v86[3];
              }
            }
            if ( (*(_BYTE *)(v85 + 184) & 7) != 0 )
              ++*v86;
            if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBEDFFFuLL && (*(_BYTE *)(v85 + 184) & 7) != 0 )
            {
              sub_1405AE8FC(v5, 0LL);
              goto LABEL_89;
            }
            if ( !(unsigned int)sub_140317A80(v5) || !(unsigned int)sub_140229550() )
            {
              *(_QWORD *)v5 = 0LL;
              goto LABEL_89;
            }
LABEL_171:
            *(_QWORD *)v5 = 0LL;
            sub_1402294F0(v5, 0LL);
            goto LABEL_89;
          }
          if ( v20 == 0x220000000000LL )
          {
LABEL_188:
            sub_1402C9E70(v109, v17, v6, v19);
            sub_140215AA8(1, v18, 1uLL);
            goto LABEL_187;
          }
          if ( (*(_BYTE *)(v85 + 184) & 7) == 0
            && !v83
            && (v18 & 0xF) == 0
            && ((__int64)(v99 - v5) >> 3) + 1 >= 16
            && (unsigned int)sub_1402CC0F0(v5) )
          {
            v9 = v84;
            if ( v14 )
            {
              v9 = v84 + 15;
              v84 += 15;
            }
            v5 += 120LL;
            goto LABEL_90;
          }
          v22 = *(_QWORD *)(v21 + 8);
          v23 = *(_QWORD *)(v21 + 40);
          v24 = v22 | 0x8000000000000000uLL;
          if ( v23 < 0 )
          {
            if ( v22 >= 0 && (v23 & 0x10000000000LL) == 0 && v22 )
            {
              v102 = *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL;
              v15 = v22 | 0x8000000000000000uLL;
              v86[1] += sub_1402C9E70(v109, v22, v6, v19);
              goto LABEL_29;
            }
            if ( v5 <= 0xFFFFF6BFFFFFFF78uLL && v5 >= 0xFFFFF68000000000uLL && *(_QWORD *)(v94 + 1264) )
            {
              v103 = *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL;
              BugCheckParameter2 = (ULONG_PTR)sub_140234F14(v94, v103);
              v25 = BugCheckParameter2;
              if ( BugCheckParameter2 )
                v86[1] += sub_1402C9E70(v109, v74, v75, v76);
            }
            else
            {
LABEL_29:
              v25 = 0LL;
            }
            v26 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v27 = *(_QWORD *)v26;
            if ( v26 >= 0xFFFFF6FB7DBED000uLL
              && v26 <= 0xFFFFF6FB7DBED7F8uLL
              && (dword_140D06880 & 0xC00000) != 0
              && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
              && (v27 & 1) != 0
              && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
            {
              v77 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              if ( v77 )
              {
                v78 = *(_QWORD *)(v77 + 8 * ((v26 >> 3) & 0x1FF));
                if ( (v78 & 0x20) != 0 )
                  v27 |= 0x20uLL;
                if ( (v78 & 0x42) != 0 )
                  v27 |= 0x42uLL;
              }
            }
            v106 = v27;
            v29 = 48 * (((unsigned __int64)sub_140317A10(&v106) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( !LOBYTE(v109[0]) )
              goto LABEL_32;
            if ( v29 != v109[1]
              || *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)) != v98
              || _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
            {
              v86[1] += sub_1402C9E70(v109, v28, v30, v31);
            }
            v33 = LOBYTE(v109[0]);
            if ( LOBYTE(v109[0]) )
            {
              v32 = 0LL;
            }
            else
            {
LABEL_32:
              v32 = 0LL;
              v109[1] = v29;
              v96 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
              {
                do
                {
                  do
                    sub_1402F32E0(&v96);
                  while ( *(__int64 *)(v21 + 24) < 0 );
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
                v33 = LOBYTE(v109[0]);
                v32 = 0LL;
              }
              else
              {
                v33 = LOBYTE(v109[0]);
              }
            }
            if ( (*(_BYTE *)(v85 + 184) & 7) == 0 )
            {
              v34 = *(_BYTE *)(v21 + 34);
              if ( (v34 & 7) == 6
                && (*(_DWORD *)(v21 + 16) & 0x400LL) == 0
                && ((BugCheckParameter3 & 0x42) != 0 || (v34 & 0x10) != 0)
                && !v15
                && !v25 )
              {
                v109[(unsigned __int8)v33 + 2] = BugCheckParameter3;
                if ( !LOBYTE(v109[0]) )
                  v92 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL));
                if ( (unsigned int)sub_140317A80(v5) && (unsigned int)sub_140229550() )
                {
                  *(_QWORD *)v5 = 0LL;
                  sub_1402294F0(v5, 0LL);
                }
                else
                {
                  *(_QWORD *)v5 = 0LL;
                }
                if ( ++LOBYTE(v109[0]) != 16 )
                  goto LABEL_89;
                v3 = v86;
                v9 = v84;
                v86[1] += sub_1402C9E70(v109, v53, v6, v54);
                goto LABEL_91;
              }
            }
            if ( (_BYTE)v33 )
            {
              BYTE1(v109[0]) = 1;
              v79 = sub_1402C9E70(v109, v33, v30, 0LL);
              BYTE1(v109[0]) = 0;
              v86[1] += v79;
              v32 = 0LL;
            }
            v35 = v85;
LABEL_40:
            v36 = *(unsigned __int8 *)(v21 + 34);
            if ( (v36 & 7) != 6 )
              sub_1405AD6C8(v20 - 0x220000000000LL, v33, v36, 0LL);
            v92 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL));
            if ( (BugCheckParameter3 & 0x42) != 0 )
            {
              v16 = 0LL;
              if ( (v36 & 0x10) == 0 )
              {
                if ( (!_bittest64((const signed __int64 *)(v21 + 16), 0xAu) & (unsigned __int8)~((unsigned __int8)v36 >> 3)) != 0 )
                {
                  v52 = sub_140232694((unsigned __int64 *)(v21 + 16), 1, 0);
                  LOBYTE(v36) = *(_BYTE *)(v21 + 34);
                  v16 = v52;
                  v32 = 0LL;
                }
                *(_BYTE *)(v21 + 34) = v36 | 0x10;
              }
            }
            if ( (*(_BYTE *)(v35 + 184) & 7) != 0 && *(__int64 *)(v21 + 40) < 0 )
            {
              v80 = *(_QWORD *)(v21 + 16);
              if ( (v80 & 0x400) == 0 || (BugCheckParameter3 & 0x200) != 0 )
                goto LABEL_248;
              if ( qword_140C50780 && (v80 & 0x10) == 0 )
                v80 &= ~qword_140C50780;
              if ( (*(_DWORD *)(*(_QWORD *)(v80 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_248:
                ++v86[4];
            }
            v37 = v83;
            v38 = 4;
            v39 = 0;
            if ( v83 && v91 )
              v39 = (*(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
            v40 = 0x3FFFFFFFFFFFFFFFLL;
            v41 = *(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
            *(_QWORD *)(v21 + 24) = v41;
            if ( (v41 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
            {
              if ( v37 )
              {
                v38 = 2;
                if ( (v82 & 0x100) == 0 )
                  *(_QWORD *)v21 &= ~1uLL;
              }
            }
            else
            {
              if ( *(__int64 *)(v21 + 40) < 0 )
              {
                sub_1402CBAF0(v20 - 0x220000000000LL, 1LL);
                v41 = *(_QWORD *)(v21 + 24);
                v32 = 0LL;
                v37 = v83;
              }
              --*(_WORD *)(v21 + 32);
              v42 = (v41 >> 62) & 1;
              if ( *(_WORD *)(v21 + 32) )
              {
                v67 = *(_BYTE *)(v21 + 34);
                if ( (_DWORD)v42 )
                {
                  v68 = v67 | 7;
                }
                else if ( (v67 & 0x10) != 0 )
                {
                  v68 = v67 & 0xF8 | 3;
                }
                else
                {
                  v68 = v67 & 0xF8 | 2;
                }
                *(_BYTE *)(v21 + 34) = v68;
                if ( (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
                {
                  v69 = sub_1402E76C0(v21 + 16);
                  v37 = v83;
                  if ( v69 )
                    *(_BYTE *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)) + 699LL) = 1;
                }
                v38 = 3;
                if ( v37 && v91 )
                  v39 = 1;
                if ( *(__int64 *)(v21 + 40) < 0 )
                  v38 = 4;
              }
              else if ( (_DWORD)v42 )
              {
                v43 = *(_BYTE *)(v21 + 35);
                if ( (v43 & 0x10) != 0 )
                  *(_BYTE *)(v21 + 35) = v43 & 0xEF;
                v44 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL));
                v93 = *(_QWORD *)(v21 + 16);
                if ( (v93 & 0x400) == 0 )
                {
                  if ( (v93 & 4) != 0 || (v93 & 2) != 0 )
                  {
                    v50 = sub_140317A10(&v93);
                    v93 = v50;
                    if ( v50 )
                      sub_1402E20D0(v44, v50, 0LL);
                  }
                  else
                  {
                    v93 = 0LL;
                  }
                }
                sub_1402C6EB0(0xAAAAAAAAAAAAAAABuLL * (v20 >> 4), 2);
                v38 = 4;
              }
              else
              {
                v59 = *(_QWORD *)(v21 + 16);
                v60 = -9LL;
                if ( (v59 & 0x400) != 0 )
                  v60 = -2049LL;
                *(_QWORD *)(v21 + 16) = v59 & v60;
                v61 = *(_BYTE *)(v21 + 34);
                if ( (v61 & 0x10) != 0 )
                {
                  v64 = 8;
                  if ( v101 == 1 )
                    v64 = 136;
                  sub_1402BF9C0(v20 - 0x220000000000LL, v64);
                }
                else
                {
                  v62 = v101;
                  *(_BYTE *)(v21 + 34) = v61 & 0xF8 | 2;
                  if ( v62 <= 1 || (unsigned int)sub_140273234(v20 - 0x220000000000LL) >= 5 )
                    sub_1402BF9C0(v20 - 0x220000000000LL, 4u);
                  else
                    sub_140276D2C(v65, v20 - 0x220000000000LL);
                }
              }
            }
            if ( v39 )
              sub_14032A4B0(v92, 1LL, 4LL);
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v88 )
            {
              v110[1] = 24LL;
              v110[0] = &v107;
              sub_14035EDE4((unsigned int)v110, 1, 536870913, 631, 289413892);
              v88 = 0;
            }
            goto LABEL_70;
          }
          if ( v21 != qword_140C53270 )
          {
            v45 = sub_1402C9E70(v109, v22, v6, v19);
            v47 = v86;
            v86[1] += v45;
            if ( v24 != v5 )
              KeBugCheckEx(0x1Au, 0x403uLL, v5, BugCheckParameter3, *(_QWORD *)(v21 + 8));
            v33 = 0xFFFFFFFFFFLL;
            v48 = 48 * (*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFFLL);
            ++v47[4];
            v32 = 0LL;
            v29 = v48 - 0x220000000000LL;
            v95 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  sub_1402F32E0(&v95);
                while ( *(__int64 *)(v21 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
              v32 = 0LL;
            }
            v49 = v83;
            v35 = v85;
            if ( v83 )
            {
              if ( (*(_BYTE *)(v85 + 184) & 7) == 1
                && v5 >= 0xFFFFF6FB7DBED000uLL
                && v5 <= 0xFFFFF6FB7DBEDFFFuLL
                && (*(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 2 )
              {
                sub_140273FD0(v20 - 0x220000000000LL, v33, v46, 0LL);
                v32 = 0LL;
                v29 = 0LL;
              }
              v49 = v83;
            }
            *(_QWORD *)(v21 + 24) |= 0x4000000000000000uLL;
            if ( v87 && v49 )
            {
              v107 = 0LL;
              v108 = 0LL;
              sub_1402B1E40((__m128i *)(v20 - 0x220000000000LL), &v107);
              v32 = 0LL;
              v88 = 1;
            }
            if ( (*(_BYTE *)(v35 + 184) & 7) != 0 && ((*(_QWORD *)(v21 + 40) >> 60) & 7) == 2 )
            {
              sub_14033C300(v20 - 0x220000000000LL, 0LL);
              v32 = 0LL;
            }
            goto LABEL_40;
          }
          if ( (unsigned int)sub_140317A80(v5) && (unsigned int)sub_140229550() )
            goto LABEL_171;
          *(_QWORD *)v5 = 0LL;
LABEL_89:
          v9 = v84;
LABEL_90:
          v3 = v86;
LABEL_91:
          v12 = v85;
LABEL_92:
          v4 = v82;
          v8 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_9;
        }
        v3[1] += sub_1402C9E70(v109, v4, v6, v8);
        v63 = sub_140239CA8(v5);
        if ( v63 == 1 )
        {
          BugCheckParameter3 = sub_140317A10(v5);
          v81 = BugCheckParameter3;
          sub_140274E48(v98, BugCheckParameter3, 1);
          if ( (*(_BYTE *)(v12 + 184) & 7) != 0 )
          {
            ++v3[4];
            ++*v3;
          }
          else if ( (unsigned int)sub_14033FD38(v81) )
          {
            ++v3[4];
          }
          if ( (unsigned int)sub_140317A80(v5) && (unsigned int)sub_140229550() )
          {
            *(_QWORD *)v5 = 0LL;
            sub_1402294F0(v5, 0LL);
          }
          else
          {
            *(_QWORD *)v5 = 0LL;
          }
          goto LABEL_92;
        }
        ++v3[4];
        if ( (*(_BYTE *)(v12 + 184) & 7) != 0 )
          ++*v3;
        v4 = v82;
        v8 = 0xFFFFF6FB7DBED000uLL;
        if ( v63 == 3 )
          ++v3[1];
      }
LABEL_9:
      v11 = v100;
      v5 += 8LL;
      if ( v5 > v99 )
        break;
      v6 = v104;
    }
  }
  result = sub_1402C9E70(v109, v4, v6, v8);
  if ( v9 )
  {
    v56 = HIWORD(*(_DWORD *)(v11 + 16)) & 0x3FF;
    result = v9;
    if ( v56 < v9 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v11, v56, v9);
    v83 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        sub_1402F32E0(&v83);
        result = *(_QWORD *)(v11 + 24);
      }
      while ( result < 0 );
    }
    *(_QWORD *)(v11 + 16) ^= ((unsigned int)*(_QWORD *)(v11 + 16) ^ (((unsigned int)(*(_QWORD *)(v11 + 16) >> 16) - v9) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
