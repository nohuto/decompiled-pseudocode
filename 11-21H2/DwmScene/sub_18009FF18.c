/*
 * XREFs of sub_18009FF18 @ 0x18009FF18
 * Callers:
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o_floorf @ 0x18000C03C (_o_floorf.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001F58C @ 0x18001F58C (sub_18001F58C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18009ED14 @ 0x18009ED14 (sub_18009ED14.c)
 *     sub_18009EE90 @ 0x18009EE90 (sub_18009EE90.c)
 *     sub_1800A1130 @ 0x1800A1130 (sub_1800A1130.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009FF18(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // rbx
  float v7; // xmm0_4
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  __int64 *v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r15
  __int64 v14; // r12
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  size_t v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // r8
  char *v30[3]; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-39h]
  _QWORD v32[4]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF

  v5 = a2[2];
  v6 = v5 / 6;
  if ( v5 != 6 * (v5 / 6) )
  {
    sub_1800113D0(
      v32,
      "ColorTransform::ImportFormat_BinaryRGB_Base16() -- unexpected data length (not multiple of six characters)");
    v28 = sub_1800113D0(
            v30,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v28, v29, (__int64)v32, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( (v6 & 0x8000000000000000uLL) != 0LL )
    v7 = (float)(int)((v5 / 6) & 1 | (v5 / 0xC)) + (float)(int)((v5 / 6) & 1 | (v5 / 0xC));
  else
    v7 = (float)(int)v6;
  o_cbrtf();
  o_floorf();
  v8 = 0LL;
  if ( v7 >= 9.223372e18 )
  {
    v7 = v7 - 9.223372e18;
    if ( v7 < 9.223372e18 )
      v8 = 0x8000000000000000uLL;
  }
  v9 = v8 + (unsigned int)(int)v7;
  result = v9 * v9 * v9;
  if ( result != v6 )
  {
    sub_1800113D0(v30, "ColorTransform::ImportFormat_BinaryRGB_Base16() -- unexpected data length (not a cube)");
    v26 = sub_1800113D0(
            v32,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v26, v27, (__int64)v30, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_QWORD *)a3 = v9;
  v11 = (__int64 *)(a3 + 8);
  v12 = (__int64)(*(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 8)) >> 4;
  if ( v6 >= v12 )
  {
    if ( v6 <= v12 )
      goto LABEL_16;
    if ( v6 > (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 8)) >> 4 )
    {
      result = sub_18009ED14((__int64 *)(a3 + 8), v5 / 6);
      goto LABEL_16;
    }
    result = sub_18009EE90(*(_QWORD *)(a3 + 16), v6 - v12);
  }
  else
  {
    result = *v11 + 16 * v6;
  }
  *(_QWORD *)(a3 + 16) = result;
LABEL_16:
  *(_DWORD *)(a3 + 32) = 0;
  v13 = 0LL;
  if ( v6 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      v30[2] = 0LL;
      v31 = 15LL;
      LOBYTE(v30[0]) = 0;
      v16 = a2[2];
      if ( v16 < v15 )
      {
        sub_18001F58C();
        __debugbreak();
      }
      v17 = v16 - v15;
      v18 = 6LL;
      if ( v17 < 6 )
        v18 = v17;
      v19 = a2;
      if ( a2[3] >= 0x10uLL )
        v19 = (_QWORD *)*a2;
      sub_180012190((__int64 *)v30, (char *)v19 + v15, v18);
      v21 = sub_1800A1130(v30, v20, 16LL);
      v22 = (float)HIBYTE(v21) / 255.0;
      v23 = (float)BYTE2(v21) / 255.0;
      v24 = (float)BYTE1(v21) / 255.0;
      v25 = (float)(unsigned __int8)v21 / 255.0;
      result = *v11;
      *(float *)(v14 + result) = v23;
      *(float *)(v14 + result + 4) = v24;
      *(float *)(v14 + result + 8) = v25;
      *(float *)(v14 + result + 12) = v22;
      if ( v31 >= 0x10 )
        result = sub_180010884(v30[0], v31 + 1);
      ++v13;
      v15 += 6LL;
      v14 += 16LL;
    }
    while ( v13 < v6 );
  }
  return result;
}
