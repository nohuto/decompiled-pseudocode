/*
 * XREFs of sub_1800280E8 @ 0x1800280E8
 * Callers:
 *     sub_180028CE0 @ 0x180028CE0 (sub_180028CE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180026808 @ 0x180026808 (sub_180026808.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_1800288F8 @ 0x1800288F8 (sub_1800288F8.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18005E084 @ 0x18005E084 (sub_18005E084.c)
 *     sub_18007B2D0 @ 0x18007B2D0 (sub_18007B2D0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800280E8(__int64 a1)
{
  __int64 *v2; // r15
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rbx
  __m128i *p_si128; // rsi
  __int64 v10; // r8
  __int128 v12; // [rsp+28h] [rbp-29h] BYREF
  _OWORD v13[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v14; // [rsp+58h] [rbp+7h] BYREF
  __int128 v15; // [rsp+68h] [rbp+17h] BYREF
  __m128i si128; // [rsp+78h] [rbp+27h] BYREF
  int v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+8Ch] [rbp+3Bh]
  __int64 v19; // [rsp+90h] [rbp+3Fh] BYREF

  v2 = (__int64 *)sub_18002850C(a1);
  v3 = sub_1800288F8();
  v12 = 0LL;
  v5 = *(_QWORD *)(v4 + 16);
  if ( !v5 )
LABEL_13:
    sub_1800120F4();
  v6 = *(_DWORD *)(v5 + 8);
  do
  {
    if ( !v6 )
      goto LABEL_13;
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
  }
  while ( v7 != v6 );
  *(_QWORD *)&v12 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v12 + 1) = v8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7D0);
  v17 = 4;
  v18 = 5;
  p_si128 = &si128;
  do
  {
    v14 = 0LL;
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = *((_QWORD *)&v12 + 1);
    }
    v14 = v12;
    sub_180026808(v2, v13, &v14);
    sub_18002BCC0(*(_QWORD *)&v13[0], 2LL);
    sub_18005E084(*(_QWORD *)&v13[0], p_si128->m128i_u32[0], v10, a1);
    v15 = 0LL;
    if ( *((_QWORD *)&v13[0] + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v13[0] + 1) + 8LL));
      v8 = *((_QWORD *)&v12 + 1);
    }
    v15 = v13[0];
    sub_18007B2D0(v3, &v15, p_si128->m128i_u32[0]);
    sub_180010910((__int64)v13);
    p_si128 = (__m128i *)((char *)p_si128 + 4);
  }
  while ( p_si128 != (__m128i *)&v19 );
  return sub_180010910((__int64)&v12);
}
