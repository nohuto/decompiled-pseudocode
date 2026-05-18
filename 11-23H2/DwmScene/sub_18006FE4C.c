/*
 * XREFs of sub_18006FE4C @ 0x18006FE4C
 * Callers:
 *     sub_180070754 @ 0x180070754 (sub_180070754.c)
 * Callees:
 *     sub_18006FE14 @ 0x18006FE14 (sub_18006FE14.c)
 *     sub_18006FFA4 @ 0x18006FFA4 (sub_18006FFA4.c)
 *     sub_1800705A4 @ 0x1800705A4 (sub_1800705A4.c)
 *     sub_180070668 @ 0x180070668 (sub_180070668.c)
 *     sub_1800973E0 @ 0x1800973E0 (sub_1800973E0.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18006FE4C(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h]
  _QWORD *v19; // [rsp+30h] [rbp-38h]

  v5 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 7;
  v7 = 0x1FFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 7;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  v11 = sub_180070668(v9, v7);
  v12 = (v5 & 0xFFFFFFFFFFFFFF80uLL) + v11;
  sub_1800973E0(v12, a3);
  v13 = a1[1];
  v14 = *a1;
  if ( a2 == v13 )
  {
    v17 = v11;
    v15 = v11;
    v18 = v11;
    v19 = a1;
    while ( v14 != v13 )
    {
      sub_1800973E0(v15, v14);
      v15 += 128LL;
      v18 = v15;
      v14 += 128LL;
    }
    sub_18006FE14(v15, v15);
  }
  else
  {
    sub_18006FFA4(*a1, a2, v11, a1);
    sub_18006FFA4(a2, a1[1], v12 + 128, a1);
  }
  sub_1800705A4(a1, v11, v8, v7, v17, v18, v19);
  return v12;
}
