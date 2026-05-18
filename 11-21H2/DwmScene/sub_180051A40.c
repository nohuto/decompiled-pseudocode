/*
 * XREFs of sub_180051A40 @ 0x180051A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180014B08 @ 0x180014B08 (sub_180014B08.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_1800509B4 @ 0x1800509B4 (sub_1800509B4.c)
 *     sub_180051B50 @ 0x180051B50 (sub_180051B50.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180051A40(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  __m128i v11; // xmm6
  __m128i v13; // [rsp+20h] [rbp-30h] BYREF
  __m128i v14; // [rsp+30h] [rbp-20h] BYREF

  v8 = sub_18001D684();
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance>::`vftable';
    sub_1800509B4(v8 + 16, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v13 = 0LL;
  sub_180014B08(&v13, v9 + 16, v9);
  v14 = 0LL;
  v10 = v13.m128i_i64[1];
  if ( v13.m128i_i64[1] )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13.m128i_i64[1] + 8));
    v10 = v13.m128i_i64[1];
  }
  v11 = _mm_load_si128(&v13);
  v14 = v11;
  sub_180051B50(a1, &v14, a3);
  *a2 = v11.m128i_i64[0];
  a2[1] = v10;
  v13 = 0LL;
  sub_180010910((__int64)&v13);
  sub_180010910((__int64)a4);
  return a2;
}
