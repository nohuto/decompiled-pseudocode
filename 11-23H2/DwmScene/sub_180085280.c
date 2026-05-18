/*
 * XREFs of sub_180085280 @ 0x180085280
 * Callers:
 *     sub_18008472C @ 0x18008472C (sub_18008472C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004FDD4 @ 0x18004FDD4 (sub_18004FDD4.c)
 *     sub_180082FEC @ 0x180082FEC (sub_180082FEC.c)
 *     sub_18008316C @ 0x18008316C (sub_18008316C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180085280(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rax
  __int64 v9; // r9
  int v10; // r10d
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD v16[4]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v17[4]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v19[4]; // [rsp+B0h] [rbp+27h] BYREF

  if ( !sub_18008316C(*(_QWORD *)(a1 + 16), a2) )
  {
    v4 = sub_18004FDD4(*(_QWORD *)(v2 + 1152), v17, v3);
    v5 = sub_18001C6E8(v19, (__int64)"Property not found in block: ", v4);
    v6 = sub_180010DD0(
           v16,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertyblock.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v6, v7, (__int64)v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = (_DWORD *)sub_180082FEC(v2, v3);
  if ( v8[9] != v10 )
  {
    sub_180010DD0(v17, (__int64)"Property is not of type the correct type");
    v11 = sub_180010DD0(
            v16,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertyblock.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v11, v12, (__int64)v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v8[12] == 2 )
  {
    sub_180010DD0(v16, (__int64)"Property is imported so cannot be modified");
    v13 = sub_180010DD0(
            v17,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertyblock.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v13, v14, (__int64)v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v9 + 32) + 4LL * (unsigned int)v8[10];
}
