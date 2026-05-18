/*
 * XREFs of sub_180048430 @ 0x180048430
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012888 @ 0x180012888 (sub_180012888.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180048158 @ 0x180048158 (sub_180048158.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180048430(__int64 *a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __m128i v12; // xmm6
  __m128i v14; // [rsp+20h] [rbp-30h] BYREF
  __m128i v15; // [rsp+30h] [rbp-20h] BYREF

  v8 = sub_18001D684();
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::Light>::`vftable';
    sub_180048158(v8 + 16, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v14 = 0LL;
  sub_180012888(&v14, v9 + 16, v9);
  v10 = *a1;
  v15 = 0LL;
  v11 = v14.m128i_i64[1];
  if ( v14.m128i_i64[1] )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14.m128i_i64[1] + 8));
    v11 = v14.m128i_i64[1];
  }
  v12 = _mm_load_si128(&v14);
  v15 = v12;
  (*(void (__fastcall **)(__int64 *, __m128i *, __int64))(v10 + 144))(a1, &v15, a3);
  *a2 = v12.m128i_i64[0];
  a2[1] = v11;
  v14 = 0LL;
  sub_180010910((__int64)&v14);
  sub_180010910((__int64)a4);
  return a2;
}
