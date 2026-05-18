/*
 * XREFs of sub_1800146D0 @ 0x1800146D0
 * Callers:
 *     sub_180014D3C @ 0x180014D3C (sub_180014D3C.c)
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     sub_1800A8870 @ 0x1800A8870 (sub_1800A8870.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180014A10 @ 0x180014A10 (sub_180014A10.c)
 *     sub_180014B08 @ 0x180014B08 (sub_180014B08.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18003FE40 @ 0x18003FE40 (sub_18003FE40.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800146D0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  __m128i v12; // xmm6
  __m128i v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __m128i v15; // [rsp+40h] [rbp-20h] BYREF

  sub_1800436D4();
  v4 = *(_QWORD *)sub_18001490C(a1, &v15);
  sub_180010910((__int64)&v15);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v14 = 0LL;
    v6 = *(_QWORD *)(a1 + 16);
    if ( !v6 )
LABEL_15:
      sub_1800120F4();
    v7 = *(_DWORD *)(v6 + 8);
    do
    {
      if ( !v7 )
        goto LABEL_15;
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
    }
    while ( v8 != v7 );
    v14 = *(_OWORD *)(a1 + 8);
    v9 = sub_18001D684(208LL);
    v10 = v9;
    if ( v9 )
    {
      *(_OWORD *)v9 = 0LL;
      *(_DWORD *)(v9 + 8) = 1;
      *(_DWORD *)(v9 + 12) = 1;
      *(_QWORD *)v9 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance>::`vftable';
      sub_180014A10(v9 + 16, &v14);
    }
    else
    {
      v10 = 0LL;
    }
    v13 = 0LL;
    sub_180014B08(&v13, v10 + 16, v10);
    sub_180010910((__int64)&v14);
    v11 = v13.m128i_i64[1];
    if ( v13.m128i_i64[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13.m128i_i64[1] + 8));
      v11 = v13.m128i_i64[1];
    }
    v12 = _mm_load_si128(&v13);
    v15 = v12;
    sub_18003FE40(a1, &v15);
    sub_180010910((__int64)&v15);
    *a2 = v12.m128i_i64[0];
    a2[1] = v11;
    v13 = 0LL;
    sub_180010910((__int64)&v13);
  }
  return a2;
}
