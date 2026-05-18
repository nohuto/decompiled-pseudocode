/*
 * XREFs of sub_180026238 @ 0x180026238
 * Callers:
 *     sub_180026CF0 @ 0x180026CF0 (sub_180026CF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180024AA4 @ 0x180024AA4 (sub_180024AA4.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_1800268DC @ 0x1800268DC (sub_1800268DC.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_1800564F0 @ 0x1800564F0 (sub_1800564F0.c)
 *     sub_1800701E0 @ 0x1800701E0 (sub_1800701E0.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180026238(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  __int64 v4; // rcx
  __m128i *p_si128; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  _QWORD *result; // rax
  __int64 v10; // [rsp+20h] [rbp-29h] BYREF
  __int64 v11; // [rsp+28h] [rbp-21h]
  __int64 v12; // [rsp+38h] [rbp-11h] BYREF
  __int64 v13; // [rsp+40h] [rbp-9h]
  __int64 v14; // [rsp+48h] [rbp-1h] BYREF
  __int64 v15; // [rsp+58h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+68h] [rbp+1Fh] BYREF
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  _QWORD v19[2]; // [rsp+80h] [rbp+37h] BYREF

  v2 = sub_180026618(a1);
  v3 = sub_1800268DC();
  sub_180011D4C(v4 + 8, &v12);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B820);
  v17 = 4;
  v18 = 5;
  p_si128 = &si128;
  do
  {
    v6 = sub_18001246C(&v14, &v12);
    sub_180024AA4(v2, &v10, v6);
    sub_180029870(v10, 2LL);
    sub_1800564F0(v10, p_si128->m128i_u32[0], v7, a1);
    v8 = sub_180011DA0(&v15, &v10);
    sub_1800701E0(v3, v8, p_si128->m128i_u32[0]);
    if ( v11 )
      sub_180010530(v11);
    p_si128 = (__m128i *)((char *)p_si128 + 4);
    result = v19;
  }
  while ( p_si128 != (__m128i *)v19 );
  if ( v13 )
    return (_QWORD *)sub_180010530(v13);
  return result;
}
