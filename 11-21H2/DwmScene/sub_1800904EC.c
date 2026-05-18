/*
 * XREFs of sub_1800904EC @ 0x1800904EC
 * Callers:
 *     sub_180091160 @ 0x180091160 (sub_180091160.c)
 *     sub_1800930E8 @ 0x1800930E8 (sub_1800930E8.c)
 *     sub_180093158 @ 0x180093158 (sub_180093158.c)
 *     sub_180093218 @ 0x180093218 (sub_180093218.c)
 *     sub_180093288 @ 0x180093288 (sub_180093288.c)
 *     sub_1800932CC @ 0x1800932CC (sub_1800932CC.c)
 *     sub_180093340 @ 0x180093340 (sub_180093340.c)
 *     sub_1800933B8 @ 0x1800933B8 (sub_1800933B8.c)
 *     sub_180093800 @ 0x180093800 (sub_180093800.c)
 *     sub_180093844 @ 0x180093844 (sub_180093844.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800904AC @ 0x1800904AC (sub_1800904AC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800904EC(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v10[4]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+B0h] [rbp-38h] BYREF

  result = sub_1800904AC(a1, a2);
  if ( (_WORD)result == 511 )
  {
    v4 = sub_18001DD9C(
           v10,
           "ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the name \"",
           a2);
    v5 = sub_18001DC84((__int64)v11, v4);
    v6 = sub_1800113D0(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v6, v7, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return result;
}
