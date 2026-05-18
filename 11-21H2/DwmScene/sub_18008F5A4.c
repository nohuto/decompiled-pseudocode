/*
 * XREFs of sub_18008F5A4 @ 0x18008F5A4
 * Callers:
 *     sub_180090FF8 @ 0x180090FF8 (sub_180090FF8.c)
 *     sub_18009102C @ 0x18009102C (sub_18009102C.c)
 *     sub_18009106C @ 0x18009106C (sub_18009106C.c)
 *     sub_180091094 @ 0x180091094 (sub_180091094.c)
 *     sub_1800910C0 @ 0x1800910C0 (sub_1800910C0.c)
 *     sub_1800910F4 @ 0x1800910F4 (sub_1800910F4.c)
 *     sub_180091114 @ 0x180091114 (sub_180091114.c)
 *     sub_18009113C @ 0x18009113C (sub_18009113C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18002B220 @ 0x18002B220 (sub_18002B220.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800907CC @ 0x1800907CC (sub_1800907CC.c)
 *     sub_1800908F8 @ 0x1800908F8 (sub_1800908F8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008F5A4(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD v13[4]; // [rsp+38h] [rbp-61h] BYREF
  __int64 v14[4]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v15[7]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B0h] [rbp+17h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_1800113D0(
      v13,
      "ShaderPropertyLayout::SetPropertyDefault() -- cannot set property defaults after calling ShaderPropertyLayout::EndDeclaration()");
    v11 = sub_1800113D0(
            v14,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(v15, (__int64)v11, v12, (__int64)v13, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v15;
  }
  if ( !(unsigned __int8)sub_1800908F8(a1, a2, a1) )
  {
    v7 = sub_18002B220(v14, v3);
    v8 = sub_18001DD3C(
           (__int64)v15,
           (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- property layout does not have a property with the specified ID ",
           v7);
    v9 = sub_1800113D0(
           v13,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v9, v10, v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = sub_1800907CC(v2, (unsigned __int16)v3);
  return *(_QWORD *)(v5 + 80) + 4LL * *(unsigned int *)(v4 + 40);
}
