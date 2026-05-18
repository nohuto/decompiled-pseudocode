/*
 * XREFs of sub_18002F6EC @ 0x18002F6EC
 * Callers:
 *     sub_18002F830 @ 0x18002F830 (sub_18002F830.c)
 *     sub_1800E0F70 @ 0x1800E0F70 (sub_1800E0F70.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18002AB08 @ 0x18002AB08 (sub_18002AB08.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18002F6EC(__int64 a1)
{
  __m128 v1; // xmm0
  _QWORD *v3; // rax
  char result; // al
  __int64 *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  float v9; // xmm6_4
  __m128 v10; // xmm7
  float v11; // xmm6_4
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF

  v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
  result = sub_1800122C0(v3);
  if ( result )
  {
    v6 = *v5;
    v7 = *(_QWORD *)(v6 + 464);
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = *(_QWORD *)(v6 + 464);
    }
    v8 = *(_QWORD *)(v6 + 456);
    v12[0] = v8;
    v12[1] = v7;
    if ( sub_1800122C0(v12) )
    {
      v9 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
      v10 = v1;
      v10.m128_f32[0] = v1.m128_f32[0] * v9;
      v11 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
      v1.m128_f32[0] = v1.m128_f32[0] * v11;
      sub_18002AB08(v8, _mm_unpacklo_ps(v1, v10).m128_i64[0]);
    }
    return sub_180010910((__int64)v12);
  }
  return result;
}
