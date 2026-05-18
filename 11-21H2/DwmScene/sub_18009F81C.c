/*
 * XREFs of sub_18009F81C @ 0x18009F81C
 * Callers:
 *     sub_1800A0C74 @ 0x1800A0C74 (sub_1800A0C74.c)
 *     sub_1800A0CC4 @ 0x1800A0CC4 (sub_1800A0CC4.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18009EE90 @ 0x18009EE90 (sub_18009EE90.c)
 *     sub_18009F3E0 @ 0x18009F3E0 (sub_18009F3E0.c)
 *     sub_1800A0D7C @ 0x1800A0D7C (sub_1800A0D7C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009F81C(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  char *v6; // r12
  unsigned __int64 v7; // rdi
  char *v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+30h] [rbp-40h]
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  char *v17[2]; // [rsp+50h] [rbp-20h] BYREF
  char *v18; // [rsp+60h] [rbp-10h]
  char *v19; // [rsp+B8h] [rbp+48h]

  v17[0] = (char *)sub_180011088(0x2000uLL);
  v18 = v17[0] + 0x2000;
  v17[1] = (char *)sub_18009EE90((__int64)v17[0], 512LL);
  v5 = 0LL;
  HIDWORD(v15) = 1065353216;
  v6 = v17[0] + 8;
  do
  {
    v7 = 0LL;
    *((float *)&v15 + 2) = (float)(int)v5 * 0.14285715;
    v8 = v6;
    do
    {
      v9 = 0LL;
      *((float *)&v15 + 1) = (float)(int)v7 * 0.14285715;
      v19 = v8;
      do
      {
        *(float *)&v15 = (float)(int)v9 * 0.14285715;
        v16 = v15;
        v10 = *(_QWORD *)(a3 + 56);
        if ( !v10 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x18009FA5CLL);
        }
        (*(void (__fastcall **)(__int64, __m128 *, __int128 *))(*(_QWORD *)v10 + 16LL))(v10, &v14, &v16);
        v14 = _mm_min_ps(_mm_max_ps(v14, (__m128)xmmword_1801284F0), (__m128)xmmword_1801284E0);
        *(__m128 *)(v19 - 8) = v14;
        ++v9;
        v19 += 16;
      }
      while ( v9 < 8 );
      ++v7;
      v8 += 128;
    }
    while ( v7 < 8 );
    ++v5;
    v6 += 1024;
  }
  while ( v5 < 8 );
  sub_1800A0D7C(a1, 8LL, v17);
  result = sub_18009F3E0(a1);
  if ( v17[0] )
    result = sub_180010884(v17[0], (v18 - v17[0]) & 0xFFFFFFFFFFFFFFF0uLL);
  v13 = *(_QWORD *)(a3 + 56);
  if ( v13 )
  {
    LOBYTE(v12) = v13 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v12);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return result;
}
