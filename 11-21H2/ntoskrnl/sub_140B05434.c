/*
 * XREFs of sub_140B05434 @ 0x140B05434
 * Callers:
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_14026EDE4 @ 0x14026EDE4 (sub_14026EDE4.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056B044 @ 0x14056B044 (sub_14056B044.c)
 */

__int64 __fastcall sub_140B05434(unsigned __int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  __m128i *v6; // rsi
  unsigned __int64 v7; // r14
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  bool v15; // zf
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v17; // [rsp+38h] [rbp-C8h]
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[24]; // [rsp+50h] [rbp-B0h] BYREF

  v17 = (__int64 *)a1;
  memset(v19, 0, 0xB8uLL);
  v19[3] = 0LL;
  LODWORD(v19[1]) = 20;
  v16 = sub_140317A10(a1);
  v4 = (__int64)(a1 << 25) >> 16;
  v5 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFFLL;
  v6 = (__m128i *)(48 * v5 - 0x220000000000LL);
  v7 = (unsigned __int8)sub_1402F2700((__int64)v6);
  sub_140239060(48 * a2 - 0x220000000000LL);
  sub_1402E8154((__m128i *)(48 * a2 - 0x220000000000LL), v6);
  v8 = ((unsigned int)dword_140D06880 >> 14) & 1;
  if ( !v8 || (((unsigned __int64)v6[2].m128i_i64[1] >> 60) & 7) == 3 )
  {
    sub_1402E7D60(a2, v5, 0LL, 2 * v8 + 4);
  }
  else
  {
    v18 = v4;
    sub_14056B044(a2, &v18, v5, &v18, 0LL, 1);
  }
  v16 ^= (v16 ^ (a2 << 12)) & 0xFFFFFFFFFF000LL;
  sub_14026EDE4(v17, v16, 0);
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6[1].m128i_i64[1] |= 0x4000000000000000uLL;
  sub_1402CF280((__int64)v19, v4, 1LL, 0);
  sub_14032F1B0((__int64)v19);
  if ( (dword_140D06880 & 0x4000) == 0 && (((unsigned __int64)v6[2].m128i_i64[1] >> 60) & 7) == 3 )
    sub_14023CC50(48 * v5 - 0x220000000000LL, 12);
  v6[2].m128i_i8[3] &= ~8u;
  sub_140273FD0(48 * v5 - 0x220000000000LL, v9, v10, v11);
  _InterlockedAnd64(&v6[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = ((unsigned int)result & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= result;
        if ( v15 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
