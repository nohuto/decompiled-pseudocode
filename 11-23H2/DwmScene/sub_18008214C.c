/*
 * XREFs of sub_18008214C @ 0x18008214C
 * Callers:
 *     sub_180046554 @ 0x180046554 (sub_180046554.c)
 *     sub_180046A58 @ 0x180046A58 (sub_180046A58.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004F360 @ 0x18004F360 (sub_18004F360.c)
 *     sub_180081688 @ 0x180081688 (sub_180081688.c)
 *     sub_180081A24 @ 0x180081A24 (sub_180081A24.c)
 *     sub_180081CE4 @ 0x180081CE4 (sub_180081CE4.c)
 *     sub_1800829AC @ 0x1800829AC (sub_1800829AC.c)
 *     sub_1800830E0 @ 0x1800830E0 (sub_1800830E0.c)
 *     sub_18008316C @ 0x18008316C (sub_18008316C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18008214C(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  void **v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // r8
  char *v17; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r12
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned int v32; // [rsp+30h] [rbp-A9h]
  _QWORD v33[4]; // [rsp+38h] [rbp-A1h] BYREF
  _QWORD v34[4]; // [rsp+58h] [rbp-81h] BYREF
  _QWORD pExceptionObject[4]; // [rsp+78h] [rbp-61h] BYREF
  __int16 v36; // [rsp+98h] [rbp-41h]
  unsigned int v37; // [rsp+9Ch] [rbp-3Dh]
  int v38; // [rsp+A0h] [rbp-39h]
  unsigned int v39; // [rsp+A4h] [rbp-35h]
  int v40; // [rsp+A8h] [rbp-31h]
  _QWORD v41[7]; // [rsp+B0h] [rbp-29h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_180010DD0(
      v33,
      (__int64)"ShaderPropertyLayout::AddArrayProperty() -- properties can only be added during declaration phase before "
               "EndDeclaration()");
    v8 = sub_180010DD0(
           v34,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v8, v9, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( sub_18001F84C((__int64)a2) )
  {
    sub_180010DD0(v34, (__int64)"ShaderPropertyLayout::AddArrayProperty() -- property cannot have an empty name");
    v11 = sub_180010DD0(
            v33,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v11, v12, (__int64)v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56) == 28672LL )
  {
    sub_180010DD0(
      v34,
      (__int64)"ShaderPropertyLayout::AddArrayProperty() -- property block already has maximum number of properties");
    v13 = sub_180010DD0(
            v33,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v13, v14, (__int64)v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v15 = (unsigned __int16)sub_18004F360(*(_QWORD *)(a1 + 1152), v10);
  if ( (unsigned __int8)sub_18008316C(a1, v15, v16) )
  {
    v17 = sub_18001C74C((char *)v34, "ShaderPropertyLayout::AddArrayProperty() -- variable '", a2);
    v18 = sub_18001C61C(pExceptionObject, v17, (__int64)"' is already defined");
    v19 = sub_180010DD0(
            v33,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    sub_18003AF58(v41, (__int64)v19, v20, (__int64)v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v41;
  }
  if ( ((a3 - 5) & 0xFFFFFFFD) != 0 )
  {
    sub_180010DD0(
      v34,
      (__int64)"ShaderPropertyLayout::AddArrayProperty() -- Only Vector4 and Matrix arrays are currently supported");
    v21 = sub_180010DD0(
            v33,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    sub_18003AF58(v41, (__int64)v21, v22, (__int64)v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v41;
  }
  if ( a4 <= 1 )
  {
    sub_180010DD0(
      v34,
      (__int64)"ShaderPropertyLayout::AddArrayProperty() -- Array size must be more than 1. For arrays of size 1 use AddProperty instead");
    v23 = sub_180010DD0(
            v33,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    sub_18003AF58(v41, (__int64)v23, v24, (__int64)v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v41;
  }
  sub_1800829AC();
  v25 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  v32 = v25 + a4 * sub_1800830E0(a3);
  if ( v32 > 0x4064 )
  {
    sub_180010DD0(
      v34,
      (__int64)"ShaderPropertyLayout::AddArrayProperty() -- Array extends property block past maximum capacity");
    v26 = sub_180010DD0(
            v33,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    sub_18003AF58(v41, (__int64)v26, v27, (__int64)v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v41;
  }
  sub_180017648(pExceptionObject, (__int64)a2);
  v36 = v15;
  v37 = a3;
  v38 = v25;
  v39 = a4;
  v40 = 0;
  v29 = *(_QWORD *)(a1 + 64);
  v30 = 0x6DB6DB6DB6DB6DB7LL * ((v29 - *(_QWORD *)(a1 + 56)) >> 3);
  if ( v29 == *(_QWORD *)(a1 + 72) )
  {
    sub_180081688((__int64 *)(a1 + 56), v29, (__int64)pExceptionObject);
  }
  else
  {
    sub_180081CE4(v28, v29, (__int64)pExceptionObject);
    *(_QWORD *)(a1 + 64) += 56LL;
  }
  *(_WORD *)(a1 + 2 * v15 + 128) = v30;
  sub_180081A24((__int64 *)(a1 + 80), v32);
  sub_180011B24((__int64)pExceptionObject);
  return (unsigned __int16)v15;
}
