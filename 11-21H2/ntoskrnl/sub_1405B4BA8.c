/*
 * XREFs of sub_1405B4BA8 @ 0x1405B4BA8
 * Callers:
 *     sub_1405B4EA0 @ 0x1405B4EA0 (sub_1405B4EA0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_14028F080 @ 0x14028F080 (sub_14028F080.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     sub_1403936C0 @ 0x1403936C0 (sub_1403936C0.c)
 *     sub_1405A5F5C @ 0x1405A5F5C (sub_1405A5F5C.c)
 */

__int64 __fastcall sub_1405B4BA8(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  char v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __m128i *v13; // rdi
  __int64 v14; // rax
  __m128i *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v21 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = (((a2 + 0x1FFFFF) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v10 = sub_1402CF4F0(a1);
  if ( v7 > v8 )
    goto LABEL_31;
  do
  {
    if ( v9 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_7;
      sub_14020D8D0(a1, v9);
    }
    v11 = sub_14028F080(v7, v8, 0LL, v10, 1, &v21);
    if ( !v11 )
      goto LABEL_31;
    v9 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v11 != v7 )
      break;
LABEL_7:
    v12 = sub_140317A10(v7);
    v22 = v12;
    if ( (v12 & 1) != 0 )
    {
      v13 = (__m128i *)(48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFFLL)
                      - 0x220000000000LL);
    }
    else
    {
      if ( (v12 & 0x400) != 0 )
        break;
      if ( (v12 & 0x800) == 0 )
        break;
      v13 = (__m128i *)sub_140315D60(v7, 0LL, 0);
      if ( !v13 )
        break;
    }
    if ( !(unsigned int)sub_1405A5F5C((__int64)v13) )
      break;
    v14 = *(_QWORD *)(a4 + 24) & 0xFFFFFFFFFFLL;
    v15 = (__m128i *)a4;
    if ( v14 == 0x3FFFFFFFFFLL )
      a4 = 0LL;
    else
      a4 = 48 * v14 - 0x220000000000LL;
    if ( (v13[2].m128i_i8[2] & 7) == 6 )
    {
      sub_1402EA95C(v13, v15, (__int64)(v7 << 25) >> 16, 1u, 0, 0);
      v20 = 0;
      while ( _interlockedbittestandset64(&v13[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v20, v16, v17, v18);
        while ( v13[1].m128i_i64[1] < 0 );
      }
    }
    else
    {
      sub_1402E7704((ULONG_PTR)v13, (__int64)v15, 0, 0LL);
    }
    v13[1].m128i_i64[0] = 0LL;
    sub_1402E89B0((unsigned __int64 *)&v13[1]);
    sub_14026845C((__int64)v13, 0LL);
    _InterlockedAnd64(&v13[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v7 & 0x78) == 0 && sub_1403531F0(a1) || KeShouldYieldProcessor() )
    {
      if ( v9 )
      {
        sub_14020D8D0(a1, v9);
        v9 = 0LL;
      }
      sub_1402B0CE0(a1, v10);
      sub_1402CF4F0(a1);
    }
    v7 += 8LL;
  }
  while ( v7 <= v8 );
  if ( v9 )
    sub_14020D8D0(a1, v9);
LABEL_31:
  sub_1402B0CE0(a1, v10);
  if ( a4 )
  {
    sub_1403936C0(a4);
    return (unsigned int)-1073741823;
  }
  return v4;
}
