/*
 * XREFs of sub_1800907FC @ 0x1800907FC
 * Callers:
 *     sub_1800497C4 @ 0x1800497C4 (sub_1800497C4.c)
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

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800907FC(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  int v3; // r8d
  __int64 *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v11[4]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v12[32]; // [rsp+B0h] [rbp-38h] BYREF

  if ( !(unsigned __int8)sub_1800908F8(a1, a2, a2) )
  {
    v5 = sub_18002B220(v11, v3);
    v6 = sub_18001DD3C(
           (__int64)v12,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the specified ID ",
           v5);
    v7 = sub_1800113D0(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v7, v8, v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return sub_1800907CC(v2, v3);
}
