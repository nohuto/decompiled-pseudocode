/*
 * XREFs of sub_1800FD588 @ 0x1800FD588
 * Callers:
 *     sub_18004E1AC @ 0x18004E1AC (sub_18004E1AC.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180022F90 @ 0x180022F90 (sub_180022F90.c)
 *     sub_1800FC4BC @ 0x1800FC4BC (sub_1800FC4BC.c)
 *     sub_1800FC660 @ 0x1800FC660 (sub_1800FC660.c)
 *     sub_1800FD0A8 @ 0x1800FD0A8 (sub_1800FD0A8.c)
 *     sub_1800FE9AC @ 0x1800FE9AC (sub_1800FE9AC.c)
 *     sub_1800FEA64 @ 0x1800FEA64 (sub_1800FEA64.c)
 *     sub_1800FEB1C @ 0x1800FEB1C (sub_1800FEB1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800FD588(
        __int64 *a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  __int64 v11; // rdi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int128 *v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // r14
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __m128 v25; // xmm3
  __m128 v26; // xmm2
  __m128 v27; // xmm0
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  const char *v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rcx
  const Spectre::Framework::GeometryProcessingException *v38; // [rsp+40h] [rbp-68h] BYREF
  __int128 v39; // [rsp+48h] [rbp-60h] BYREF
  __int128 v40; // [rsp+58h] [rbp-50h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+68h] [rbp-40h] BYREF

  v11 = a2;
  if ( (unsigned __int8)sub_1800FEB1C(a2, "ComputeNormals") )
  {
    a8 = v11;
    v19 = (void *)o__aligned_malloc(12 * v11, 16LL);
    v39 = 0LL;
    v20 = sub_18001D684();
    if ( v20 )
    {
      *(_DWORD *)(v20 + 8) = 1;
      *(_DWORD *)(v20 + 12) = 1;
      *(_QWORD *)v20 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_eee906239c744569acc5ea6e5be29b09_>::`vftable';
      *(_QWORD *)(v20 + 16) = v19;
    }
    *(_QWORD *)&v39 = v19;
    *((_QWORD *)&v39 + 1) = v20;
    if ( !v19 )
    {
      sub_180022F90(pExceptionObject);
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset(v19, 0, 12 * v11);
    try
    {
      v21 = *a1;
      if ( a5 )
      {
        if ( *a3 )
        {
          sub_1800FE9AC(a4, a6);
          sub_1800FC660(v21, v11, *a3, a4, a6, a9, v39);
        }
        else
        {
          sub_1800FEA64((unsigned int)v11, a6);
          sub_1800FD0A8(v21, v11, a6, a9, v39);
        }
      }
      else
      {
        sub_1800FE9AC(a4, a6);
        sub_1800FC4BC(v21, v11, *a3, a4, a6, a9, v39);
      }
    }
    catch ( Spectre::Utils::CancelledException )
    {
      throw;
    }
    catch ( const Spectre::Framework::GeometryProcessingException *v38 )
    {
      v35 = (char *)v38 + 16;
      if ( *((_QWORD *)v38 + 5) >= 0x10uLL )
        v35 = *(const char **)v35;
      sub_18001F2B4(&stru_1801EA648, 3, v35);
      v40 = 0LL;
      a8 = 0LL;
      v36 = *(_QWORD *)(a7 + 56);
      if ( !v36 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v36 + 16LL))(v36, &v40, &a8);
      sub_180010910((__int64)&v40);
      sub_180010910((__int64)&v39);
      sub_180010910((__int64)a1);
      result = sub_180010910((__int64)a3);
      v13 = a7;
      goto LABEL_6;
    }
    catch ( ... )
    {
      sub_18001F2B4(&stru_1801EA648, 3, "ComputeNormals threw unexpected exception");
      v40 = 0LL;
      a8 = 0LL;
      v37 = *(_QWORD *)(a7 + 56);
      if ( !v37 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v37 + 16LL))(v37, &v40, &a8);
      sub_180010910((__int64)&v40);
      sub_180010910((__int64)&v39);
      sub_180010910((__int64)a1);
      result = sub_180010910((__int64)a3);
      v13 = a7;
      v34 = *(_QWORD *)(a7 + 56);
      if ( v34 )
      {
        LOBYTE(v33) = v34 != a7;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 32LL))(v34, v33);
        goto LABEL_25;
      }
      return result;
    }
    if ( (_DWORD)v11 )
    {
      v22 = 0LL;
      v23 = a8;
      do
      {
        v24 = v39;
        v25 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(v39 + v22), (__m128)*(unsigned int *)(v39 + v22 + 8));
        v26 = _mm_mul_ps(v25, v25);
        v27 = _mm_shuffle_ps(v26, v26, 153);
        v26.m128_f32[0] = (float)(v26.m128_f32[0] + v27.m128_f32[0]) + _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
        v28 = _mm_shuffle_ps(v26, v26, 0);
        v29 = _mm_sqrt_ps(v28);
        v30 = _mm_cmpneq_ps(v28, (__m128)xmmword_1801282E0);
        v31 = _mm_or_ps(
                _mm_and_ps(_mm_and_ps(_mm_div_ps(v25, v29), _mm_cmpneq_ps((__m128)0LL, v29)), v30),
                _mm_andnot_ps(v30, (__m128)xmmword_180128330));
        *(_QWORD *)(v39 + v22) = v31.m128_u64[0];
        *(_DWORD *)(v24 + v22 + 8) = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
        v22 += 12LL;
        --v23;
      }
      while ( v23 );
    }
    a8 = 0LL;
    v13 = a7;
    v32 = *(_QWORD *)(a7 + 56);
    if ( !v32 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v32 + 16LL))(v32, &v39, &a8);
    v15 = &v39;
  }
  else
  {
    v40 = 0LL;
    a8 = 0LL;
    v13 = a7;
    v14 = *(_QWORD *)(a7 + 56);
    if ( !v14 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v14 + 16LL))(v14, &v40, &a8);
    v15 = &v40;
  }
  sub_180010910((__int64)v15);
  sub_180010910((__int64)a1);
  result = sub_180010910((__int64)a3);
LABEL_6:
  v18 = *(_QWORD *)(v13 + 56);
  if ( v18 )
  {
    LOBYTE(v17) = v18 != v13;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v17);
LABEL_25:
    *(_QWORD *)(v13 + 56) = 0LL;
    return result;
  }
  return result;
}
