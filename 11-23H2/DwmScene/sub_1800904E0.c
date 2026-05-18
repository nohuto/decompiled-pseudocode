/*
 * XREFs of sub_1800904E0 @ 0x1800904E0
 * Callers:
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o_floorf @ 0x18000C02C (_o_floorf.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001E83C @ 0x18001E83C (sub_18001E83C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18008F230 @ 0x18008F230 (sub_18008F230.c)
 *     sub_18008FD58 @ 0x18008FD58 (sub_18008FD58.c)
 *     sub_180091440 @ 0x180091440 (sub_180091440.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800904E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // kr00_8
  signed __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  float v9; // xmm0_4
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 *v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned int v18; // eax
  float *v19; // rax
  __int64 v20; // rdx
  float v21[4]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v22[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v23[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v6 = v5 / 6;
  if ( v5 != 6 * (v5 / 6) )
  {
    sub_180010DD0(
      v23,
      (__int64)"ColorTransform::ImportFormat_BinaryRGB_Base16() -- unexpected data length (not multiple of six characters)");
    v7 = sub_180010DD0(
           v22,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\colortransform.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v7, v8, (__int64)v23, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v6 < 0 )
    v9 = (float)(int)((v5 / 6) & 1 | (v5 / 0xC)) + (float)(int)((v5 / 6) & 1 | (v5 / 0xC));
  else
    v9 = (float)(int)v6;
  o_cbrtf();
  o_floorf();
  v10 = 0LL;
  if ( v9 >= 9.223372e18 )
  {
    v9 = v9 - 9.223372e18;
    if ( v9 < 9.223372e18 )
      v10 = 0x8000000000000000uLL;
  }
  v11 = v10 + (unsigned int)(int)v9;
  if ( v11 * v11 * v11 != v6 )
  {
    sub_180010DD0(
      v22,
      (__int64)"ColorTransform::ImportFormat_BinaryRGB_Base16() -- unexpected data length (not a cube)");
    v12 = sub_180010DD0(
            v23,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\colortransform.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v12, v13, (__int64)v22, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_QWORD *)a3 = v11;
  v14 = (__int64 *)(a3 + 8);
  sub_18008F230((_QWORD *)(a3 + 8), v5 / 6);
  v15 = 0LL;
  *(_DWORD *)(a3 + 32) = 0;
  if ( v6 )
  {
    v16 = 0LL;
    do
    {
      sub_18001E83C(a2, (__int64)v22, v16, 6uLL);
      v18 = sub_180091440(v22, v17, 16LL);
      v19 = sub_18008FD58(v21, v18);
      v20 = *v14;
      *(float *)(v15 + v20) = *v19;
      *(float *)(v15 + v20 + 4) = v19[1];
      *(float *)(v15 + v20 + 8) = v19[2];
      *(float *)(v15 + v20 + 12) = v19[3];
      sub_180011B24((__int64)v22);
      v16 += 6LL;
      v15 += 16LL;
      --v6;
    }
    while ( v6 );
  }
}
