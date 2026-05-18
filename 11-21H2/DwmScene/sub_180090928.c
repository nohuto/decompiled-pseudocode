/*
 * XREFs of sub_180090928 @ 0x180090928
 * Callers:
 *     sub_18004A774 @ 0x18004A774 (sub_18004A774.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 */

void __fastcall sub_180090928(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( (a2 & 0xFFFFFFEF) != 0 && *(_DWORD *)(a1 + 1168) )
  {
    sub_1800113D0(v5, "ShaderPropertyLayout::SetAlignment() -- alignment in bytes must be 0, 4, 8 or 16.");
    v2 = sub_1800113D0(
           v4,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v2, v3, (__int64)v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 1172) = a2 >> 2;
}
