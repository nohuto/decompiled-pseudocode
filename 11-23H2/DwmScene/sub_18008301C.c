/*
 * XREFs of sub_18008301C @ 0x18008301C
 * Callers:
 *     sub_1800443E8 @ 0x1800443E8 (sub_1800443E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180082FEC @ 0x180082FEC (sub_180082FEC.c)
 *     sub_18008316C @ 0x18008316C (sub_18008316C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008301C(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  int v3; // r8d
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v9[32]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD v11[4]; // [rsp+B0h] [rbp-38h] BYREF

  if ( !(unsigned __int8)sub_18008316C(a1, a2, a2) )
  {
    sub_180027C80((__int64)v9, v3);
    v4 = sub_18001C6E8(
           v11,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the specified ID ",
           v9);
    v5 = sub_180010DD0(
           v8,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v5, v6, (__int64)v4, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return sub_180082FEC(v2, v3);
}
