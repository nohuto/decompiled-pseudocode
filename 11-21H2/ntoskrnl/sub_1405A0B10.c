/*
 * XREFs of sub_1405A0B10 @ 0x1405A0B10
 * Callers:
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 * Callees:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14023073C @ 0x14023073C (sub_14023073C.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402E7D14 @ 0x1402E7D14 (sub_1402E7D14.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B7574 @ 0x1405B7574 (sub_1405B7574.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 */

__int64 __fastcall sub_1405A0B10(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  __int64 v5; // rdi
  signed __int32 v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 i; // rax
  ULONG_PTR v10; // r12
  __m128i *v11; // r14
  unsigned __int64 v12; // rbp
  char v13; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  int v19; // r8d
  unsigned __int8 v20; // al
  int v21; // edx
  __int128 v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // eax
  bool v32; // zf
  unsigned __int64 v33; // r11
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  int v39; // eax
  __int64 v40; // r8
  __m128i v41; // [rsp+20h] [rbp-68h] BYREF
  __int128 v42; // [rsp+30h] [rbp-58h] BYREF
  __int64 v43; // [rsp+40h] [rbp-48h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]
  __int64 *v46; // [rsp+90h] [rbp+8h]
  __int64 v47; // [rsp+98h] [rbp+10h]

  v5 = 48 * a3 - 0x220000000000LL;
  v6 = *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  v47 = *(_QWORD *)a1;
  v7 = v6 | *(_DWORD *)(a2 + 12);
  v8 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  for ( i = sub_1403250B0(v8, v7, 0); ; i = sub_1403250B0(v8, v7, 0) )
  {
    v10 = i;
    if ( i != -1 )
      break;
    sub_1405B8348(v8);
  }
  v11 = (__m128i *)(48 * i - 0x220000000000LL);
  v12 = (unsigned __int8)sub_1402F2700(v5);
  v13 = *(_BYTE *)(v5 + 35);
  if ( (v13 & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !dword_140D06B08 )
      goto LABEL_20;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_20;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu || (unsigned __int8)v12 > 0xFu || CurrentIrql < 2u )
      goto LABEL_20;
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = *((_QWORD *)CurrentPrcb + 4375);
    v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
    v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
    v19 = v17 & *(_DWORD *)(v16 + 20);
LABEL_18:
    *(_DWORD *)(v16 + 20) = v19;
    if ( v18 )
      sub_140418E4C((__int64)CurrentPrcb);
LABEL_20:
    __writecr8(v12);
    sub_140268408((__int64)v11);
    return -1LL;
  }
  if ( (v13 & 0x10) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !dword_140D06B08 )
      goto LABEL_20;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_20;
    v20 = KeGetCurrentIrql();
    if ( v20 > 0xFu || (unsigned __int8)v12 > 0xFu || v20 < 2u )
      goto LABEL_20;
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = *((_QWORD *)CurrentPrcb + 4375);
    v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
    v18 = (v21 & *(_DWORD *)(v16 + 20)) == 0;
    v19 = v21 & *(_DWORD *)(v16 + 20);
    goto LABEL_18;
  }
  sub_140239060((__int64)v11);
  sub_1402E5708((__int64)v11, *(unsigned __int8 *)(v5 + 34) >> 6, 1u);
  v23 = *(_OWORD *)(v5 + 16);
  v41 = *(__m128i *)v5;
  v24 = *(__m128i *)(v5 + 32);
  v42 = v23;
  v43 = v24.m128i_i64[0];
  v44 = _mm_srli_si128(v24, 8).m128i_u64[0] & 0xFFDFFFFFFFFFFFFFuLL;
  v25 = sub_1402CCC50(32LL * ((a1[16] >> 1) & 0x1F));
  if ( !sub_140317A80((unsigned __int64)&v42) )
    goto LABEL_30;
  if ( !(unsigned int)sub_140229550() )
  {
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v25 & 1) != 0 )
      v25 |= v26;
LABEL_30:
    *(_QWORD *)&v42 = v25;
    goto LABEL_31;
  }
  if ( !HIBYTE(word_140C51864) && (v25 & 1) != 0 )
    v25 |= v26;
  *(_QWORD *)&v42 = v25;
  sub_1402294F0((__int64)&v42, v25);
LABEL_31:
  sub_1402E8154(v11, &v41);
  v11[2].m128i_i8[2] |= 0x10u;
  v11[2].m128i_i16[0] = 0;
  sub_140274508((__int64)v11, 1LL, v27);
  sub_1402206C0(v47, 0LL, v28, 2);
  sub_1402E7D60(v10, a3, 0LL, 6);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v46 = (__int64 *)(sub_1402CC7C0(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                  + 8LL * ((*(_DWORD *)(v5 + 8) >> 3) & 0x1FF));
  v29 = sub_140317A10((unsigned __int64)v46);
  v30 = sub_1402E7D14(v29, v10);
  if ( sub_140317A80((unsigned __int64)v46) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v31 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v32 = (v30 & 1) == 0;
        goto LABEL_35;
      }
    }
    else
    {
      v31 = 0;
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v32 = (v30 & 1) == 0;
LABEL_35:
        if ( !v32 )
          v30 |= 0x8000000000000000uLL;
      }
    }
  }
  else
  {
    v31 = 0;
  }
  v33 = (unsigned __int64)v46;
  *v46 = v30;
  if ( v31 )
    sub_1402294F0((__int64)v46, v30);
  sub_1402BEDD0(v33, 0x11u);
  _InterlockedAnd64(&v11[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(_WORD *)(v5 + 32) == 1 && (unsigned int)sub_14023073C(1u) && (unsigned int)sub_1405B7574(a4, a3, 3LL) )
    sub_1405B7E7C(a4, v34, v35, v36);
  *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 6;
  if ( (unsigned int)sub_1403377E0(v5) )
  {
    *(_BYTE *)(v5 + 35) |= 0x10u;
    sub_1402C6EB0(a3, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v37 = KeGetCurrentIrql();
      if ( v37 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v37 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v40 = *((_QWORD *)v38 + 4375);
        v18 = (v39 & *(_DWORD *)(v40 + 20)) == 0;
        *(_DWORD *)(v40 + 20) &= v39;
        if ( v18 )
          sub_140418E4C((__int64)v38);
      }
    }
  }
  __writecr8(v12);
  return v10;
}
