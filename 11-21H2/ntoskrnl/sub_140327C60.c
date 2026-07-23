/*
 * XREFs of sub_140327C60 @ 0x140327C60
 * Callers:
 *     sub_1403265B0 @ 0x1403265B0 (sub_1403265B0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14024AA58 @ 0x14024AA58 (sub_14024AA58.c)
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_140277C9C @ 0x140277C9C (sub_140277C9C.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402E7D14 @ 0x1402E7D14 (sub_1402E7D14.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140337F0C @ 0x140337F0C (sub_140337F0C.c)
 *     sub_140339370 @ 0x140339370 (sub_140339370.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033C424 @ 0x14033C424 (sub_14033C424.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__m128i *__fastcall sub_140327C60(unsigned __int64 *a1, __m128i *a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v11; // r10
  unsigned __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // ebx
  ULONG_PTR v15; // r13
  __int64 v16; // r11
  __int64 v17; // r10
  signed __int32 v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // rax
  __m128i *v26; // r14
  unsigned __int64 v27; // r15
  unsigned int v28; // ebx
  _QWORD *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rbx
  ULONG_PTR v32; // r15
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int16 v36; // si
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // r8
  __int64 v47; // rcx
  _DWORD *v48; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v50; // rdx
  bool v51; // zf
  unsigned int v52; // [rsp+20h] [rbp-78h]
  int v53; // [rsp+24h] [rbp-74h] BYREF
  int v54; // [rsp+28h] [rbp-70h] BYREF
  int v55; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v56; // [rsp+30h] [rbp-68h]
  unsigned __int64 v57; // [rsp+38h] [rbp-60h]
  __int64 v58; // [rsp+40h] [rbp-58h] BYREF
  __int128 v59; // [rsp+48h] [rbp-50h] BYREF
  unsigned int *v60; // [rsp+A0h] [rbp+8h]
  char v61; // [rsp+A0h] [rbp+8h]
  ULONG_PTR v62; // [rsp+A8h] [rbp+10h]

  v4 = a1[7];
  v5 = *a1;
  v6 = a1[2];
  v59 = 0LL;
  if ( _bittest64(&a2[2].m128i_i64[1], 0x35u)
    || byte_140C58C66
    && _bittest64(
         (const signed __int64 *)qword_140C58DE0,
         (0xAAAAAAAAAAAAAAABuLL * ((__int64)a2[0x22000000000LL].m128i_i64 >> 4)) >> 9) )
  {
    return a2;
  }
  if ( (unsigned __int16)word_140D05000 <= 1u )
    return a2;
  if ( a2[2].m128i_i16[0] )
    return a2;
  if ( (*((_BYTE *)KeGetCurrentThread() + 1384) & 0x40) != 0 )
    return a2;
  if ( !sub_140277C9C((__int64)a2) )
    return a2;
  v12 = 0LL;
  v58 = 0LL;
  v13 = sub_140339370(v11, 0LL, &v58);
  sub_140339C20(v4, v13, &v59);
  v14 = HIDWORD(v59) >> byte_140C506CC;
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)a2[0x22000000000LL].m128i_i64 >> 4);
  if ( v14 == *((_DWORD *)sub_1402C1550(v15) + 2) )
    return a2;
  v16 = 1LL;
  v17 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)a2[2].m128i_i64[1] >> 43) & 0x3FF));
  v56 = v17;
  v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v59, 1u);
  v19 = (unsigned __int16)word_140D05000;
  v52 = HIDWORD(v59) | DWORD2(v59) & v18;
  v20 = qword_140C506D8 + 4LL * v14 * (unsigned int)(unsigned __int16)word_140D05000;
  v60 = (unsigned int *)v20;
  v57 = v20 + 4LL * (unsigned __int16)word_140D05000;
  if ( v20 < v57 )
  {
    while ( 1 )
    {
      v21 = sub_1402C1550(v15);
      v19 = (unsigned __int64)v60;
      v22 = *v60;
      if ( (_DWORD)v22 == *((_DWORD *)v21 + 2) )
        return a2;
      v17 = v56;
      if ( *(_OWORD *)(*(_QWORD *)(v56 + 16) + 24512 * v22 + 22560) == 0LL )
      {
        v19 = (unsigned __int64)(v60 + 1);
        v60 = (unsigned int *)v19;
        if ( v19 < v57 )
          continue;
      }
      v16 = 1LL;
      break;
    }
  }
  v61 = 0;
  if ( a2[2].m128i_i64[1] < 0 && (a2[1].m128i_i32[0] & 0x400LL) != 0 )
  {
    v23 = 1LL;
    v61 = 1;
  }
  else if ( (unsigned int)sub_140337F0C(a2, v19) )
  {
    v23 = 5LL;
    v61 = 5;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !sub_140329630(v17, v16, v23) )
    return a2;
  if ( (v6 & 1) != 0 && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)sub_14027B080(v5) == 12 )
    v24 = 9;
  else
    v24 = 1;
  v25 = sub_1403250B0(v56, v52, v24);
  v62 = v25;
  if ( v25 == -1 )
  {
    v46 = v61;
    v47 = v56;
LABEL_51:
    sub_14024AA58(v47, 1uLL, v46);
    return a2;
  }
  v26 = (__m128i *)(48 * v25 - 0x220000000000LL);
  if ( v14 != *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((48 * v25) >> 4)) + 2) )
  {
    v48 = (_DWORD *)(qword_140C506D8 + 4LL * v14 * (unsigned int)(unsigned __int16)word_140D05000);
    if ( (unsigned __int64)v48 < v57 )
    {
      while ( *v48 != *((_DWORD *)sub_1402C1550(v15) + 2) )
      {
        if ( *v48 != *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)v26[0x22000000000LL].m128i_i64 >> 4))
                     + 2)
          && (unsigned __int64)++v48 < v57 )
        {
          continue;
        }
        goto LABEL_23;
      }
      goto LABEL_57;
    }
  }
LABEL_23:
  if ( a3 )
  {
    v57 = sub_14033C424(6LL);
    v27 = v57;
    if ( !v57 )
    {
LABEL_57:
      sub_140239060((__int64)v26);
      sub_14026845C((__int64)v26, 0LL);
      _InterlockedAnd64(&v26[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      v46 = v61;
      v47 = v56;
      goto LABEL_51;
    }
  }
  else
  {
    v27 = 0LL;
    v57 = 0LL;
  }
  v28 = a2[2].m128i_u8[2] >> 6;
  sub_140239060((__int64)v26);
  sub_1402E5708((__int64)v26, v28, 1u);
  sub_1402E8154(v26, a2);
  v26[1].m128i_i64[1] &= 0xC000000000000000uLL;
  v26[2].m128i_i16[0] = 1;
  a2[2].m128i_i8[2] = a2[2].m128i_i8[2] & 0xF8 | 5;
  if ( v27 )
  {
    *(_DWORD *)(v27 + 192) |= 0x20u;
    v26[2].m128i_i8[2] |= 0x20u;
    v26->m128i_i64[0] = v27 + 32;
    *(_QWORD *)(v27 + 248) = v26;
  }
  v29 = (_QWORD *)(v26->m128i_i64[1] | 0x8000000000000000uLL);
  v30 = sub_140317A10((unsigned __int64)v29);
  v31 = sub_1402E7D14(v30, v62);
  if ( sub_140317A80((unsigned __int64)v29) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      if ( !HIBYTE(word_140C51864) && (v31 & 1) != 0 )
        v31 |= 0x8000000000000000uLL;
      *v29 = v31;
      sub_1402294F0((__int64)v29, v31);
      goto LABEL_29;
    }
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v31 & 1) != 0 )
      v31 |= 0x8000000000000000uLL;
  }
  *v29 = v31;
LABEL_29:
  _InterlockedAnd64(&v26[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    sub_140239060(a3);
    sub_140274508(a3, 3LL, v38);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v39) = 17;
    sub_140334790(a3, v39);
    *a4 = v57;
    sub_1402E7D60(v62, v15, 0LL, 2);
    sub_140273AF0((unsigned __int64)v29, 0LL);
    v53 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v53, v40, v41, v42);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    sub_140336AD8(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v54 = 0;
    while ( _interlockedbittestandset64(&a2[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v54, v43, v44, v45);
      while ( a2[1].m128i_i64[1] < 0 );
    }
    v32 = v62;
  }
  else
  {
    _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v50 = *((_QWORD *)CurrentPrcb + 4375);
        v51 = (*(_DWORD *)(v50 + 20) & 0xFFFF0007) == 0;
        *(_DWORD *)(v50 + 20) &= 0xFFFF0007;
        if ( v51 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    __writecr8(2uLL);
    v32 = v62;
    sub_1402E7D60(v62, v15, 0LL, 2);
    sub_1402F2700((__int64)a2);
  }
  sub_14033C300(a2, 0LL);
  sub_1402C6EB0(v15, 2);
  _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v55 = 0;
  while ( _interlockedbittestandset64(&v26[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v55, v33, v34, v35);
    while ( v26[1].m128i_i64[1] < 0 );
  }
  v36 = v26[2].m128i_i16[0];
  v26[2].m128i_i8[2] &= ~0x20u;
  v26->m128i_i64[0] = 0LL;
  sub_1403377E0(v26);
  if ( !v57 )
    return v26;
  *(_DWORD *)(v57 + 192) &= ~0x20u;
  if ( (v26[1].m128i_i64[1] & 0x4000000000000000LL) == 0 )
    return v26;
  if ( v36 == 1 )
  {
    if ( (v26[1].m128i_i32[0] & 0x400LL) == 0 )
      v12 = sub_140232694((unsigned __int64 *)&v26[1], 0, 1);
    sub_1402C6EB0(v32, 2);
  }
  _InterlockedAnd64(&v26[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v37) = 2;
    sub_140334790(a3, v37);
  }
  if ( v12 )
    sub_1402E20D0(v56, v12, 1);
  return 0LL;
}
