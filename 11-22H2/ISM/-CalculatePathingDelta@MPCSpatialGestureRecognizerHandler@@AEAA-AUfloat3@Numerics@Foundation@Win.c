/*
 * XREFs of ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x1800D1C4C
 * Callers:
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x1800D31B0 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _o_sqrtf_0 @ 0x1800573C4 (_o_sqrtf_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800CA740 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x1800D41E4 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 *__fastcall MPCSpatialGestureRecognizerHandler::CalculatePathingDelta(
        MPCSpatialGestureRecognizerHandler *a1,
        unsigned __int64 *a2,
        __int64 a3)
{
  int v6; // eax
  int v7; // ebx
  int updated; // eax
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  float v12; // xmm0_4
  struct MPCHolographicInputManager *Instance; // rax
  float *v14; // rax
  __int64 v15; // rcx
  float v16; // xmm6_4
  __m128 v17; // xmm4
  __m128 v18; // xmm3
  __m128 v19; // xmm1
  __m128 v20; // xmm4
  float v21; // xmm4_4
  float v22; // xmm3_4
  __m128 v23; // xmm1
  float v24; // xmm5_4
  __m128 v25; // xmm2
  float v26; // xmm0_4
  float v27; // xmm6_4
  unsigned __int64 v29; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+38h] [rbp-D0h] BYREF
  char v32[80]; // [rsp+48h] [rbp-C0h] BYREF
  float v33[808]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D50h] [rbp+C48h]
  __int64 v35; // [rsp+D68h] [rbp+C60h] BYREF
  int v36; // [rsp+D70h] [rbp+C68h] BYREF

  *a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v36);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x238,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6,
      v29);
  v7 = v36;
  if ( v36 == 1 )
  {
    updated = MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(a1, *((_QWORD *)a1 + 20));
    if ( updated < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x23C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)updated,
        v29);
    v35 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a3 + 56LL);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v35);
    v10 = v9(a3, *((_QWORD *)a1 + 16), &v35);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x23F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v10,
        v29);
    if ( v35 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v35 + 48LL))(v35, a2);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x242,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v11,
          v29);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v35);
  }
  else
  {
    if ( v36 != 3 )
      goto LABEL_20;
    v31 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a3)(a3, &GUID_dbedfb55_5c2b_443b_a82d_10a749076fc8, &v31) >= 0 )
    {
      LOBYTE(v35) = 0;
      if ( (*(int (__fastcall **)(__int64, unsigned __int64 *, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, &v29, &v35) >= 0 )
      {
        if ( (_BYTE)v35 )
        {
          v12 = *(float *)&v29 * 0.0174532925199433;
          *(float *)a2 = v12;
          *((float *)a2 + 1) = *((float *)&v29 + 1) * 0.0174532925199433;
          *((_DWORD *)a2 + 2) = 0;
        }
      }
    }
    Instance = MPCHolographicInputManager::GetInstance();
    memcpy_0(v32, Instance, 0xCD0uLL);
    v14 = Windows::Foundation::Numerics::transform((float *)&v29, (float *)a2, v33);
    *a2 = *(_QWORD *)v14;
    *((float *)a2 + 2) = v14[2];
    v15 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v7 = v36;
LABEL_20:
  v16 = o_sqrtf_0(
          (float)((float)(*(float *)a2 * *(float *)a2) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
        + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)));
  if ( v16 > 0.037999999 )
  {
    v17 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
    v18 = _mm_mul_ps(v17, v17);
    v19 = _mm_shuffle_ps(v18, v18, 102);
    v18.m128_f32[0] = (float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
    v20 = _mm_div_ps(v17, _mm_sqrt_ps(_mm_shuffle_ps(v18, v18, 0)));
    v29 = v20.m128_u64[0];
    v21 = _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
    v22 = *(float *)&v29;
    v23 = (__m128)(unsigned int)v29;
    v23.m128_f32[0] = *(float *)&v29 * 0.037999999;
    v24 = *((float *)&v29 + 1);
    v25 = (__m128)HIDWORD(v29);
    v25.m128_f32[0] = *((float *)&v29 + 1) * 0.037999999;
    *(float *)&v30 = v21 * 0.037999999;
    *a2 = _mm_unpacklo_ps(v23, v25).m128_u64[0];
    *((_DWORD *)a2 + 2) = v30;
    if ( v7 == 3 )
      v26 = FLOAT_0_5;
    else
      v26 = FLOAT_2_1500001;
    v27 = v16 - 0.037999999;
    *(float *)a2 = (float)((float)(v22 * v27) * v26) + *(float *)a2;
    *((float *)a2 + 1) = (float)((float)(v24 * v27) * v26) + *((float *)a2 + 1);
    *((float *)a2 + 2) = (float)((float)(v21 * v27) * v26) + *((float *)a2 + 2);
  }
  return a2;
}
