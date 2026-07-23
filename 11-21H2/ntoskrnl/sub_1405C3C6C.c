/*
 * XREFs of sub_1405C3C6C @ 0x1405C3C6C
 * Callers:
 *     sub_1403265B0 @ 0x1403265B0 (sub_1403265B0.c)
 * Callees:
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_14027449C @ 0x14027449C (sub_14027449C.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_14027D364 @ 0x14027D364 (sub_14027D364.c)
 *     sub_14027DA5C @ 0x14027DA5C (sub_14027DA5C.c)
 *     sub_14027FE9C @ 0x14027FE9C (sub_14027FE9C.c)
 *     sub_1402803FC @ 0x1402803FC (sub_1402803FC.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14029BA28 @ 0x14029BA28 (sub_14029BA28.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 *     sub_1405C4C94 @ 0x1405C4C94 (sub_1405C4C94.c)
 */

volatile signed __int32 *__fastcall sub_1405C3C6C(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 *a5,
        void *a6,
        _BYTE *a7)
{
  volatile signed __int32 *v7; // r14
  __int64 v10; // rcx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
  bool v15; // zf
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 *v21; // r12
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 v24; // r15
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 *v28; // rcx
  unsigned __int64 v29; // rdx
  char v30; // r12
  unsigned int v31; // ebx
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  unsigned int v34; // ebx
  ULONG_PTR v35; // r8
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v38; // rdx
  signed __int32 v39; // eax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int64 v42; // rdx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int8 CurrentIrql; // r10
  __int64 v48; // r9
  unsigned int v49; // eax
  unsigned int v50; // r11d
  __int64 v51; // rax
  char *v52; // rbx
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  __int64 v55; // r8
  int v56; // eax
  unsigned __int64 v57; // r8
  struct _KPRCB *v58; // r9
  __int64 v59; // rdx
  signed __int32 v60; // eax
  __int64 v61; // r14
  ULONG_PTR v62; // rcx
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r9
  __int64 v65; // r8
  int v66; // eax
  unsigned int v67; // edx
  unsigned int v68; // edx
  int v69; // eax
  char v70; // bl
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  volatile signed __int32 *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdi
  _WORD *v79; // rbx
  unsigned __int64 v80; // r8
  struct _KPRCB *v81; // r9
  __int64 v82; // rdx
  signed __int32 v83; // eax
  __int64 v84; // rdx
  struct _KPRCB *v85; // r8
  __int64 v86; // r9
  signed __int32 v87; // eax
  char v88; // [rsp+70h] [rbp-1C8h]
  unsigned int v89; // [rsp+78h] [rbp-1C0h]
  unsigned __int8 v90; // [rsp+78h] [rbp-1C0h]
  int v91; // [rsp+78h] [rbp-1C0h]
  unsigned __int8 v92[8]; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 *v93; // [rsp+88h] [rbp-1B0h] BYREF
  ULONG_PTR v94; // [rsp+90h] [rbp-1A8h] BYREF
  unsigned __int64 v95; // [rsp+98h] [rbp-1A0h]
  unsigned __int8 *v96; // [rsp+A0h] [rbp-198h]
  void *Buf2; // [rsp+A8h] [rbp-190h] BYREF
  __int64 v98; // [rsp+B0h] [rbp-188h] BYREF
  unsigned __int64 v99; // [rsp+B8h] [rbp-180h] BYREF
  char *v100; // [rsp+C0h] [rbp-178h]
  __int64 v101; // [rsp+C8h] [rbp-170h] BYREF
  ULONG_PTR v102; // [rsp+D0h] [rbp-168h]
  _BYTE *v103; // [rsp+D8h] [rbp-160h]
  __int64 v104; // [rsp+E0h] [rbp-158h] BYREF
  unsigned __int64 v105; // [rsp+E8h] [rbp-150h]
  volatile signed __int32 *v106; // [rsp+F0h] [rbp-148h]
  __int64 v107; // [rsp+F8h] [rbp-140h]
  __int128 v108; // [rsp+100h] [rbp-138h] BYREF
  __int128 Buf1; // [rsp+110h] [rbp-128h] BYREF
  __int128 v110; // [rsp+120h] [rbp-118h]
  __int128 v111; // [rsp+130h] [rbp-108h]
  _OWORD v112[3]; // [rsp+140h] [rbp-F8h] BYREF
  _BYTE v113[128]; // [rsp+170h] [rbp-C8h] BYREF

  v7 = (volatile signed __int32 *)a5;
  v98 = a2;
  v93 = a1;
  v99 = a4;
  v10 = a1[7];
  Buf2 = a6;
  v12 = *((_DWORD *)a1 + 20);
  v13 = *a1;
  v89 = v12 >> 6;
  v103 = a7;
  *a7 = 0;
  v14 = ((v13 & 0xFFFFFFFFFFFFF000uLL) - (v13 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v15 = (*(_DWORD *)(a2 + 48) & 0x200000) == 0;
  v107 = a3;
  v106 = (volatile signed __int32 *)a5;
  v101 = 0LL;
  v94 = 0LL;
  Buf1 = 0LL;
  v100 = (char *)v10;
  v110 = 0LL;
  v105 = v13 & 0xFFFFFFFFFFFF0000uLL;
  v111 = 0LL;
  v108 = 0LL;
  if ( v15 )
  {
    v16 = sub_140319600(a2, v13 >> 12, 4, &v101);
    if ( !v16 || !v101 || v16 != a3 )
      return v7;
    v17 = *(_QWORD *)(v101 + 8);
    v18 = v17 + 8 * (*(unsigned int *)(v101 + 44) - (unsigned __int64)(*(_DWORD *)(v101 + 52) & 0x3FFFFFFF));
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v17 )
      v17 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v18 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v18 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v17 >= v18 || a3 - 8 * v14 < v17 || a3 + 8 * (16 - v14) > v18 )
      return v7;
    v19 = *(_WORD *)(*(_QWORD *)v101 + 60LL) & 0x3FF;
  }
  else
  {
    v20 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
      return v7;
    v19 = *(unsigned __int16 *)(v10 + 174);
  }
  v21 = (__int64 *)v113;
  v22 = 16LL;
  v23 = 1LL;
  v24 = *(_QWORD *)(qword_140C51F48 + 8 * v19);
  v25 = a3 - 8 * v14;
  do
  {
    v26 = sub_140317A10(v25);
    v25 += 8LL;
    *v21++ = v26;
    --v22;
  }
  while ( v22 );
  v27 = -1LL;
  v28 = (__int64 *)v113;
  v95 = -1LL;
  v29 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a5 + 0x220000000000LL) >> 4);
  v30 = 0;
  v102 = v29;
  v31 = 0;
  while ( 1 )
  {
    v104 = *v28;
    if ( (v104 & 1) != 0 )
      break;
    ++v31;
    ++v28;
    if ( v31 >= 0x10 )
      goto LABEL_24;
  }
  v32 = sub_140317A10((unsigned __int64)&v104);
  v27 = (v32 >> 12) & 0xFFFFFFFFFFLL;
  v95 = v27;
  if ( (unsigned __int16)v32 >> 12 != (unsigned __int64)v31 )
    return v7;
  LOBYTE(v29) = v102;
LABEL_24:
  v96 = 0LL;
  v88 = 0;
  if ( v31 != 16 )
  {
    v35 = v14 - v31 + v27;
    v95 = v35;
    if ( v35 > qword_140C50840 || (*(_QWORD *)(48 * v35 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      return v7;
    v96 = (unsigned __int8 *)(48 * v35 - 0x220000000000LL);
    if ( v96 != a5 )
    {
      v34 = *((_DWORD *)sub_1402C1550(v35) + 2);
      goto LABEL_34;
    }
LABEL_31:
    *v103 = 1;
    return v7;
  }
  if ( (v29 & 0xF) == v14 )
    goto LABEL_31;
  if ( (int)sub_14026A784(v24, 1LL, 0LL, 0) < 0 )
    return v7;
  v30 = 1;
  v88 = 1;
  sub_140339C20(v100, (*(_DWORD *)(v98 + 48) >> 12) & 0x7F, (__int64)&v108);
  v34 = HIDWORD(v108) >> byte_140C506CC;
  _InterlockedAdd((volatile signed __int32 *)v108, 1u);
LABEL_34:
  *(_BYTE *)(*(_QWORD *)(v24 + 16) + 24512LL * v34 + 3251) = 1;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)sub_140274508((__int64)a5, 0LL, v33) )
  {
    if ( v30 == 1 )
    {
      sub_14028CE10(v24, 1LL);
      if ( (ULONG_PTR *)v24 != &StartContext )
        goto LABEL_46;
      CurrentPrcb = KeGetCurrentPrcb();
      v38 = *((int *)CurrentPrcb + 8615);
      if ( (_DWORD)v38 == -1 )
        goto LABEL_46;
      if ( (unsigned __int64)(v38 + 1) <= 0x100 )
      {
        do
        {
          v39 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v38 + 1, v38);
          v15 = (_DWORD)v38 == v39;
          LODWORD(v38) = v39;
          if ( v15 )
            return v7;
        }
        while ( v39 != -1 && (unsigned __int64)(v39 + 1LL) <= 0x100 );
      }
      if ( (int)v38 > 192
        && (_DWORD)v38 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v38) )
      {
        v23 = (int)v38 - 192 + 1LL;
      }
      if ( v23 )
LABEL_46:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 16960), v23);
    }
    return v7;
  }
  v40 = *((_OWORD *)a5 + 1);
  v112[0] = *(_OWORD *)a5;
  v41 = *((_OWORD *)a5 + 2);
  v112[1] = v40;
  v112[2] = v41;
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    sub_14027449C((__int64)Buf2, 0);
    LOBYTE(v42) = 17;
    v43 = *((_OWORD *)Buf2 + 1);
    Buf1 = *(_OWORD *)Buf2;
    v44 = *((_OWORD *)Buf2 + 2);
    v110 = v43;
    v111 = v44;
    sub_140334790((__int64)Buf2, v42, v45, v46);
  }
  v100 = (char *)sub_14027DA5C((__int64)(v93 + 7), 1, v92);
  if ( v88 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v90 = CurrentIrql;
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v48 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v48 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v92[0] = CurrentIrql;
    v49 = sub_14033D7D0((v99 >> 5) & 0x1F);
    v51 = sub_140267060(v24, v105, v50, v34, v49, 4, 0LL);
    v52 = (char *)v51;
    if ( !v51 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v53 = KeGetCurrentIrql();
          if ( v53 <= 0xFu && v90 <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v55 = *((_QWORD *)v54 + 4375);
            v56 = ~(unsigned __int16)(-1LL << (v90 + 1));
            v15 = (v56 & *(_DWORD *)(v55 + 20)) == 0;
            *(_DWORD *)(v55 + 20) &= v56;
            if ( v15 )
              sub_140418E4C((__int64)v54);
          }
        }
      }
      __writecr8(v90);
      sub_14028CE10(v24, 1LL);
      v57 = 1LL;
      if ( (ULONG_PTR *)v24 != &StartContext )
        goto LABEL_72;
      v58 = KeGetCurrentPrcb();
      v59 = *((int *)v58 + 8615);
      if ( (_DWORD)v59 == -1 )
        goto LABEL_72;
      if ( (unsigned __int64)(v59 + 1) <= 0x100 )
      {
        do
        {
          v60 = _InterlockedCompareExchange((volatile signed __int32 *)v58 + 8615, v59 + 1, v59);
          v15 = (_DWORD)v59 == v60;
          LODWORD(v59) = v60;
          if ( v15 )
            goto LABEL_73;
        }
        while ( v60 != -1 && (unsigned __int64)(v60 + 1LL) <= 0x100 );
      }
      if ( (int)v59 > 192 && (_DWORD)v59 == _InterlockedCompareExchange((volatile signed __int32 *)v58 + 8615, 192, v59) )
        v57 = (int)v59 - 192 + 1LL;
      if ( v57 )
LABEL_72:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 16960), v57);
LABEL_73:
      v91 = -1073741801;
      goto LABEL_93;
    }
    sub_1402C6AA0(v51, 2, 2, 1, 0LL, 0LL, 0LL);
    v61 = 16LL;
    v62 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v52 + 0x220000000000LL) >> 4);
    v94 = v62;
    do
    {
      if ( (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
      {
        sub_1405AD468(v62, 1uLL);
        v62 = v94;
      }
      if ( (v62 & 0xF) == v14 )
      {
        v95 = v62;
        v96 = (unsigned __int8 *)v52;
      }
      else
      {
        sub_140268408((__int64)v52);
        v62 = v94;
      }
      ++v62;
      v52 += 48;
      v94 = v62;
      --v61;
    }
    while ( v61 );
    v7 = v106;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v63 = KeGetCurrentIrql();
        if ( v63 <= 0xFu && v90 <= 0xFu && v63 >= 2u )
        {
          v64 = KeGetCurrentPrcb();
          v65 = *((_QWORD *)v64 + 4375);
          v66 = ~(unsigned __int16)(-1LL << (v90 + 1));
          v15 = (v66 & *(_DWORD *)(v65 + 20)) == 0;
          *(_DWORD *)(v65 + 20) &= v66;
          if ( v15 )
            sub_140418E4C((__int64)v64);
        }
      }
    }
    __writecr8(v90);
    v91 = 0;
  }
  else
  {
    v67 = a5[34];
    v96 = (unsigned __int8 *)(48 * v95 - 0x220000000000LL);
    v68 = v67 >> 6;
    v69 = ((((v89 & 1) == 0) + 8256) << 17) | 8;
    if ( *((void (__noreturn **)())KeGetCurrentThread() + 164) != sub_1403C6D20 )
      v69 = (((v89 & 1) == 0) + 8256) << 17;
    v91 = sub_140277D10(v24, v95, v95, 0LL, 0, 1uLL, v68, v34, 0x80000000, v69, 0, 0LL, (__int64 *)&v94);
  }
LABEL_93:
  v70 = 0;
  sub_14027D364(v93 + 7, (__int64)v100);
  v74 = (volatile signed __int32 *)Buf2;
  if ( Buf2 )
  {
    *((_QWORD *)&v110 + 1) |= 0x8000000000000000uLL;
    sub_14027FE9C((__int64)Buf2, 0LL, v72);
    LODWORD(v98) = 0;
    while ( _interlockedbittestandset64(v74 + 6, 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v98, v75, v76, v77);
      while ( *((__int64 *)v74 + 3) < 0 );
    }
    if ( memcmp(&Buf1, (const void *)v74, 0x30uLL) )
      v70 = 1;
    _InterlockedAnd64((volatile signed __int64 *)v74 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    sub_14029BA28((__int64)v74);
  }
  LODWORD(Buf2) = 0;
  while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
  {
    do
      sub_1402F32E0(&Buf2, v71, v72, v73);
    while ( *((__int64 *)v7 + 3) < 0 );
  }
  if ( !v70 && !memcmp(v112, (const void *)v7, 0x30uLL) && (*((_QWORD *)v7 + 3) & 0x4000000000000000LL) == 0 )
  {
    v78 = v107;
    if ( (unsigned int)sub_1402803FC((__int64)v93, *v93, v107, &v99) )
    {
      if ( v91 < 0 )
      {
        sub_1403377E0((__int64)v7);
        return v7;
      }
      sub_1402E7D60(v95, v102, 0LL, (v99 & 0x40) != 0 ? 16 : 8);
      v79 = v96;
      sub_1405C4C94(v78, v7, v96);
      v79[16] = 0;
      v80 = 1LL;
      if ( (ULONG_PTR *)v24 != &StartContext )
        goto LABEL_121;
      v81 = KeGetCurrentPrcb();
      v82 = *((int *)v81 + 8615);
      if ( (_DWORD)v82 == -1 )
        goto LABEL_121;
      if ( (unsigned __int64)(v82 + 1) <= 0x100 )
      {
        do
        {
          v83 = _InterlockedCompareExchange((volatile signed __int32 *)v81 + 8615, v82 + 1, v82);
          v15 = (_DWORD)v82 == v83;
          LODWORD(v82) = v83;
          if ( v15 )
            goto LABEL_122;
        }
        while ( v83 != -1 && (unsigned __int64)(v83 + 1LL) <= 0x100 );
      }
      if ( (int)v82 > 192 && (_DWORD)v82 == _InterlockedCompareExchange((volatile signed __int32 *)v81 + 8615, 192, v82) )
        v80 = (int)v82 - 192 + 1LL;
      if ( v80 )
LABEL_121:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 16960), v80);
LABEL_122:
      *v103 = 1;
      return (volatile signed __int32 *)v79;
    }
  }
  if ( v91 >= 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v7 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    sub_140268408((__int64)v96);
    sub_14028CE10(v24, 1LL);
    if ( (ULONG_PTR *)v24 != &StartContext )
      goto LABEL_134;
    v85 = KeGetCurrentPrcb();
    v84 = *((int *)v85 + 8615);
    if ( (_DWORD)v84 == -1 )
      goto LABEL_134;
    if ( (unsigned __int64)(v84 + 1) <= 0x100 )
    {
      do
      {
        v87 = _InterlockedCompareExchange((volatile signed __int32 *)v85 + 8615, v84 + 1, v84);
        v15 = (_DWORD)v84 == v87;
        v84 = v87;
        if ( v15 )
          goto LABEL_135;
      }
      while ( v87 != -1 && (unsigned __int64)(v87 + 1LL) <= 0x100 );
    }
    if ( (int)v84 > 192 && (_DWORD)v84 == _InterlockedCompareExchange((volatile signed __int32 *)v85 + 8615, 192, v84) )
      v23 = (int)v84 - 192 + 1LL;
    if ( v23 )
LABEL_134:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 16960), v23);
LABEL_135:
    LODWORD(v93) = 0;
    while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v93, v84, (__int64)v85, v86);
      while ( *((__int64 *)v7 + 3) < 0 );
    }
  }
  sub_140336AD8((__int64)v7);
  return 0LL;
}
