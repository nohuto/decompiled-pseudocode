/*
 * XREFs of sub_1402EA95C @ 0x1402EA95C
 * Callers:
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_1403D0BD4 @ 0x1403D0BD4 (sub_1403D0BD4.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14026EDE4 @ 0x14026EDE4 (sub_14026EDE4.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402EABF8 @ 0x1402EABF8 (sub_1402EABF8.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 */

__int64 __fastcall sub_1402EA95C(
        __m128i *a1,
        __m128i *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __m128i *v7; // r14
  ULONG_PTR v9; // r15
  ULONG_PTR v10; // rdi
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  __int8 v15; // al
  __int8 v16; // al
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  __int64 *v19; // rbx
  __int64 v20; // rax
  BOOL v22; // r14d
  unsigned __int64 v23; // rdi
  int v24; // edi
  unsigned int v25; // [rsp+20h] [rbp-38h]

  v7 = a2;
  if ( !(unsigned int)sub_1402EABF8((ULONG_PTR)a1) )
    return 0LL;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)v7[0x22000000000LL].m128i_i64 >> 4);
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)a1[0x22000000000LL].m128i_i64 >> 4);
  v11 = (__int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = sub_140317A10(v11);
  v13 = v12;
  if ( a5 == 2 )
  {
    if ( (v12 & 0x42) != 0 )
    {
      sub_14033DBC0(v11, v12 & 0xFFFFFFFFFFFFFFBDuLL);
      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(a3, a4, 2u);
    }
  }
  else
  {
    v22 = 0;
    v23 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( (unsigned int)sub_140317A80(v11) )
      v22 = sub_140229550() != 0;
    *v11 = v23;
    if ( v22 )
      sub_1402294F0((__int64)v11, v13 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(a3, a4, a5);
    v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)a1[0x22000000000LL].m128i_i64 >> 4);
    v7 = a2;
  }
  v14 = a1[2].m128i_u8[2] >> 6;
  a6 = 0;
  v25 = v14;
  while ( _interlockedbittestandset64(&a1[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      sub_1402F32E0(&a6);
    while ( a1[1].m128i_i64[1] < 0 );
  }
  sub_140239060((__int64)v7);
  sub_1402E5708((__int64)v7, v25, 1u);
  sub_1402E8154(v7, a1);
  sub_1402E7D60(v9, v10, 0LL, 6);
  _InterlockedAnd64(&v7[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v15 = a1[2].m128i_i8[3];
  a1[2].m128i_i64[1] &= ~0x8000000000000000uLL;
  a1[2].m128i_i8[3] = v15 & 0xF7;
  v16 = a1[2].m128i_i8[2] & 0xF8 | 5;
  a1[2].m128i_i8[2] = v16;
  a1[2].m128i_i8[2] = v16 & 0xC7;
  a1[2].m128i_i8[3] &= ~0x20u;
  _InterlockedAnd64(&a1[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v17 = (v9 & 0xFFFFFFFFFFLL) << 12;
  v18 = v17 | v13 & 0xFFF0000000000FFFuLL;
  if ( a5 != 2 )
  {
    v24 = 0;
    if ( !(unsigned int)sub_140317A80(v11) )
      goto LABEL_18;
    if ( (unsigned int)sub_140229550() )
    {
      v24 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_28:
        if ( (v18 & 1) != 0 )
          v18 |= 0x8000000000000000uLL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      goto LABEL_28;
    }
LABEL_18:
    *v11 = v18;
    if ( v24 )
      sub_1402294F0((__int64)v11, v18);
    goto LABEL_9;
  }
  sub_14026EDE4(v11, v18, 0);
LABEL_9:
  std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(a3, a4, a5);
  if ( v7[2].m128i_i64[1] < 0 )
  {
    v19 = (__int64 *)(v7->m128i_i64[1] | 0x8000000000000000uLL);
    v20 = sub_140317A10(v19);
    sub_14026EDE4(v19, v17 | v20 & 0xFFF0000000000FFFuLL, 0);
  }
  return 1LL;
}
