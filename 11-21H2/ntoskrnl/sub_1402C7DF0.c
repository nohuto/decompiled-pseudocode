/*
 * XREFs of sub_1402C7DF0 @ 0x1402C7DF0
 * Callers:
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 * Callees:
 *     sub_140220664 @ 0x140220664 (sub_140220664.c)
 *     sub_140230700 @ 0x140230700 (sub_140230700.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_140268A70 @ 0x140268A70 (sub_140268A70.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405B766C @ 0x1405B766C (sub_1405B766C.c)
 */

__int64 __fastcall sub_1402C7DF0(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int64 v2; // rdi
  signed __int64 v3; // r12
  unsigned __int16 *v4; // r14
  unsigned __int64 v5; // r13
  int v6; // edx
  __int64 v7; // r11
  ULONG_PTR v8; // r8
  unsigned __int64 v9; // r10
  char *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // r9
  volatile signed __int64 *v14; // r8
  unsigned __int64 CurrentThread; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // r11
  int v19; // eax
  _QWORD *v20; // rax
  ULONG_PTR v21; // r9
  unsigned int v22; // eax
  unsigned int v23; // r11d
  int v24; // r9d
  __int64 v25; // r10
  __int64 v26; // r12
  __int64 v27; // r13
  int v28; // edx
  unsigned int v29; // r8d
  int v30; // esi
  int v31; // r9d
  unsigned __int64 v32; // rax
  int v33; // edx
  BOOL v34; // r8d
  __int128 v35; // xmm6
  int v36; // ecx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // xmm0_8
  char v39; // r11
  char v40; // r11
  __int64 v41; // r13
  unsigned __int64 v42; // r9
  __int8 v43; // bl
  char v44; // r10
  __m128i v45; // xmm0
  _OWORD *v46; // rcx
  __m128i v47; // xmm1
  _OWORD *i; // rax
  __int64 v49; // r10
  __int64 v50; // rcx
  unsigned __int64 v51; // r8
  __m128i v52; // xmm2
  unsigned __int64 v53; // xmm0_8
  __m128i *v54; // rdx
  __m128i v55; // xmm1
  __m128i v56; // xmm0
  __int64 v57; // r9
  __m128i *v58; // rcx
  unsigned int j; // ebx
  ULONG_PTR v61; // r8
  int v62; // r9d
  int v63; // ecx
  _QWORD *v64; // rcx
  unsigned __int64 v65; // rcx
  volatile signed __int64 *v66; // rbx
  unsigned __int64 v67; // [rsp+30h] [rbp-D0h]
  signed __int64 v68; // [rsp+30h] [rbp-D0h]
  unsigned int v69; // [rsp+30h] [rbp-D0h]
  int v70; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v71; // [rsp+40h] [rbp-C0h]
  __int64 v72; // [rsp+48h] [rbp-B8h]
  unsigned int v73; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v74; // [rsp+58h] [rbp-A8h]
  int v75; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  __int128 v79; // [rsp+80h] [rbp-80h]
  __int128 v80; // [rsp+90h] [rbp-70h] BYREF
  __int128 v81; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v82; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v83; // [rsp+C0h] [rbp-40h]
  __int128 v84; // [rsp+D0h] [rbp-30h]
  __m128i v85; // [rsp+E0h] [rbp-20h] BYREF
  __m128i v86; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v87; // [rsp+100h] [rbp+0h]

  v78 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  if ( !qword_140D06950 )
    return 0LL;
  v1 = 48 * a1 - 0x220000000000LL;
  v2 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v70 = *(_BYTE *)(v1 + 34) & 7;
  v3 = 48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL);
  v4 = *(unsigned __int16 **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v1 + 40) >> 43) & 0x3FFLL));
  v5 = v3 - 0x220000000000LL;
  v6 = dword_140C506C8;
  v7 = v3 - 0x220000000000LL + 768;
  v71 = v3 - 0x220000000000LL;
  v8 = 0xAAAAAAAAAAAAAAABuLL * (v3 >> 4);
  v72 = v7;
  v9 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( dword_140C506C4 > (unsigned int)dword_140C506C8
    || (v10 = (char *)qword_140C50708 + 16 * dword_140C506C4, v8 < *(_QWORD *)v10)
    || dword_140C506C4 != dword_140C506C8 && v8 >= *((_QWORD *)v10 + 2) )
  {
    v62 = 0;
    if ( dword_140C506C8 < 0 )
LABEL_122:
      KeBugCheckEx(0x1Au, 0x6201uLL, v8, 0LL, 0LL);
    while ( 1 )
    {
      v63 = (v62 + v6) >> 1;
      v10 = (char *)qword_140C50708 + 16 * v63;
      if ( v8 < *(_QWORD *)v10 )
      {
        if ( !v63 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v8, (ULONG_PTR)qword_140C50708, 0LL);
        v6 = v63 - 1;
      }
      else
      {
        if ( v63 == dword_140C506C8 || v8 < *((_QWORD *)v10 + 2) )
        {
          dword_140C506C4 = (v62 + v6) >> 1;
          break;
        }
        v62 = v63 + 1;
      }
      if ( v6 < v62 )
        goto LABEL_122;
    }
  }
  v11 = *((unsigned int *)v10 + 2);
  if ( v5 != v7 )
  {
    v12 = (_QWORD *)(v5 + 40);
    v13 = (_QWORD *)(v3 - 0x21FFFFFFFFD8LL);
    while ( v9 <= qword_140C50840
         && (*v13 & 0x40000000000000LL) != 0
         && *(unsigned __int16 **)(qword_140C51F48 + 8 * ((*v12 >> 43) & 0x3FFLL)) == v4
         && (*((_BYTE *)v12 - 6) & 7u) <= 1
         && (*v12 & 0x10000000000LL) == 0 )
    {
      v12 += 6;
      ++v9;
      v13 += 6;
      if ( v12 - 5 == (_QWORD *)v7 )
        goto LABEL_13;
    }
    return 0LL;
  }
LABEL_13:
  v14 = (volatile signed __int64 *)(v4 + 96);
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v78 = 0LL;
  v74 = v2;
  v87 = 0LL;
  BugCheckParameter2 = (volatile signed __int64 *)(v4 + 96);
  v77 = CurrentThread;
  _disable();
  v16 = *(unsigned __int8 *)(CurrentThread + 792);
  if ( *(_BYTE *)(CurrentThread + 792) )
    goto LABEL_14;
  v16 = sub_14029F6A8((__int64)(v4 + 96), CurrentThread);
  v14 = (volatile signed __int64 *)(v4 + 96);
  if ( v16 )
  {
    CurrentThread = v77;
LABEL_14:
    _BitScanForward((unsigned int *)&v17, v16);
    *(_BYTE *)(CurrentThread + 792) = v16 & ~(1 << v17);
    _enable();
    v18 = CurrentThread + 96 * v17 + 1696;
    v67 = v18;
    if ( (unsigned __int64)v14 - qword_140C50630 < 0x8000000000LL )
    {
      v19 = sub_140287F30(*(_QWORD *)(CurrentThread + 184));
      v18 = v67;
      v14 = (volatile signed __int64 *)(v4 + 96);
    }
    else
    {
      v19 = -1;
    }
    *(_DWORD *)(v18 + 8) = v19;
    *(_QWORD *)v18 = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_17;
  }
  v18 = 0LL;
LABEL_17:
  if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) && !sub_140220664((signed __int64 *)v14, 0) )
  {
    if ( v18 )
      sub_140353BB0((ULONG_PTR)BugCheckParameter2);
    return 0LL;
  }
  if ( v18 )
    *(_BYTE *)(v18 + 18) = 1;
  v20 = (_QWORD *)(v3 - 0x21FFFFFFFFD8LL);
  v21 = v2;
  v68 = v3 - 0x21FFFFFFFFD8LL;
  while ( 1 )
  {
    if ( v5 == v1 )
    {
      v64 = (_QWORD *)(v5 + 16);
      if ( (*(_BYTE *)(v5 + 34) & 7) != 0 )
        sub_1402E89B0(v64, CurrentThread, v14);
      else
        *v64 &= 0xFFFFFFFFFFFFFC1FuLL;
      goto LABEL_33;
    }
    if ( v21 > qword_140C50840
      || (*v20 & 0x40000000000000LL) == 0
      || *(unsigned __int16 **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL)) != v4
      || (*(_BYTE *)(v5 + 34) & 7u) > 1
      || _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      goto LABEL_102;
    }
    if ( (*(_BYTE *)(v5 + 34) & 7u) > 1 )
      goto LABEL_118;
    CurrentThread = *(_QWORD *)(v5 + 40);
    if ( *(unsigned __int16 **)(qword_140C51F48 + 8 * ((CurrentThread >> 43) & 0x3FF)) != v4
      || (*(_BYTE *)(v5 + 35) & 0x40) != 0
      || (CurrentThread & 0x10000000000LL) != 0 )
    {
      goto LABEL_118;
    }
    if ( !(unsigned int)sub_1402C8740(v21) )
      break;
    v21 = v74;
    ++*((_DWORD *)&v87 + ((unsigned __int64)*(unsigned __int8 *)(v5 + 34) >> 6));
LABEL_33:
    ++v21;
    v20 = (_QWORD *)(v68 + 48);
    v74 = v21;
    v5 += 48LL;
    v68 += 48LL;
    if ( v5 == v72 )
      goto LABEL_34;
  }
  sub_14026845C(v5, 512LL);
LABEL_118:
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_102:
  if ( v5 != v72 )
  {
    v65 = v3 - 0x220000000000LL;
    if ( v71 < v5 )
    {
      v66 = (volatile signed __int64 *)(v71 + 24);
      do
      {
        if ( v65 != v1 )
        {
          sub_14026845C(v65, 512LL);
          _InterlockedAnd64(v66, 0x7FFFFFFFFFFFFFFFuLL);
          v65 = v71;
        }
        v65 += 48LL;
        v66 += 6;
        v71 = v65;
      }
      while ( v65 < v5 );
    }
    v61 = (ULONG_PTR)(v4 + 96);
    if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(BugCheckParameter2);
      v61 = (ULONG_PTR)(v4 + 96);
    }
    sub_1402AFC00(v61);
    return 0LL;
  }
LABEL_34:
  v22 = 0;
  v23 = 1;
  if ( (_DWORD)v87 )
  {
    v22 = v87;
    v23 = 0;
  }
  if ( v22 < DWORD1(v87) )
  {
    v22 = DWORD1(v87);
    v23 = 1;
  }
  if ( v22 < DWORD2(v87) )
  {
    v22 = DWORD2(v87);
    v23 = 2;
  }
  if ( v22 < HIDWORD(v87) )
    v23 = 3;
  v69 = v23;
  if ( v70 != 1 )
  {
    while ( 1 )
    {
      v5 -= 48LL;
      if ( sub_140268A70(v5, v23) )
        break;
      if ( v5 == v71 )
        goto LABEL_44;
    }
    v70 = v24;
  }
  sub_1402E89B0(&v78, CurrentThread, v14);
LABEL_44:
  v26 = v3 - 0x220000000000LL + 720;
  v73 = v25;
  v27 = v26;
  v28 = v25;
  v29 = v25;
  v30 = v24;
  do
  {
    v31 = v28;
    v75 = v28;
    if ( *(unsigned __int8 *)(v27 + 34) >> 6 != v23 )
    {
      sub_140267E78(v27, v23, v30);
      v29 = v73;
      v25 = 0LL;
      v31 = v75;
      v23 = v69;
    }
    v32 = *(_QWORD *)(v27 + 16);
    if ( qword_140C50780 && (v32 & 0x10) == 0 )
      v32 &= ~qword_140C50780;
    *(_QWORD *)(v27 + 16) = v25;
    v33 = 2;
    if ( HIDWORD(v32) == 4294967293 )
      v33 = v30;
    ++v29;
    v28 = v31 | v33;
    v73 = v29;
    v27 -= 48LL;
  }
  while ( v29 < 0x10 );
  v34 = sub_140230700();
  v35 = xmmword_140C51E30;
  v81 = xmmword_140C51E50;
  HIDWORD(v82) = v36;
  v37 = (unsigned __int64)*v4 << 43;
  DWORD2(v82) = v70;
  v80 = xmmword_140C51E40;
  v38 = _mm_srli_si128((__m128i)xmmword_140C51E50, 8).m128i_u64[0];
  v40 = v39 << 6;
  v41 = *((_QWORD *)v4 + 2) + 24512 * v11;
  *(_QWORD *)&v82 = v2;
  *((_QWORD *)&v81 + 1) = (v38 ^ v37) & 0x1FF80000000000LL ^ v38;
  LOBYTE(v83) = 17;
  BYTE4(v81) = v30 | BYTE4(xmmword_140C51E50) & 0xFD;
  v42 = v71;
  *((_QWORD *)&v80 + 1) = _mm_srli_si128((__m128i)xmmword_140C51E40, 8).m128i_u64[0] | 0x8000000000000000uLL;
  v79 = xmmword_140C51E30;
  BYTE2(v81) = v40 | BYTE2(xmmword_140C51E50) & 0x3F;
  v43 = BYTE2(v81);
  v44 = v40 & 0xFD | BYTE2(xmmword_140C51E50) & 0x3D;
  if ( !v34 )
    *(_QWORD *)&v80 = sub_14033B6A0(v80, 4294967293LL);
  BYTE2(v81) = v44 ^ (v43 ^ v44) & 7;
  if ( v71 < v71 + 768 )
  {
    v45 = _mm_loadu_si128((const __m128i *)&v81);
    v46 = (_OWORD *)(v71 + 48);
    v47 = _mm_loadu_si128((const __m128i *)&v80);
    do
    {
      for ( i = (_OWORD *)v42; i != v46; i += 3 )
      {
        *i = v35;
        i[1] = v47;
        i[2] = v45;
      }
      v42 += 768LL;
      v46 += 48;
    }
    while ( v42 < v71 + 768 );
  }
  v49 = 16LL;
  v50 = *v4;
  v51 = v2;
  v52 = (__m128i)xmmword_140C51E00;
  v86.m128i_i64[0] = xmmword_140C51E20;
  v85.m128i_i64[0] = xmmword_140C51E10;
  v53 = _mm_srli_si128((__m128i)xmmword_140C51E20, 8).m128i_u64[0];
  v54 = (__m128i *)v71;
  v86.m128i_i64[1] = (v53 ^ (v50 << 43)) & 0x1FF80000000000LL ^ v53;
  v85.m128i_i64[1] = _mm_srli_si128((__m128i)xmmword_140C51E10, 8).m128i_u64[0] | 0x8000000000000000uLL;
  v55 = _mm_loadu_si128(&v85);
  v84 = xmmword_140C51E00;
  v86.m128i_i8[2] = v40 | BYTE2(xmmword_140C51E20) & 0x3F;
  v56 = _mm_loadu_si128(&v86);
  do
  {
    if ( (v51 & 0xF) == 0 )
    {
      if ( !--v49 )
        break;
      v54 += 3;
      ++v51;
    }
    v57 = 16 - (v51 & 0xF);
    if ( ((v51 ^ (v51 + v49 - 1)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      v57 = v49;
    v58 = &v54[3 * v57];
    if ( (unsigned __int64)(48 * v57) > 0x1000 )
    {
      for ( ; v54 != v58; v54 += 3 )
      {
        _mm_stream_si128(v54, v52);
        _mm_stream_si128(v54 + 1, v55);
        _mm_stream_si128(v54 + 2, v56);
      }
      _mm_sfence();
    }
    else
    {
      for ( ; v54 != v58; v54 += 3 )
      {
        *v54 = v52;
        v54[1] = v55;
        v54[2] = v56;
      }
    }
    v51 += v57;
    v54 = v58;
    v49 -= v57;
  }
  while ( v49 );
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v41 + 22848));
  for ( j = 0; j < 0x10; ++j )
  {
    if ( v26 == v71 )
      sub_1402BEEA0((__int64)&v82);
    if ( v26 != v1 )
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v26 -= 48LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v41 + 22848));
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
  return 1LL;
}
