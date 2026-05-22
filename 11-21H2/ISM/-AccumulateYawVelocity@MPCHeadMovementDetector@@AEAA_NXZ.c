/*
 * XREFs of ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800B7F74
 * Callers:
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x1800B8660 (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18009BFB4 (-reset@-$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x1800A896C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 *     ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800B82C8 (-EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?XMScalarACos@DirectX@@YAMM@Z @ 0x1800B89BC (-XMScalarACos@DirectX@@YAMM@Z.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall MPCHeadMovementDetector::AccumulateYawVelocity(__int64 **this)
{
  bool result; // al
  __int64 *v3; // rdi
  __int64 (__fastcall *v4)(__int64 *, LARGE_INTEGER, __int64 *); // rbx
  int v5; // eax
  const char *v6; // r9
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  const char *v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __m128 v16; // xmm6
  float v17; // xmm0_4
  __m128 v18; // xmm3
  __m128 v19; // xmm1
  __m128 v20; // xmm3
  __m128 v21; // xmm1
  __m128 v22; // xmm3
  __m128 v23; // xmm6
  int v24; // [rsp+28h] [rbp-49h]
  __int64 v25; // [rsp+38h] [rbp-39h] BYREF
  __int64 v26; // [rsp+40h] [rbp-31h] BYREF
  __int64 v27; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-21h] BYREF
  int v29; // [rsp+58h] [rbp-19h]
  float v30[4]; // [rsp+60h] [rbp-11h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-1h] BYREF
  __int128 v32; // [rsp+78h] [rbp+7h] BYREF
  __m128 v33; // [rsp+88h] [rbp+17h] BYREF
  __int128 v34; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  result = MPCHeadMovementDetector::EnsureFrameOfReference((MPCHeadMovementDetector *)this);
  if ( result )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v26 = 0LL;
    v3 = this[12];
    v4 = *(__int64 (__fastcall **)(__int64 *, LARGE_INTEGER, __int64 *))(*v3 + 56);
    wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(&v26);
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v4)(v3, (LARGE_INTEGER)PerformanceCount.QuadPart, &v26);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v5,
        v24);
    if ( !v26 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        212LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v6);
    v27 = 0LL;
    v7 = this[11];
    v8 = *v7;
    v27 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v8 + 88))(v7, v26, &v27);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xDA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v9,
        v24);
    if ( !v27 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        219LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v10);
    v25 = 0LL;
    v11 = this[10];
    v12 = *v11;
    v25 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v12 + 88))(v11, v26, v27, &v25);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xDE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v13,
        v24);
    if ( v25 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 56LL))(v25, &v34);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE4,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
          (const char *)(unsigned int)v14,
          v24);
      v32 = v34;
      LODWORD(v28) = 0;
      *((float *)&v28 + 1) = FLOAT_1_0;
      v29 = 0;
      Windows::Foundation::Numerics::transform(v30, (float *)&v28, (float *)&v32);
      v15 = (*(__int64 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v25 + 80LL))(v25, &v33);
      if ( v15 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE9,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
          (const char *)(unsigned int)v15,
          v24);
      v16 = v33;
      v17 = DirectX::XMScalarACos(retaddr, 1.0);
      v18 = _mm_mul_ps(v16, v16);
      v19 = _mm_shuffle_ps(v18, v18, 153);
      v18.m128_f32[0] = (float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
      v20 = _mm_shuffle_ps(v18, v18, 0);
      v21 = _mm_sqrt_ps(v20);
      v22 = _mm_cmpneq_ps(v20, DirectX::g_XMInfinity);
      v23 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps(v16, v21), _mm_cmpneq_ps(v21, (__m128)0LL)), v22),
              _mm_andnot_ps(v22, DirectX::g_XMQNaN));
      v28 = v23.m128_u64[0];
      *((float *)this + 26) = (float)((float)((float)(_mm_shuffle_ps(v23, v23, 170).m128_f32[0] * v30[2])
                                            + (float)((float)(v30[0] * v23.m128_f32[0])
                                                    + (float)(v30[1] * v23.m128_f32[1])))
                                    * (float)(v17 + v17))
                            + *((float *)this + 26);
      ++*((_DWORD *)this + 27);
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v25);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v27);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v26);
    return 1;
  }
  return result;
}
