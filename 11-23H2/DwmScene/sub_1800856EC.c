/*
 * XREFs of sub_1800856EC @ 0x1800856EC
 * Callers:
 *     sub_180044970 @ 0x180044970 (sub_180044970.c)
 *     sub_180085680 @ 0x180085680 (sub_180085680.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004FDD4 @ 0x18004FDD4 (sub_18004FDD4.c)
 *     sub_180082FEC @ 0x180082FEC (sub_180082FEC.c)
 *     sub_18008316C @ 0x18008316C (sub_18008316C.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800856EC(__int64 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v4; // rcx
  unsigned __int16 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _DWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *result; // rax
  __int64 v17; // rcx
  _QWORD v18[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v21[4]; // [rsp+B8h] [rbp+2Fh] BYREF

  if ( !sub_18008316C(*(_QWORD *)(a1 + 16), a2) )
  {
    v6 = sub_18004FDD4(*(_QWORD *)(v4 + 1152), v19, v5);
    v7 = sub_18001C6E8(v21, (__int64)"Property does not exist: ", v6);
    v8 = sub_180010DD0(
           v18,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertyblock.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v8, v9, (__int64)v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = (_DWORD *)sub_180082FEC(v4, v5);
  if ( v10[9] != 8 )
  {
    sub_180010DD0(v19, (__int64)"ShaderPropertyBlock::SetTexture() -- Property is not of type Texture");
    v12 = sub_180010DD0(
            v18,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertyblock.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v12, v13, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v10[12] == 2 )
  {
    sub_180010DD0(v18, (__int64)"ShaderPropertyBlock::SetTexture() -- Cannot set the value of an imported property");
    v14 = sub_180010DD0(
            v19,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertyblock.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v14, v15, (__int64)v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  result = sub_180011020((_QWORD *)(*(_QWORD *)(v11 + 56) + 40LL * (unsigned int)v10[10]), a3);
  v17 = a3[1];
  if ( v17 )
    return (_QWORD *)sub_180010530(v17);
  return result;
}
