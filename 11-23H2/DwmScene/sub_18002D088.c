/*
 * XREFs of sub_18002D088 @ 0x18002D088
 * Callers:
 *     sub_18002D1B0 @ 0x18002D1B0 (sub_18002D1B0.c)
 *     sub_1800CAA10 @ 0x1800CAA10 (sub_1800CAA10.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180028B9C @ 0x180028B9C (sub_180028B9C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18002D088(__int64 a1)
{
  __m128 v1; // xmm0
  _QWORD *v3; // rax
  char result; // al
  __int64 v5; // rcx
  float v6; // xmm6_4
  __m128 v7; // xmm7
  float v8; // xmm6_4
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]

  v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
  result = sub_180011DE0(v3);
  if ( result )
  {
    sub_18001246C(&v9, (_QWORD *)(*(_QWORD *)v5 + 456LL));
    result = sub_180011DE0(&v9);
    if ( result )
    {
      v6 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
      v7 = v1;
      v7.m128_f32[0] = v1.m128_f32[0] * v6;
      v8 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
      v1.m128_f32[0] = v1.m128_f32[0] * v8;
      result = sub_180028B9C(v9, _mm_unpacklo_ps(v1, v7).m128_i64[0]);
    }
    if ( v10 )
      return sub_180010530(v10);
  }
  return result;
}
