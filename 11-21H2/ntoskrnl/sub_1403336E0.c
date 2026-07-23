/*
 * XREFs of sub_1403336E0 @ 0x1403336E0
 * Callers:
 *     sub_140227020 @ 0x140227020 (sub_140227020.c)
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_140332110 @ 0x140332110 (sub_140332110.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_1403731C0 @ 0x1403731C0 (sub_1403731C0.c)
 *     sub_140374BBC @ 0x140374BBC (sub_140374BBC.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_140239A98 @ 0x140239A98 (sub_140239A98.c)
 *     sub_14026EEA8 @ 0x14026EEA8 (sub_14026EEA8.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_1402E5B0C @ 0x1402E5B0C (sub_1402E5B0C.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B62A0 @ 0x1405B62A0 (sub_1405B62A0.c)
 *     sub_1405BC9E8 @ 0x1405BC9E8 (sub_1405BC9E8.c)
 */

__int64 __fastcall sub_1403336E0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  bool v7; // cc
  __m128i *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rbx
  bool v12; // zf
  char v13; // si
  __int64 v14; // r9
  unsigned __int8 v15; // r10
  __int16 v16; // ax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int16 v21; // bx
  unsigned int v22; // eax
  unsigned __int8 v23; // bl
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v29; // r8
  int v30; // eax
  unsigned __int8 v31; // al
  __int64 v32; // r8
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  __int64 v36; // r8
  int v37; // eax
  unsigned __int8 v38; // [rsp+30h] [rbp-A8h]
  BOOL v39; // [rsp+34h] [rbp-A4h]
  __int64 v40; // [rsp+38h] [rbp-A0h]
  __int64 v41; // [rsp+38h] [rbp-A0h]
  __int64 v42; // [rsp+40h] [rbp-98h]
  unsigned __int64 v43; // [rsp+48h] [rbp-90h] BYREF
  __int64 v44; // [rsp+50h] [rbp-88h]
  unsigned __int64 v45; // [rsp+58h] [rbp-80h]
  __int64 v46; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v47; // [rsp+68h] [rbp-70h]
  __int128 v48; // [rsp+70h] [rbp-68h] BYREF
  __int64 v49; // [rsp+80h] [rbp-58h]
  _QWORD v50[2]; // [rsp+88h] [rbp-50h] BYREF

  v3 = *(_QWORD *)a2;
  v48 = 0LL;
  v49 = 0LL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v24 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 8 * ((a2 >> 3) & 0x1FF));
      v26 = v3 | 0x20;
      if ( (v25 & 0x20) == 0 )
        v26 = v3;
      v3 = v26;
      if ( (v25 & 0x42) != 0 )
        v3 = v26 | 0x42;
    }
  }
  v7 = *(_QWORD *)(a3 - 16) <= 1uLL;
  v43 = v3;
  if ( !v7 )
    return 0LL;
  v40 = *(_QWORD *)(((a3 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v9 = (__m128i *)(48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v43) >> 12) & 0xFFFFFFFFFFLL)
                 - 0x220000000000LL);
  v10 = ((unsigned __int64)v9[2].m128i_i64[1] >> 43) & 0x3FF;
  v47 = (__int64)(a2 << 25) >> 16;
  v11 = *(_QWORD *)(qword_140C51F48 + 8 * v10);
  v12 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v42 = v11;
  v44 = 0LL;
  if ( v12 )
  {
    v44 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( *(_QWORD *)(v44 + 1248) )
      return 0LL;
  }
  v13 = sub_14033A410(v10, (__int64)(a2 << 25) >> 16);
  v45 = ((unsigned __int64)sub_140317A10(v14 + ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 12) & 0xFFFFFFFFFFLL;
  v39 = (DWORD1(xmmword_140D06900) & 0x8000001) != 0;
  v15 = sub_1402F2700((__int64)v9);
  v16 = v9[2].m128i_i16[0];
  v38 = v15;
  if ( v16 != 1 && (v16 != 2 || (v9[2].m128i_i8[2] & 8) == 0)
    || *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v11 )
  {
    _InterlockedAnd64(&v9[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( !dword_140D06B08 )
      goto LABEL_54;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_54;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu )
      goto LABEL_54;
    if ( v15 > 0xFu )
      goto LABEL_54;
    if ( CurrentIrql < 2u )
      goto LABEL_54;
    CurrentPrcb = KeGetCurrentPrcb();
    v29 = *((_QWORD *)CurrentPrcb + 4375);
    v30 = ~(unsigned __int16)(-1LL << (v15 + 1));
    v12 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
    *(_DWORD *)(v29 + 20) &= v30;
    if ( !v12 )
      goto LABEL_54;
LABEL_53:
    sub_140418E4C(CurrentPrcb);
    v15 = v38;
LABEL_54:
    __writecr8(v15);
    return 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 - 16), 0LL, 1LL) != 1 )
  {
    _InterlockedAnd64(&v9[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( !dword_140D06B08 )
      goto LABEL_54;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_54;
    v31 = KeGetCurrentIrql();
    if ( v31 > 0xFu )
      goto LABEL_54;
    if ( v15 > 0xFu )
      goto LABEL_54;
    if ( v31 < 2u )
      goto LABEL_54;
    CurrentPrcb = KeGetCurrentPrcb();
    v32 = *((_QWORD *)CurrentPrcb + 4375);
    v33 = ~(unsigned __int16)(-1LL << (v15 + 1));
    v12 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
    *(_DWORD *)(v32 + 20) &= v33;
    if ( !v12 )
      goto LABEL_54;
    goto LABEL_53;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 392), 0xFFFFFFFF);
  v17 = v45;
  v9[2].m128i_i64[1] &= ~0x8000000000000000uLL;
  v18 = v9[2].m128i_i64[1] & 0xFFFFFFFFFFLL;
  v9->m128i_i64[1] = a2;
  v41 = v18;
  sub_14033C3E0(v9, v17);
  v19 = (unsigned __int64 *)&v9[1];
  v20 = (unsigned __int64)v9[1].m128i_i64[0] >> 5;
  if ( (v20 & 5) == 5 )
    *v19 = v9[1].m128i_i64[0] ^ ((unsigned __int16)v9[1].m128i_i64[0] ^ (unsigned __int16)(32 * (v20 & 0xFFFE))) & 0x3E0;
  v46 = sub_140232694(v19, 0, 0);
  v21 = v46;
  v22 = sub_1402E76C0((__int64)&v46);
  if ( (v21 & 4) != 0 )
    sub_1405BC9E8(*(_QWORD *)(v42 + 8LL * (v21 >> 12) + 16736), v22, v9->m128i_i64[1], a3 & 0x7FFFFFFFFFFFFFFFLL);
  if ( v39 )
    sub_1402B1E40(v9, &v48);
  _InterlockedAnd64(&v9[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v34 = KeGetCurrentIrql(), v34 <= 0xFu) )
  {
    v23 = v38;
    if ( v38 <= 0xFu && v34 >= 2u )
    {
      v35 = KeGetCurrentPrcb();
      v36 = *((_QWORD *)v35 + 4375);
      v37 = ~(unsigned __int16)(-1LL << (v38 + 1));
      v12 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
      *(_DWORD *)(v36 + 20) &= v37;
      if ( v12 )
        sub_140418E4C(v35);
    }
  }
  else
  {
    v23 = v38;
  }
  __writecr8(v23);
  if ( (v3 & 0x200) != 0 )
  {
    v43 = v3 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
    sub_14033DBC0(a2, v43);
  }
  if ( (v13 & 0xF) == 8 )
    sub_1402E5B0C(48 * v41 - 0x220000000000LL, 1);
  sub_140228660(48 * v41 - 0x220000000000LL, 0);
  sub_14026EEA8(a1, v47, 1uLL, 0);
  if ( v44 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 1272), 1uLL);
  if ( v39 )
  {
    sub_1405B62A0(a3);
    v50[1] = 24LL;
    v50[0] = &v48;
    sub_14035EDE4((unsigned int)v50, 1, 671088641, 630, 289413892);
  }
  sub_140239A98(a3 - 48);
  return 1LL;
}
