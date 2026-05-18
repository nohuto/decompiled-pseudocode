/*
 * XREFs of sub_180090418 @ 0x180090418
 * Callers:
 *     sub_180092984 @ 0x180092984 (sub_180092984.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180090418(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r8
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_1800113D0(
      v4,
      "ShaderPropertyLayout::ExtendDeclaration() -- this function must only be called when this layout is complete");
    v1 = sub_1800113D0(
           v3,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v1, v2, (__int64)v4, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 1168) = 0;
}
