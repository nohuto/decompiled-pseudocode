/*
 * XREFs of sub_1405A6E74 @ 0x1405A6E74
 * Callers:
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_14045C52A @ 0x14045C52A (sub_14045C52A.c)
 * Callees:
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 */

__int64 __fastcall sub_1405A6E74(__m128i **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *v4; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbp
  int v10; // ebx
  int v11; // eax
  _QWORD *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i *v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __m128i **v20; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+88h] [rbp+20h] BYREF

  v21 = (_QWORD *)a2;
  v20 = a1;
  v4 = *a1;
  if ( (*a1)[2].m128i_i64[1] >= 0 )
  {
    v22 = 0;
    while ( _interlockedbittestandset64(&v4[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v22, a2, a3, a4);
      while ( v4[1].m128i_i64[1] < 0 );
    }
    v6 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v4[2].m128i_i64[1] >> 43) & 0x3FF));
    v7 = v4->m128i_i64[1] | 0x8000000000000000uLL;
    v8 = (__int64)(v7 << 25) >> 16;
    if ( (v4[2].m128i_i8[2] & 8) != 0 )
    {
      *(_DWORD *)(a3 + 56) |= 0x40u;
      _InterlockedAnd64(&v4[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    if ( (*(_DWORD *)(v6 + 4) & 8) != 0 && !sub_140277C50((__int64)v4) && v8 < 0xFFFF800000000000uLL )
    {
      _InterlockedAnd64(&v4[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      v10 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)v4[0x22000000000LL].m128i_i64 >> 4)) + 2);
      v11 = sub_1402E8990((__int64)v4);
      v12 = (_QWORD *)(a3 + 48);
      v13 = sub_1402EB440(
              v6,
              2,
              (v11 << byte_140C506CD) | dword_140C50738 & (-1431655765 * ((__int64)v4[0x22000000000LL].m128i_i64 >> 4)) | (v10 << byte_140C506CC),
              0,
              v12,
              0);
      if ( v13 == -1 )
      {
        if ( *v12 )
          return 0LL;
      }
      else
      {
        v17 = (__m128i *)(48 * v13 - 0x220000000000LL);
        if ( (unsigned int)sub_1402EA95C(v4, v17, v8, 1u, 0, 0) )
        {
          v4[1].m128i_i64[0] = 0LL;
          sub_1402E89B0((unsigned __int64 *)&v4[1]);
          sub_140268408((__int64)v4);
          v4 = v17;
          v18 = sub_140317A10(v7);
          *v21 = v18;
          *v20 = v17;
        }
        else
        {
          sub_140268408((__int64)v17);
        }
      }
      LODWORD(v20) = 0;
      while ( _interlockedbittestandset64(&v4[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v20, v14, v15, v16);
        while ( v4[1].m128i_i64[1] < 0 );
      }
    }
    if ( (((unsigned __int64)v4[2].m128i_i64[1] >> 60) & 7) != 3 )
    {
      sub_140268998((__int64)v4);
      sub_14026C644((ULONG_PTR)v4, 4);
    }
    v19 = sub_14033C2A0((__int64)v4);
    _InterlockedAnd64(&v4[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( v19 )
      sub_1402E20D0(v6, v19, 1);
  }
  return 1LL;
}
