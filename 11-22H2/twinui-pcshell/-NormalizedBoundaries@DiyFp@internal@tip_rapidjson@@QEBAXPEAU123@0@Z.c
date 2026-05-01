/*
 * XREFs of ?NormalizedBoundaries@DiyFp@internal@tip_rapidjson@@QEBAXPEAU123@0@Z @ 0x1806551C8
 * Callers:
 *     ?Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z @ 0x1806544BC (-Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall tip_rapidjson::internal::DiyFp::NormalizedBoundaries(
        tip_rapidjson::internal::DiyFp *this,
        __m128i *a2,
        struct tip_rapidjson::internal::DiyFp *a3)
{
  __int64 v3; // r10
  int v5; // eax
  __int64 v6; // r9
  int v7; // ecx
  int v8; // edx
  __int32 v9; // eax
  __m128i v10; // xmm1
  __int128 v11; // [rsp+0h] [rbp-28h]
  __m128i v12; // [rsp+10h] [rbp-18h]

  v3 = *(_QWORD *)this;
  v5 = *((_DWORD *)this + 2) - 1;
  v6 = 2LL * *(_QWORD *)this + 1;
  for ( HIDWORD(v11) = v12.m128i_i32[3]; (v6 & 0x20000000000000LL) == 0; --v5 )
    v6 *= 2LL;
  v7 = *((_DWORD *)this + 2);
  v8 = v5 - 10;
  *(_QWORD *)&v11 = v6 << 10;
  DWORD2(v11) = v5 - 10;
  if ( v3 == 0x10000000000000LL )
  {
    v12.m128i_i64[0] = 0x3FFFFFFFFFFFFFLL;
    v9 = v7 - 2;
  }
  else
  {
    v12.m128i_i64[0] = 2 * v3 - 1;
    v9 = v7 - 1;
  }
  v12.m128i_i32[2] = v9;
  v10 = v12;
  v12.m128i_i32[2] = v8;
  *(_OWORD *)a3 = v11;
  v12.m128i_i64[0] = v10.m128i_i64[0] << ((unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v10, 8))
                                        - (unsigned __int8)v8);
  *a2 = v12;
}
