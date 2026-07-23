/*
 * XREFs of sub_1402BBEE0 @ 0x1402BBEE0
 * Callers:
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 * Callees:
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_14023261C @ 0x14023261C (sub_14023261C.c)
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140268A70 @ 0x140268A70 (sub_140268A70.c)
 *     sub_140273EE0 @ 0x140273EE0 (sub_140273EE0.c)
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_14027DAD4 @ 0x14027DAD4 (sub_14027DAD4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14028DC40 @ 0x14028DC40 (sub_14028DC40.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_1403CC0F0 @ 0x1403CC0F0 (sub_1403CC0F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_1405AD67C @ 0x1405AD67C (sub_1405AD67C.c)
 *     sub_1405AD6C8 @ 0x1405AD6C8 (sub_1405AD6C8.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 *     sub_14096C9CC @ 0x14096C9CC (sub_14096C9CC.c)
 */

__int64 __fastcall sub_1402BBEE0(
        unsigned __int64 a1,
        void *a2,
        unsigned int a3,
        size_t a4,
        char a5,
        unsigned __int64 *a6,
        _DWORD *a7)
{
  unsigned __int64 *v8; // rdi
  int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  int v13; // r9d
  int v14; // eax
  signed __int32 v15; // edx
  __int64 v16; // r8
  __int64 v17; // rax
  __m128i *v19; // r13
  __int64 v20; // rdi
  int v21; // ebx
  signed __int64 i; // rdx
  signed __int64 v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // r9
  __int64 v29; // r12
  unsigned __int8 CurrentIrql; // r14
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  __int64 v35; // r9
  int v36; // edx
  bool v37; // zf
  char v38; // dl
  int v39; // ecx
  ULONG_PTR v40; // rbx
  unsigned __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // rcx
  char *v44; // rsi
  size_t v45; // rax
  __int64 v46; // rdx
  __int16 v47; // r8
  __int64 v48; // rcx
  bool v49; // bl
  ULONG_PTR *v50; // rsi
  struct _KPRCB *v51; // rdx
  signed __int32 v52; // eax
  signed __int32 v53; // ett
  unsigned __int64 v54; // r8
  int v55; // r15d
  __int64 v56; // rcx
  _BYTE *v57; // rsi
  char *v58; // rbx
  char v59; // al
  __int64 v60; // rsi
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r10
  __int64 v63; // r9
  int v64; // edx
  volatile signed __int64 *v65; // rbx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rcx
  unsigned __int64 *v70; // r14
  __int64 v71; // r15
  __int64 v72; // rcx
  unsigned int v73; // esi
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // r9
  signed __int64 v80; // rax
  __int64 v81; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v83; // edi
  char v84; // al
  volatile signed __int32 *v85; // rbx
  unsigned __int8 v86; // cl
  __int8 v87; // cl
  __int8 v88; // cl
  int *v89; // rdi
  unsigned __int8 v90; // si
  struct _KPRCB *v91; // rbx
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  int j; // ecx
  struct _KPRCB *v97; // rcx
  __int64 v98; // rdx
  int v99; // eax
  unsigned __int8 v100; // al
  struct _KPRCB *v101; // r10
  int v102; // eax
  ULONG_PTR v103; // rbx
  unsigned __int64 v104; // rbx
  __int64 v105; // rcx
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // r15
  __int64 v108; // rdi
  int v109; // r8d
  int v110; // edx
  __int64 v111; // rbx
  __int64 *v112; // r8
  unsigned __int64 v113; // r10
  struct _KPRCB *v114; // r14
  __int64 v115; // rsi
  ULONG_PTR *v116; // r9
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int8 v120; // al
  __int8 v121; // al
  __int8 v122; // al
  __int8 v123; // al
  __int64 v124; // r14
  volatile signed __int32 *v125; // rbx
  __int16 v126; // di
  __int64 v127; // r8
  __int64 v128; // rax
  unsigned __int64 v129; // r9
  char v130; // al
  int v131; // edx
  __int64 v132; // r8
  __int64 v133; // r14
  unsigned __int64 v134; // r8
  struct _KPRCB *v135; // r9
  __int64 v136; // rdx
  signed __int32 v137; // eax
  unsigned __int8 v138; // bl
  unsigned __int8 v139; // al
  struct _KPRCB *v140; // r9
  __int64 v141; // r8
  int v142; // eax
  unsigned __int8 v143; // al
  struct _KPRCB *v144; // r9
  __int64 v145; // r8
  int v146; // eax
  unsigned __int8 v147; // [rsp+30h] [rbp-198h]
  __int64 v148; // [rsp+38h] [rbp-190h]
  int v149; // [rsp+40h] [rbp-188h]
  int Sizea; // [rsp+44h] [rbp-184h]
  unsigned __int64 v152; // [rsp+50h] [rbp-178h]
  int v153; // [rsp+58h] [rbp-170h] BYREF
  int v154; // [rsp+5Ch] [rbp-16Ch]
  size_t v155; // [rsp+60h] [rbp-168h] BYREF
  unsigned __int64 v156; // [rsp+68h] [rbp-160h]
  __int64 v157; // [rsp+70h] [rbp-158h]
  ULONG_PTR v158; // [rsp+78h] [rbp-150h]
  void *Src; // [rsp+80h] [rbp-148h]
  _BYTE *v160; // [rsp+88h] [rbp-140h]
  int v161; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v162; // [rsp+98h] [rbp-130h] BYREF
  __int64 v163; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v164; // [rsp+A8h] [rbp-120h] BYREF
  __int64 v165; // [rsp+B0h] [rbp-118h]
  __int64 v166; // [rsp+B8h] [rbp-110h]
  unsigned __int64 *v167; // [rsp+C0h] [rbp-108h]
  __int64 v168; // [rsp+C8h] [rbp-100h]
  __int64 v169; // [rsp+D0h] [rbp-F8h]
  __m128i *v170; // [rsp+D8h] [rbp-F0h]
  unsigned __int64 v171; // [rsp+E0h] [rbp-E8h]
  __int64 v172; // [rsp+E8h] [rbp-E0h] BYREF
  __int128 v173; // [rsp+F0h] [rbp-D8h] BYREF
  __int128 v174; // [rsp+100h] [rbp-C8h]
  __int128 v175; // [rsp+110h] [rbp-B8h]
  __int128 v176; // [rsp+120h] [rbp-A8h]
  __int128 v177; // [rsp+130h] [rbp-98h]
  __int128 v178; // [rsp+148h] [rbp-80h]
  __int128 v179; // [rsp+158h] [rbp-70h]
  __int128 v180; // [rsp+168h] [rbp-60h]
  _QWORD v181[2]; // [rsp+178h] [rbp-50h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  v155 = a4;
  Src = a2;
  v156 = a1;
  v162 = a1;
  v8 = a6;
  v167 = a6;
  v181[0] = a7;
  v9 = 0;
  v147 = 0;
  v173 = 0LL;
  v174 = 0LL;
  *a7 = 0;
  v10 = *a6;
  if ( qword_140C50780 )
  {
    if ( (v10 & 0x10) != 0 )
      v10 &= ~0x10uLL;
    else
      v10 &= ~qword_140C50780;
  }
  v166 = v10 >> 16;
  v163 = v10 >> 16;
  v165 = *(_QWORD *)(v10 >> 16);
  v164 = v165;
  v11 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v165 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v165 + 56) >> 20) & 0x7F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = (((*(_DWORD *)(v165 + 56) >> 20) & 0x7F) - 1) << byte_140C506CC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)];
    v13 = *((_DWORD *)CurrentPrcb + 8342);
    v8 = v167;
  }
  v14 = (1 << byte_140C506CD) - 1;
  v15 = v14 & _InterlockedExchangeAdd((volatile signed __int32 *)CurrentPrcb + 8340, 1u);
  v16 = 0LL;
  if ( a4 != 4096 )
    v16 = 2LL;
  v17 = sub_1403250B0(v11, v13 | (unsigned int)v15, v16);
  v158 = v17;
  v160 = (_BYTE *)v17;
  if ( v17 == -1 )
  {
    sub_1405B8348(v11);
    return 1LL;
  }
  v168 = 48 * v17;
  v19 = (__m128i *)(48 * v17 - 0x220000000000LL);
  v170 = v19;
  v20 = (*v8 >> 5) & 0x1F;
  v169 = v20;
  v154 = v20;
  if ( (_DWORD)v20 )
  {
    if ( (_DWORD)v20 == 31 )
    {
      v21 = 1;
    }
    else if ( (unsigned int)v20 >> 3 == 3 && (v20 & 7) != 0 )
    {
      v21 = 2;
    }
    else
    {
      v21 = (unsigned int)v20 >> 3 != 1;
    }
  }
  else
  {
    v21 = 3;
  }
  v149 = 0;
  LODWORD(v157) = 0;
  if ( a4 != 4096 && sub_140268A70(v168 - 0x220000000000LL, v21) )
    v9 = 1;
  if ( v19[2].m128i_u8[2] >> 6 != v21 )
    sub_140267E78((__int64)v19, v21, 0);
  for ( i = v19[1].m128i_i64[1]; ; i = v23 )
  {
    v23 = _InterlockedCompareExchange64(&v19[1].m128i_i64[1], i & 0xC7FFFFFFFFFFFFFFuLL, i);
    if ( i == v23 )
      break;
  }
  v24 = sub_1403095B0(&qword_140C534C0, 1LL);
  v171 = v24;
  if ( !v24 )
  {
    if ( (a5 & 1) == 0 )
    {
      sub_140268408((__int64)v19);
      return 4LL;
    }
    if ( v9 )
      sub_1402359C4(v158, 1, v21);
    v149 = 1;
    goto LABEL_33;
  }
  v38 = 4;
  if ( v158 <= qword_140C50840 && _bittest64((const signed __int64 *)(48 * v158 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    v39 = *(unsigned __int8 *)(48 * v158 - 0x21FFFFFFFFDELL) >> 6;
    if ( !v39 || v39 == 3 )
    {
      v38 = 12;
    }
    else if ( v39 == 2 )
    {
      v38 = 28;
    }
  }
  v40 = ((v158 & 0xFFFFFFFFFFLL) << 12) | qword_140016200[v38 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v24 < 0xFFFFF68000000000uLL || v24 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_86:
    v40 |= 0x100uLL;
    goto LABEL_87;
  }
  v41 = (__int64)(v24 << 25) >> 16;
  if ( v24 >= 0xFFFFF6FB40000000uLL && v24 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    v40 = v24 == 0xFFFFF6FB7DBEDF68uLL
        ? ((v158 & 0xFFFFFFFFFFLL) << 12) | qword_140016200[v38 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
        : ((v158 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | qword_140016200[v38 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
    if ( (unsigned int)sub_14023261C(v24) )
      v40 |= 4uLL;
  }
  if ( v24 <= 0xFFFFF6BFFFFFFF78uLL )
    v40 |= 4uLL;
  if ( v41 < 0xFFFF800000000000uLL )
  {
    v42 = HIBYTE(word_140C51864);
    goto LABEL_85;
  }
  if ( byte_140C53F50[((v41 >> 39) & 0x1FF) - 256] != 1 && (v41 < 0xFFFFF68000000000uLL || v41 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v41 < qword_140C540C0 || (v42 = HIBYTE(word_140C51864), v41 > qword_140C51BF0) )
      v42 = (unsigned __int8)word_140C51864;
LABEL_85:
    if ( !v42 )
      goto LABEL_87;
    goto LABEL_86;
  }
LABEL_87:
  *(_QWORD *)v24 = v40 & 0xFAFFFFFFFFFFFEFFuLL | ((unsigned __int64)(word_140C51864 & 1) << 8) | 0xA00000000000042LL;
  v43 = (__int64)(v24 << 25) >> 16;
  v44 = (char *)(a3 + v43);
  if ( v9 )
  {
    if ( a3 )
      memset((void *)v43, 0, a3);
    v45 = v155;
    if ( 4096 - v155 == a3 )
      goto LABEL_93;
    memset(&v44[v155], 0, 4096 - v155 - a3);
  }
  v45 = v155;
LABEL_93:
  memmove(v44, Src, v45);
  sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v24, 1u);
LABEL_33:
  Sizea = BYTE4(xmmword_140D06900) & 1;
  v25 = (unsigned __int64 *)(((v156 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v152 = (unsigned __int64)v25;
  while ( 1 )
  {
    v26 = *v25;
    while ( 1 )
    {
      if ( (v26 & 1) == 0 || (v26 & 0x200) != 0 )
        goto LABEL_344;
      v27 = (v26 >> 12) & 0xFFFFFFFFFFLL;
      if ( v27 <= qword_140C50840 )
      {
        v28 = 48 * v27;
        v148 = 48 * v27;
        if ( (*(_QWORD *)(48 * v27 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          break;
      }
    }
    v29 = v28 - 0x220000000000LL;
    v157 = v28 - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v31 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v31 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v161 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v161);
        while ( *(__int64 *)(v29 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
      v28 = 48 * v27;
    }
    v32 = *(_QWORD *)v152;
    if ( (*(_QWORD *)v152 & 1) == 0 || (v32 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql != 17 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v143 = KeGetCurrentIrql();
            if ( v143 <= 0xFu && CurrentIrql <= 0xFu && v143 >= 2u )
            {
              v144 = KeGetCurrentPrcb();
              v145 = *((_QWORD *)v144 + 4375);
              v146 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v37 = (v146 & *(_DWORD *)(v145 + 20)) == 0;
              *(_DWORD *)(v145 + 20) &= v146;
              if ( v37 )
                sub_140418E4C(v144);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      goto LABEL_344;
    }
    if ( v27 == ((v32 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v25 = (unsigned __int64 *)v152;
    if ( CurrentIrql != 17 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = *((_QWORD *)v34 + 4375);
            v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v37 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
            *(_DWORD *)(v35 + 20) &= v36;
            if ( v37 )
              sub_140418E4C(v34);
          }
        }
      }
      __writecr8(CurrentIrql);
      v25 = (unsigned __int64 *)v152;
    }
  }
  v46 = *(_QWORD *)(v29 + 40);
  if ( (v46 & 0x10000000000LL) != 0 || (v46 & 0x20000000000000LL) != 0 )
    goto LABEL_121;
  Src = (void *)(v29 + 32);
  v47 = *(_WORD *)(v29 + 32);
  v48 = *(_QWORD *)(v28 - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v47 )
    goto LABEL_103;
  if ( v47 == 1 )
  {
    if ( !v48 )
      goto LABEL_102;
LABEL_103:
    v49 = 0;
    if ( v46 < 0 && (*(_DWORD *)(v28 - 0x21FFFFFFFFF0LL) & 0x400LL) != 0 )
    {
      v49 = 1;
    }
    else
    {
      v54 = *(_QWORD *)(v28 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
      if ( v54 <= 0xFFFFF6BFFFFFFF78uLL && v54 >= 0xFFFFF68000000000uLL )
        v49 = (*(_BYTE *)(v28 - 0x21FFFFFFFFDDLL) & 0x20) != 0;
    }
    v50 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v46 >> 43) & 0x3FF));
    if ( !v49 || (unsigned int)sub_14032A4B0(v50, 1LL, 4LL) )
    {
      if ( v50 == &StartContext )
      {
        v51 = KeGetCurrentPrcb();
        v52 = *((_DWORD *)v51 + 8615);
        while ( v52 )
        {
          if ( v52 == -1 )
            break;
          v53 = v52;
          v52 = _InterlockedCompareExchange((volatile signed __int32 *)v51 + 8615, v52 - 1, v52);
          if ( v53 == v52 )
            goto LABEL_121;
        }
      }
      v55 = sub_14028DC40((__int64)v50, 1uLL, 0xFFFFFFFFLL);
      if ( !v55 && v49 )
        sub_14028CE10((__int64)v50, 1LL);
      if ( v55 )
        goto LABEL_121;
    }
    v56 = v148;
  }
  else
  {
    if ( v47 == 2 && v48 )
    {
LABEL_102:
      if ( (*(_BYTE *)(v28 - 0x21FFFFFFFFDELL) & 8) != 0 )
        goto LABEL_103;
    }
LABEL_121:
    v56 = v148;
    Src = (void *)(v148 - 0x21FFFFFFFFE0LL);
    ++*(_WORD *)(v148 - 0x21FFFFFFFFE0LL);
  }
  if ( CurrentIrql == 17 )
  {
    sub_140273EE0(v29, 0x11u);
  }
  else
  {
    v147 = CurrentIrql;
    v57 = (_BYTE *)(*(_QWORD *)(v56 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL);
    v160 = v57;
    v58 = (char *)(v56 - 0x21FFFFFFFFDELL);
    v59 = *(_BYTE *)(v56 - 0x21FFFFFFFFDELL);
    if ( (v59 & 0x20) != 0 )
    {
      v60 = v157;
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v61 = KeGetCurrentIrql();
            if ( v61 <= 0xFu && CurrentIrql <= 0xFu && v61 >= 2u )
            {
              v62 = KeGetCurrentPrcb();
              v63 = *((_QWORD *)v62 + 4375);
              v64 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v37 = (v64 & *(_DWORD *)(v63 + 20)) == 0;
              *(_DWORD *)(v63 + 20) &= v64;
              if ( v37 )
                sub_140418E4C(v62);
            }
          }
        }
        __writecr8(CurrentIrql);
        LODWORD(v162) = 0;
        while ( (*v58 & 0x20) != 0 )
          sub_1402F32E0(&v162);
        sub_1402F2700(v60);
        v59 = *v58;
      }
      while ( (*v58 & 0x20) != 0 );
      LODWORD(v20) = v169;
      v19 = v170;
      v57 = v160;
      v29 = v157;
      v56 = v148;
    }
    *v58 = v59 | 0x20;
    v65 = (volatile signed __int64 *)(v56 - 0x21FFFFFFFFE8LL);
    if ( (*(_QWORD *)(v56 - 0x21FFFFFFFFE8LL) & 0x4000000000000000LL) == 0 && (*v57 & 0x20) == 0 )
      sub_14033A510(v57, 1LL);
    _InterlockedAnd64(v65, 0x7FFFFFFFFFFFFFFFuLL);
  }
  v66 = *(_QWORD *)v156;
  if ( (*(_QWORD *)v156 & 1) != 0 || (v66 & 0x800) != 0 && (v66 & 0x400) == 0 || (_DWORD)v20 != ((v66 >> 5) & 0x1F) )
  {
    sub_140334790(v29, v147);
LABEL_344:
    sub_1403CC0F0(v19);
    return 1LL;
  }
  LODWORD(v163) = 0;
  while ( _interlockedbittestandset64(&v19[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v163);
    while ( v19[1].m128i_i64[1] < 0 );
  }
  v67 = *(_QWORD *)v156;
  if ( v156 >= 0xFFFFF6FB7DBED000uLL
    && v156 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v67 & 1) != 0
    && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
  {
    v68 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v68 )
    {
      v69 = *(_QWORD *)(v68 + 8 * ((v156 >> 3) & 0x1FF));
      if ( (v69 & 0x20) != 0 )
        v67 |= 0x20uLL;
      if ( (v69 & 0x42) != 0 )
        v67 |= 0x42uLL;
    }
  }
  v70 = (unsigned __int64 *)&v19[1];
  v71 = -9LL;
  v72 = -9LL;
  if ( (v67 & 0x400) != 0 )
    v72 = -2049LL;
  *v70 = v67 & v72;
  v19[2].m128i_i64[1] |= 0x8000000000000000uLL;
  if ( (_DWORD)v20 )
  {
    if ( (_DWORD)v20 == 31 )
    {
      v73 = 1;
    }
    else if ( (unsigned int)v20 >> 3 == 3 && (v20 & 7) != 0 )
    {
      v73 = 2;
    }
    else
    {
      v73 = (unsigned int)v20 >> 3 != 1;
    }
  }
  else
  {
    v73 = 3;
  }
  v19[2].m128i_i16[0] = 1;
  v74 = *(_QWORD *)v152;
  if ( v152 >= 0xFFFFF6FB7DBED000uLL
    && v152 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v74 & 1) != 0
    && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
  {
    v75 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v75 )
    {
      v76 = *(_QWORD *)(v75 + 8 * ((v152 >> 3) & 0x1FF));
      if ( (v76 & 0x20) != 0 )
        v74 |= 0x20uLL;
      if ( (v76 & 0x42) != 0 )
        v74 |= 0x42uLL;
    }
  }
  v172 = v74;
  v77 = ((unsigned __int64)sub_140317A10(&v172) >> 12) & 0xFFFFFFFFFFLL;
  v175 = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  v178 = 0LL;
  v179 = 0LL;
  v180 = 0LL;
  *((_QWORD *)&v177 + 1) = v19[2].m128i_i64[1];
  v78 = v77;
  v79 = 0xFFFFFF0000000000uLL;
  v80 = _InterlockedCompareExchange64(
          &v19[2].m128i_i64[1],
          v77 | *((_QWORD *)&v177 + 1) & 0xFFFFFF0000000000uLL,
          *((signed __int64 *)&v177 + 1));
  for ( *((_QWORD *)&v180 + 1) = v80; *((_QWORD *)&v177 + 1) != v80; *((_QWORD *)&v180 + 1) = v80 )
  {
    *((_QWORD *)&v177 + 1) = v80;
    v80 = _InterlockedCompareExchange64(&v19[2].m128i_i64[1], v77 | v80 & 0xFFFFFF0000000000uLL, v80);
  }
  v81 = 6 * v77;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)CurrentThread + 346) & 0x100) != 0 )
  {
    v83 = (*((_DWORD *)CurrentThread + 346) & 0xE00u) >> 9;
  }
  else
  {
    v83 = (*((_DWORD *)CurrentThread + 344) >> 12) & 7;
    if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 1124LL) & 0x100000) != 0 )
    {
      v84 = 2;
      if ( v83 < 2 )
        v84 = v83;
      LOBYTE(v83) = v84;
    }
  }
  LODWORD(v164) = 0;
  v85 = (volatile signed __int32 *)(8 * v81 - 0x21FFFFFFFFE8LL);
  while ( _interlockedbittestandset64(v85, 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v164);
    while ( *(__int64 *)v85 < 0 );
  }
  *(_QWORD *)v85 ^= (*(_QWORD *)v85 ^ ((*(_QWORD *)v85 & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v85, 0x7FFFFFFFFFFFFFFFuLL);
  v86 = v19[2].m128i_u8[2];
  if ( v86 >> 6 != v73 )
  {
    sub_140267E78((__int64)v19, v73, 1);
    v86 = v19[2].m128i_u8[2];
  }
  v19[1].m128i_i64[1] = v19[1].m128i_i64[1] & 0xC000000000000000uLL | 1;
  v19[2].m128i_i8[3] = v83 | v19[2].m128i_i8[3] & 0xF8;
  v19->m128i_i64[1] = v156;
  v87 = v86 & 0xF8 | 6;
  v19[2].m128i_i8[2] = v87;
  v19[2].m128i_i8[2] = v87 | 0x10;
  if ( (a5 & 2) != 0 )
  {
    v88 = v19[2].m128i_i8[3];
    if ( (v88 & 8) != 0 || (v88 & 7u) > 2 )
      v19[2].m128i_i8[3] = v88 & 0xF8 | 2;
  }
  if ( (*(_DWORD *)(v165 + 56) & 0x20) != 0 || !*(_QWORD *)(v165 + 64) )
    v166 = 0LL;
  v89 = (int *)(v165 + 72);
  v90 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v90 <= 0xFu )
  {
    v79 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v78 = (-1 << (v90 + 1)) & 4u | *(_DWORD *)(v79 + 20);
    *(_DWORD *)(v79 + 20) = v78;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_140461A66(v89, v90);
  }
  else
  {
    v153 = 0;
    v91 = KeGetCurrentPrcb();
    v92 = *((_QWORD *)v91 + 4375);
    if ( v92 )
    {
      if ( *((_BYTE *)v91 + 32) <= 1u )
      {
        v93 = *(_DWORD *)(v92 + 24);
        *(_DWORD *)(v92 + 24) = v93 + 1;
        if ( v93 == -1 )
          sub_140418E4C(v91);
      }
    }
    if ( _interlockedbittestandset(v89, 0x1Fu) )
    {
      v94 = *((_QWORD *)v91 + 4375);
      if ( v94 )
      {
        if ( *((_BYTE *)v91 + 32) <= 1u )
        {
          v95 = *(_DWORD *)(v94 + 24) - 1;
          *(_DWORD *)(v94 + 24) = v95;
          if ( !v95 )
            sub_140418E4C(v91);
        }
      }
      v153 = sub_140220C30(v89, v90);
    }
    for ( j = *v89; (*v89 & 0xBFFFFFFF) != 0x80000000; j = *v89 )
    {
      if ( (j & 0x40000000) == 0 )
        _InterlockedOr(v89, 0x40000000u);
      sub_1402F32E0(&v153);
    }
  }
  ++*(_QWORD *)(v165 + 32);
  if ( v166 )
    ++*(_DWORD *)(v166 + 104);
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    sub_14063D8B0(v89, retaddr);
  else
    *v89 = 0;
  v97 = KeGetCurrentPrcb();
  v98 = *((_QWORD *)v97 + 4375);
  if ( v98 )
  {
    if ( *((_BYTE *)v97 + 32) <= 1u )
    {
      v99 = *(_DWORD *)(v98 + 24) - 1;
      *(_DWORD *)(v98 + 24) = v99;
      if ( !v99 )
        sub_140418E4C(v97);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v100 = KeGetCurrentIrql();
      if ( v100 <= 0xFu && v90 <= 0xFu && v100 >= 2u )
      {
        v101 = KeGetCurrentPrcb();
        v79 = *((_QWORD *)v101 + 4375);
        v98 = -1LL << (v90 + 1);
        v102 = ~(unsigned __int16)v98;
        v37 = (v102 & *(_DWORD *)(v79 + 20)) == 0;
        v78 = (unsigned int)v102 & *(_DWORD *)(v79 + 20);
        *(_DWORD *)(v79 + 20) = v78;
        if ( v37 )
          sub_140418E4C(v101);
      }
    }
  }
  __writecr8(v90);
  v103 = ((v158 & 0xFFFFFFFFFFLL) << 12) | qword_140016200[v154 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
  if ( (v154 & 5) == 4 )
    v103 = ((v158 & 0xFFFFFFFFFFLL) << 12) | qword_140016200[v154 & 0x1F] & 0xFFF0000000000E7FuLL | 0x163;
  v104 = v103 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  *(_QWORD *)v156 = v104;
  *v167 = v104;
  if ( Sizea )
  {
    v173 = 0LL;
    v174 = 0LL;
    sub_1402B1E40(v19, &v173);
  }
  if ( (v19[2].m128i_i8[2] & 7) != 6 )
    sub_1405AD6C8(v19, v98, v78, v79);
  v105 = (v19[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) - 1;
  v106 = v19[1].m128i_i64[1] ^ (v105 ^ v19[1].m128i_i64[1]) & 0x3FFFFFFFFFFFFFFFLL;
  v19[1].m128i_i64[1] = v106;
  if ( !v105 )
  {
    if ( v19[2].m128i_i64[1] < 0 )
    {
      v107 = *v70;
      v108 = ((unsigned int)v19->m128i_i64[1] >> 3) & 0x1FF;
      v109 = 4;
      v110 = *(unsigned __int8 *)(48 * (v19[2].m128i_i64[1] & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFDELL) >> 6;
      if ( !v110 || v110 == 3 )
      {
        v109 = 12;
      }
      else if ( v110 == 2 )
      {
        v109 = 28;
      }
      v111 = sub_1402CBD10(0LL, v19[2].m128i_i64[1] & 0xFFFFFFFFFFLL, v109 | 0xA0000000);
      v112 = 0LL;
      v113 = 0LL;
      v114 = KeGetCurrentPrcb();
      v115 = *((_QWORD *)v114 + 4199);
      if ( v115 )
      {
        v113 = sub_1402C6260(v115 + 12448, 3LL, 1LL, 0LL);
        v112 = (__int64 *)(((v113 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        *(_QWORD *)(v115 + 12344) = v112;
      }
      if ( !v113 )
      {
        v113 = (*((_QWORD *)v114 + 4272) & 0xFFFFFFFFFFFFF000uLL) + ((*((_QWORD *)v114 + 4272) & 0xFFFLL) << 12);
        v112 = (__int64 *)(((v113 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      *v112 = v111;
      v116 = (ULONG_PTR *)(v113 + 8 * v108);
      if ( (__m128i *)(48 * ((*v116 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) != v19 )
        KeBugCheckEx(0x4Eu, 6uLL, 0xAAAAAAAAAAAAAAABuLL * (v168 >> 4), v113 + (unsigned int)v108, *v116);
      v117 = v107 & 0x3E0 | (((*v116 >> 12) & 0xFFFFFFFFFFLL) << 12) | 0x800;
      v118 = qword_140C50780;
      if ( qword_140C50780 )
      {
        if ( (v117 & qword_140C50780) != 0 )
          v117 = v107 & 0x3E0 | (((*v116 >> 12) & 0xFFFFFFFFFFLL) << 12) | 0x810;
        else
          v117 |= qword_140C50780;
      }
      *v116 = v117;
      LOBYTE(v118) = 17;
      sub_1402BEDD0(v113, v118, 0x80000000LL);
      v106 = v19[1].m128i_u64[1];
      v70 = (unsigned __int64 *)&v19[1];
      v71 = -9LL;
    }
    --v19[2].m128i_i16[0];
    v119 = (v106 >> 62) & 1;
    if ( v19[2].m128i_i16[0] )
    {
      v120 = v19[2].m128i_i8[2];
      if ( (_DWORD)v119 )
      {
        v121 = v120 | 7;
      }
      else if ( (v120 & 0x10) != 0 )
      {
        v121 = v120 & 0xF8 | 3;
      }
      else
      {
        v121 = v120 & 0xF8 | 2;
      }
      v19[2].m128i_i8[2] = v121;
      if ( (*(_DWORD *)v70 & 0x400LL) == 0 && (unsigned int)sub_1402E76C0(v70) )
        *(_BYTE *)(*(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v19[2].m128i_i64[1] >> 43) & 0x3FF)) + 699LL) = 1;
    }
    else if ( (_DWORD)v119 )
    {
      v122 = v19[2].m128i_i8[3];
      if ( (v122 & 0x10) != 0 )
        v19[2].m128i_i8[3] = v122 & 0xEF;
      sub_140274E48(*(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v19[2].m128i_i64[1] >> 43) & 0x3FF)), *v70, 1);
      sub_1402C6EB0(0xAAAAAAAAAAAAAAABuLL * (v168 >> 4));
    }
    else
    {
      if ( (*v70 & 0x400) != 0 )
        v71 = -2049LL;
      *v70 &= v71;
      v123 = v19[2].m128i_i8[2];
      if ( (v123 & 0x10) == 0 )
        v19[2].m128i_i8[2] = v123 & 0xF8 | 2;
      sub_1402BF9C0((ULONG_PTR)v19);
    }
  }
  _InterlockedAnd64(&v19[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(v155) = 0;
  v124 = v148;
  v125 = (volatile signed __int32 *)(v148 - 0x21FFFFFFFFE8LL);
  while ( _interlockedbittestandset64(v125, 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v155);
    while ( *(__int64 *)v125 < 0 );
  }
  *(_BYTE *)(v148 - 0x21FFFFFFFFDELL) &= ~0x20u;
  if ( !*(_WORD *)Src )
    sub_1405AD67C(v29);
  v126 = *(_WORD *)Src - 1;
  *(_WORD *)Src = v126;
  if ( !v126 && (*(_QWORD *)(v29 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_323;
  v127 = *(_QWORD *)(v29 + 40);
  if ( (v127 & 0x10000000000LL) == 0 && (v127 & 0x20000000000000LL) == 0 )
  {
    v128 = *(_QWORD *)v125 & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v126 )
      goto LABEL_294;
    if ( v126 == 1 )
    {
      if ( !v128 )
        goto LABEL_293;
LABEL_294:
      v129 = *(_QWORD *)(v148 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
      if ( v129 > 0xFFFFF6BFFFFFFF78uLL || v129 < 0xFFFFF68000000000uLL )
      {
        v130 = *(_BYTE *)(v148 - 0x21FFFFFFFFDDLL);
        if ( (v130 & 0x20) != 0 )
        {
          *(_BYTE *)(v148 - 0x21FFFFFFFFDDLL) = v130 & 0xDF;
          goto LABEL_322;
        }
      }
      v131 = 0;
      if ( v127 < 0 && (*(_DWORD *)(v148 - 0x21FFFFFFFFF0LL) & 0x400LL) != 0 )
      {
        v131 = 1;
      }
      else if ( v129 <= 0xFFFFF6BFFFFFFF78uLL
             && v129 >= 0xFFFFF68000000000uLL
             && (*(_BYTE *)(v148 - 0x21FFFFFFFFDDLL) & 0x20) != 0 )
      {
        v131 = 1;
      }
      else if ( !v126 && (*(_QWORD *)v125 & 0x4000000000000000LL) != 0 )
      {
        v131 = 1;
      }
      v132 = ((unsigned __int64)v127 >> 43) & 0x3FF;
      v133 = *(_QWORD *)(qword_140C51F48 + 8 * v132);
      if ( v131 )
        sub_14028CE10(*(_QWORD *)(qword_140C51F48 + 8 * v132), 1LL);
      v134 = 1LL;
      if ( (ULONG_PTR *)v133 != &StartContext )
        goto LABEL_320;
      v135 = KeGetCurrentPrcb();
      v136 = *((int *)v135 + 8615);
      if ( (_DWORD)v136 == -1 )
        goto LABEL_320;
      if ( (unsigned __int64)(v136 + 1) <= 0x100 )
      {
        do
        {
          v137 = _InterlockedCompareExchange((volatile signed __int32 *)v135 + 8615, v136 + 1, v136);
          v37 = (_DWORD)v136 == v137;
          LODWORD(v136) = v137;
          if ( v37 )
            goto LABEL_321;
        }
        while ( v137 != -1 && (unsigned __int64)(v137 + 1LL) <= 0x100 );
      }
      if ( (int)v136 > 192
        && (_DWORD)v136 == _InterlockedCompareExchange((volatile signed __int32 *)v135 + 8615, 192, v136) )
      {
        v134 = (int)v136 - 192 + 1LL;
      }
      if ( v134 )
LABEL_320:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v133 + 16960), v134);
LABEL_321:
      v124 = v148;
LABEL_322:
      if ( !v126 )
LABEL_323:
        sub_140338500(v29, 0xAAAAAAAAAAAAAAABuLL * (v124 >> 4));
    }
    else if ( v126 == 2 && v128 )
    {
LABEL_293:
      if ( (*(_BYTE *)(v148 - 0x21FFFFFFFFDELL) & 8) != 0 )
        goto LABEL_294;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)v125, 0x7FFFFFFFFFFFFFFFuLL);
  v138 = v147;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v139 = KeGetCurrentIrql();
      if ( v139 <= 0xFu && v147 <= 0xFu && v139 >= 2u )
      {
        v140 = KeGetCurrentPrcb();
        v141 = *((_QWORD *)v140 + 4375);
        v138 = v147;
        v142 = ~(unsigned __int16)(-1LL << (v147 + 1));
        v37 = (v142 & *(_DWORD *)(v141 + 20)) == 0;
        *(_DWORD *)(v141 + 20) &= v142;
        if ( v37 )
          sub_140418E4C(v140);
      }
    }
  }
  __writecr8(v138);
  *(_DWORD *)v181[0] = 0;
  if ( Sizea )
  {
    *((_QWORD *)&v174 + 1) |= 4uLL;
    v181[0] = &v173;
    v181[1] = 32LL;
    sub_14035EDE4((unsigned int)v181, 1, 536870913, 642, 289413892);
  }
  return v149 != 0 ? 4 : 0;
}
