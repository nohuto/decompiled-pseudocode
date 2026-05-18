/*
 * XREFs of sub_18006566C @ 0x18006566C
 * Callers:
 *     sub_180074808 @ 0x180074808 (sub_180074808.c)
 *     sub_18009CC54 @ 0x18009CC54 (sub_18009CC54.c)
 *     sub_18009D25C @ 0x18009D25C (sub_18009D25C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006566C(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( a2 < 0 || (v3 = *(_QWORD *)(a1 + 104), a2 >= (int)(-1431655765 * ((*(_QWORD *)(a1 + 112) - v3) >> 4))) )
  {
    sub_1800113D0(v8, "Camera::SetRenderPassEnabled() -- illegal render pass index");
    v5 = sub_1800113D0(
           v7,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\camera.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v5, v6, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  result = a2;
  *(_BYTE *)(v3 + 48LL * a2) = a3;
  return result;
}
