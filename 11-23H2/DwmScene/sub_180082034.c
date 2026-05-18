/*
 * XREFs of sub_180082034 @ 0x180082034
 * Callers:
 *     sub_180083748 @ 0x180083748 (sub_180083748.c)
 *     sub_18008377C @ 0x18008377C (sub_18008377C.c)
 *     sub_1800837BC @ 0x1800837BC (sub_1800837BC.c)
 *     sub_1800837E4 @ 0x1800837E4 (sub_1800837E4.c)
 *     sub_180083810 @ 0x180083810 (sub_180083810.c)
 *     sub_180083844 @ 0x180083844 (sub_180083844.c)
 *     sub_180083864 @ 0x180083864 (sub_180083864.c)
 *     sub_18008388C @ 0x18008388C (sub_18008388C.c)
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
__int64 __fastcall sub_180082034(__int64 a1, unsigned __int16 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // r9d
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  _QWORD v12[4]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v13[4]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v15[7]; // [rsp+B0h] [rbp+17h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_180010DD0(
      v13,
      (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- cannot set property defaults after calling ShaderPropertyLa"
               "yout::EndDeclaration()");
    v2 = sub_180010DD0(
           v12,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v2, v3, (__int64)v13, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !(unsigned __int8)sub_18008316C(a1, a2, a1) )
  {
    sub_180027C80((__int64)v13, v5);
    v6 = sub_18001C6E8(
           pExceptionObject,
           (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- property layout does not have a property with the specified ID ",
           v13);
    v7 = sub_180010DD0(
           v12,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(v15, (__int64)v7, v8, (__int64)v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v15;
  }
  v9 = sub_180082FEC(v4, (unsigned __int16)v5);
  return *(_QWORD *)(v10 + 80) + 4LL * *(unsigned int *)(v9 + 40);
}
