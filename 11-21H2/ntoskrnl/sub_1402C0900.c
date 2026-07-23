/*
 * XREFs of sub_1402C0900 @ 0x1402C0900
 * Callers:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 * Callees:
 *     sub_1402C14C0 @ 0x1402C14C0 (sub_1402C14C0.c)
 *     sub_1402C1520 @ 0x1402C1520 (sub_1402C1520.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 */

void __fastcall sub_1402C0900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r11
  ULONG_PTR v7; // rbx
  char v8; // al
  __int64 v9; // rdi
  unsigned int v10; // ebx
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r12
  unsigned int LockArray_high; // esi
  __int64 v14; // r8
  int v15; // r10d
  signed int v16; // r9d
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  ULONG_PTR v19; // r8
  int v20; // edx
  char *v21; // rax
  __int64 v22; // rdi
  char v23; // al
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  unsigned int v26; // r14d
  unsigned int v27; // r13d
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // r15
  _BYTE *v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r12
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v40; // rcx
  signed __int32 v41; // ett
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // eax
  unsigned __int64 v47; // rdi
  __int64 v48; // r14
  __int64 v49; // r9
  __int64 v50; // r8
  int v51; // esi
  __int64 v52; // rcx
  __int64 v53; // rax
  ULONG_PTR v54; // rbx
  unsigned __int64 v55; // rcx
  __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // r13
  __int64 v59; // r13
  ULONG_PTR v60; // r8
  int v61; // ecx
  char *v62; // r9
  char v63; // al
  __int64 v64; // rsi
  unsigned int v65; // edi
  unsigned int v66; // eax
  __int64 v67; // r11
  __int64 v68; // r8
  __int64 v69; // rdi
  __int64 v70; // r10
  int v71; // edx
  _QWORD *v72; // rax
  unsigned int v73; // ecx
  ULONG_PTR v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  int v78; // edx
  int v79; // eax
  int v80; // ecx
  char v81; // al
  __int64 v82; // rcx
  volatile LONG *v83; // rcx
  __int64 v84; // rcx
  char v85; // al
  unsigned int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // [rsp+30h] [rbp-108h]
  int v90; // [rsp+34h] [rbp-104h]
  unsigned __int64 v91; // [rsp+38h] [rbp-100h]
  char v92; // [rsp+40h] [rbp-F8h]
  unsigned int v93; // [rsp+44h] [rbp-F4h]
  int v94; // [rsp+48h] [rbp-F0h]
  int v95; // [rsp+4Ch] [rbp-ECh]
  __int64 v96; // [rsp+50h] [rbp-E8h]
  int v97; // [rsp+58h] [rbp-E0h]
  __int64 v98; // [rsp+60h] [rbp-D8h]
  ULONG_PTR v99; // [rsp+68h] [rbp-D0h]
  __int64 v100; // [rsp+70h] [rbp-C8h]
  __int128 v101; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v102; // [rsp+88h] [rbp-B0h]
  __int64 v103; // [rsp+98h] [rbp-A0h]
  __int64 v104; // [rsp+A0h] [rbp-98h]
  __int64 v105; // [rsp+A8h] [rbp-90h]
  __int64 v106; // [rsp+B0h] [rbp-88h]
  _DWORD v107[2]; // [rsp+B8h] [rbp-80h]
  __int64 v108; // [rsp+C0h] [rbp-78h]
  __int64 v109; // [rsp+C8h] [rbp-70h]
  __int64 v110; // [rsp+D0h] [rbp-68h]
  __int64 v111; // [rsp+D8h] [rbp-60h]
  __int64 v112; // [rsp+E0h] [rbp-58h]
  __int128 v113; // [rsp+E8h] [rbp-50h]
  unsigned int v116; // [rsp+150h] [rbp+18h]

  v101 = 0LL;
  v103 = 0LL;
  v5 = a4;
  v102 = 0LL;
  v94 = 0;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4);
  v97 = 1;
  v99 = v7;
  if ( (v7 < qword_140C52CE0 || v7 >= qword_140C52CE0 + 2048)
    && byte_140C58C66
    && _bittest64((const signed __int64 *)qword_140C58DE0, v7 >> 9) )
  {
    v94 = 1;
  }
  if ( a4 )
  {
    v90 = 1;
    v12 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
  }
  else
  {
    v8 = *(_BYTE *)(a3 + 35);
    if ( (v8 & 8) != 0 )
      v9 = 5LL;
    else
      v9 = v8 & 7;
    v10 = 0;
    v11 = (_QWORD *)(a1 + 15424 + 8 * v9);
    do
    {
      if ( *v11 >= 0x1000uLL )
      {
        v83 = (volatile LONG *)(88 * v9 + 2912 + a1);
        if ( *v11 >= 0x2000uLL )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(v83);
LABEL_158:
          v84 = v9 + 8LL * v10;
          if ( *(_QWORD *)(a1 + 8 * v84 + 15424) >= 0x1000uLL )
          {
            *(_QWORD *)(a1 + 8 * v84 + 15424) = 0LL;
            *(_WORD *)(a5 + 1) = 257;
            v85 = *(_BYTE *)(a5 + 2);
            if ( v10 )
              v85 = 2;
            *(_BYTE *)(a5 + 2) = v85;
          }
          return;
        }
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v83) )
          goto LABEL_158;
      }
      ++v10;
      v11 += 8;
    }
    while ( v10 < 2 );
    if ( v10 != 2 )
      goto LABEL_158;
    v5 = a4;
    v12 = -1LL;
    v7 = v99;
    v90 = 64;
  }
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v91 = v12;
  if ( (unsigned int)dword_140D06884 >= 0x40 )
  {
    LockArray_high &= 0x3Fu;
  }
  else if ( 0x40 / (unsigned int)dword_140D06884 > 1 )
  {
    LockArray_high *= 0x40 / (unsigned int)dword_140D06884;
  }
  v92 = LockArray_high;
  v14 = 48 * v7;
  v15 = 0;
  v89 = 0;
  v16 = 0;
  v116 = 0;
  v95 = 0;
  v17 = *(_QWORD *)(48 * v7 - 0x220000000000LL + 40);
  v18 = 48 * v7 - 0x220000000000LL;
  v19 = 0xAAAAAAAAAAAAAAABuLL * (v14 >> 4);
  *(_QWORD *)&v101 = *(_QWORD *)(qword_140C51F48 + 8 * ((v17 >> 43) & 0x3FF));
  v20 = dword_140C506C8;
  v108 = v18;
  *(_QWORD *)&v102 = v18;
  if ( dword_140C506C4 <= (unsigned int)dword_140C506C8 )
  {
    v21 = (char *)qword_140C50708 + 16 * dword_140C506C4;
    if ( v19 >= *(_QWORD *)v21 && (dword_140C506C4 == dword_140C506C8 || v19 < *((_QWORD *)v21 + 2)) )
      goto LABEL_19;
  }
  if ( dword_140C506C8 < 0 )
LABEL_197:
    KeBugCheckEx(0x1Au, 0x6201uLL, v19, 0LL, 0LL);
  while ( 1 )
  {
    v80 = (v16 + v20) >> 1;
    v21 = (char *)qword_140C50708 + 16 * v80;
    if ( v19 < *(_QWORD *)v21 )
    {
      if ( !v80 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v19, (ULONG_PTR)qword_140C50708, 0LL);
      v20 = v80 - 1;
      goto LABEL_164;
    }
    if ( v80 == dword_140C506C8 || v19 < *((_QWORD *)v21 + 2) )
      break;
    v16 = v80 + 1;
LABEL_164:
    if ( v20 < v16 )
      goto LABEL_197;
  }
  dword_140C506C4 = (v16 + v20) >> 1;
  v16 = 0;
LABEL_19:
  v22 = *((unsigned int *)v21 + 2);
  DWORD2(v101) = *((_DWORD *)v21 + 2);
  if ( v5 )
  {
    v24 = 5;
  }
  else
  {
    v23 = *(_BYTE *)(v18 + 35);
    if ( (v23 & 8) != 0 )
      v24 = 5;
    else
      v24 = v23 & 7;
  }
  DWORD2(v102) = v24;
  if ( qword_140C50710 )
  {
    v86 = sub_1403B76EC(v19);
    v5 = a4;
    v25 = v86;
    v16 = 0;
    v15 = 0;
  }
  else
  {
    v25 = 0;
  }
  v26 = 0;
  v27 = LockArray_high;
  HIDWORD(v102) = v25;
  v28 = 24512 * v22;
  v106 = v101;
  v104 = v24 + 8LL * v25;
  v29 = *(_QWORD *)(v101 + 16) + v28 + 88 * (v104 + 37);
  v100 = v101 + ((unsigned __int64)v24 << 9);
  v30 = 0LL;
  v109 = v24;
  v98 = 0LL;
  v31 = v100 + 11328;
  v105 = v28;
  v103 = v29;
  v96 = v100 + 11328;
  v93 = 0;
  while ( v12 == -1LL || v15 )
  {
    v32 = *(_QWORD *)(v31 + 8LL * v27);
    if ( v32 != -1LL )
    {
      v33 = 48 * v32 - 0x220000000000LL;
      goto LABEL_28;
    }
    v116 = ++v16;
LABEL_60:
    v46 = v90;
LABEL_61:
    v93 = ++v26;
    v27 = ((_BYTE)v27 + 1) & 0x3F;
    if ( v26 >= v46 )
    {
      v34 = (_BYTE *)a5;
      goto LABEL_64;
    }
    v30 = v98;
  }
  v32 = v12;
  v33 = v5;
LABEL_28:
  v34 = (_BYTE *)a5;
  v35 = 0LL;
  v36 = a5 + 16;
  v37 = a5 + 16;
  do
  {
    if ( *(_BYTE *)(v37 + 8) && v33 == *(_QWORD *)v37 )
      goto LABEL_34;
    ++v35;
    v37 += 24LL;
  }
  while ( v35 < 4 );
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
  {
LABEL_162:
    v16 = v116;
    goto LABEL_60;
  }
  if ( v12 != -1LL && !v15 && (*(_BYTE *)(v33 + 35) & 8) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v26;
    goto LABEL_64;
  }
  *(_BYTE *)(a5 + 24 * v30 + 24) = 1;
LABEL_34:
  v38 = a5 + 24 * v30;
  *(_QWORD *)(v38 + 8) = v32;
  *(_QWORD *)(v38 + 16) = v33;
  if ( !v95 )
  {
    v95 = 1;
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      LOBYTE(v31) = -1;
      sub_140461B20(a2 + 32, v31);
      v30 = v98;
      v31 = v96;
      v34 = (_BYTE *)a5;
      v15 = v89;
      v5 = a4;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v40 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v40 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v87 = *(_DWORD *)(v40 + 24);
          *(_DWORD *)(v40 + 24) = v87 + 1;
          if ( v87 == -1 )
          {
            sub_140418E4C(CurrentPrcb);
            v30 = v98;
            v31 = v96;
            v34 = (_BYTE *)a5;
            v15 = v89;
            v5 = a4;
          }
        }
      }
      _m_prefetchw((const void *)(a2 + 32));
      v41 = *(_DWORD *)(a2 + 32) & 0x7FFFFFFF;
      if ( v41 != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v41 + 1, v41) )
      {
        v82 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v82 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v88 = *(_DWORD *)(v82 + 24) - 1;
            *(_DWORD *)(v82 + 24) = v88;
            if ( !v88 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        LOBYTE(v31) = -1;
        sub_140366A20(a2 + 32, v31);
        v30 = v98;
        v31 = v96;
        v34 = (_BYTE *)a5;
        v15 = v89;
        v5 = a4;
      }
      v26 = v93;
    }
    LOBYTE(LockArray_high) = v92;
  }
  if ( v91 != -1LL && !v15 )
  {
LABEL_117:
    v42 = *(_QWORD *)(v33 + 40) & 0xFFFFFFFFFFLL;
    goto LABEL_45;
  }
  if ( *(_QWORD *)(v31 + 8LL * v27) != v32 )
  {
    if ( *(_BYTE *)(v38 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v38 + 24) = 0;
    }
    --v26;
    v12 = v91;
    LOBYTE(v27) = v27 - 1;
    goto LABEL_162;
  }
  if ( v91 != -1LL && !v15 )
    goto LABEL_117;
  if ( v30 )
    v42 = (8LL * (*(_DWORD *)(v33 + 36) & 0xFFE00000)) | (((*(_QWORD *)v33 >> 20) | *(_QWORD *)(v33 + 40) & 0xF80000000000000uLL) >> 20);
  else
    v42 = *(_QWORD *)v33 & 0xFFFFFFFFFFLL;
LABEL_45:
  if ( v42 == 0x3FFFFFFFFFLL )
  {
    v43 = a2 + 40;
    if ( v30 )
      v43 = v103 + 40;
  }
  else
  {
    v43 = 48 * v42 - 0x220000000000LL;
  }
  v44 = 0LL;
  while ( !*(_BYTE *)(v36 + 8) || v43 != *(_QWORD *)v36 )
  {
    ++v44;
    v36 += 24LL;
    if ( v44 >= 4 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
      {
        v31 = v96;
        v16 = v116;
        if ( *(_BYTE *)(v38 + 24) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *(_BYTE *)(v38 + 24) = 0;
        }
        v12 = v91;
        goto LABEL_60;
      }
      v34[24 * v30 + 48] = 1;
      break;
    }
  }
  v45 = 3 * v30;
  *(_QWORD *)&v34[8 * v45 + 32] = v42;
  *(_QWORD *)&v34[8 * v45 + 40] = v43;
  v98 = v30 + 2;
  v107[v15] = v27;
  if ( !v15 && !v94 )
  {
    v89 = 1;
    v12 = v91;
    LOBYTE(v27) = LockArray_high - 1;
    v31 = sub_1402C14C0(&v101, 2LL);
    v96 = v31;
    v46 = 64;
    v16 = 0;
    v90 = 64;
    v26 = -1;
    v116 = 0;
    goto LABEL_61;
  }
LABEL_64:
  v47 = v91;
  if ( v26 != 64 && (v26 != 1 || v91 == -1LL || v15) )
  {
    v48 = 0LL;
    *v34 = 1;
    v49 = -134217729LL;
    v50 = 0x8000000LL;
    v51 = 1;
    do
    {
      if ( v47 == -1LL || v51 != 1 )
      {
        if ( v51 )
        {
          if ( v51 == 1 )
            v52 = v100 + 11328;
          else
            v52 = *(_QWORD *)(v106 + 16) + 6080LL + v105 + (v104 << 9);
        }
        else
        {
          v52 = v100 + 7232;
        }
        v53 = (unsigned int)v107[v48];
        v54 = *(_QWORD *)(v52 + 8 * v53);
        *(_QWORD *)(v52 + 8 * v53) = v99;
        if ( v54 != -1LL && (v54 < qword_140C52CE0 || v54 >= qword_140C52CE0 + 2048) )
        {
          v111 = 0LL;
          v113 = 0LL;
          v55 = *(_QWORD *)(48 * v54 - 0x220000000000LL + 40);
          v56 = 48 * v54 - 0x220000000000LL;
          v57 = *(_QWORD *)(v56 + 16);
          v58 = -9LL;
          v112 = v56;
          if ( (v57 & 0x400) == 0 )
            v58 = v49;
          v59 = v57 & v58;
          v60 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v54) >> 4);
          v110 = *(_QWORD *)(qword_140C51F48 + 8 * ((v55 >> 43) & 0x3FF));
          v61 = dword_140C506C8;
          if ( dword_140C506C4 > (unsigned int)dword_140C506C8
            || (v62 = (char *)qword_140C50708 + 16 * dword_140C506C4, v60 < *(_QWORD *)v62)
            || dword_140C506C4 != dword_140C506C8 && v60 >= *((_QWORD *)v62 + 2) )
          {
            v78 = 0;
            if ( dword_140C506C8 < 0 )
LABEL_196:
              KeBugCheckEx(0x1Au, 0x6201uLL, v60, 0LL, 0LL);
            while ( 1 )
            {
              v79 = (v78 + v61) >> 1;
              v62 = (char *)qword_140C50708 + 16 * v79;
              if ( v60 < *(_QWORD *)v62 )
              {
                if ( !v79 )
                  KeBugCheckEx(0x1Au, 0x6200uLL, v60, (ULONG_PTR)v62, 0LL);
                v61 = v79 - 1;
              }
              else
              {
                if ( v79 == dword_140C506C8 || v60 < *((_QWORD *)v62 + 2) )
                {
                  dword_140C506C4 = (v78 + v61) >> 1;
                  break;
                }
                v78 = v79 + 1;
              }
              if ( v61 < v78 )
                goto LABEL_196;
            }
          }
          v63 = *(_BYTE *)(v56 + 35);
          v64 = *((unsigned int *)v62 + 2);
          LODWORD(v111) = *((_DWORD *)v62 + 2);
          if ( (v63 & 8) != 0 )
            v65 = 5;
          else
            v65 = v63 & 7;
          LODWORD(v113) = v65;
          if ( qword_140C50710 )
            v66 = sub_1403B76EC(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v54) >> 4));
          else
            v66 = 0;
          v67 = 24512 * v64;
          v51 = v97;
          DWORD1(v113) = v66;
          v68 = v65;
          v69 = *(_QWORD *)(v110 + 16);
          v70 = v68 + 8LL * v66;
          *((_QWORD *)&v113 + 1) = v67 + v69 + 88 * (v70 + 37);
          if ( v97 == 3 )
          {
LABEL_93:
            *(_QWORD *)(v56 + 16) = v59;
          }
          else
          {
            v71 = 0;
            while ( 1 )
            {
              if ( v71 )
                v72 = (_QWORD *)(v71 == 1 ? v110 + (v68 << 9) + 11328 : v67 + v69 + (v70 << 9) + 6080);
              else
                v72 = (_QWORD *)(v110 + (v68 << 9) + 7232);
              if ( v71 != v97 )
                break;
LABEL_92:
              if ( ++v71 >= 3 )
                goto LABEL_93;
            }
            v73 = 0;
            while ( v54 != *v72 )
            {
              ++v73;
              ++v72;
              if ( v73 >= 0x40 )
                goto LABEL_92;
            }
          }
          v47 = v91;
          v49 = -134217729LL;
          v50 = 0x8000000LL;
        }
        v74 = v99;
        if ( v99 != -1LL && (v99 < qword_140C52CE0 || v99 >= qword_140C52CE0 + 2048) )
        {
          v75 = 8LL;
          v76 = *(_QWORD *)(v108 + 16);
          if ( (v76 & 0x400) == 0 )
            v75 = v50;
          v77 = v76 | v75;
          v74 = v99;
          *(_QWORD *)(v108 + 16) = v77;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * (v109 + 8 * v48) + 15424));
        if ( v51 == 1 && (v94 || (unsigned int)sub_1402C1520(v74, a1, v50, v49)) )
          break;
      }
      ++v51;
      v48 = (unsigned int)(v48 + 1);
      v97 = v51;
    }
    while ( (unsigned int)v48 < 2 );
  }
  else
  {
    if ( v95 )
    {
      *v34 = 1;
      sub_140338D00(a2, v34);
      v34 = (_BYTE *)a5;
      *(_BYTE *)a5 = 0;
    }
    if ( v26 != 1 || v91 == -1LL || v89 )
    {
      v34[2] = 1;
      v81 = v34[2];
      if ( v89 )
        v81 = 2;
      v34[2] = v81;
      if ( v116 >= 0x20 )
        v34[1] = 1;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
    }
    else
    {
      v34[2] = 3;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
    }
  }
}
