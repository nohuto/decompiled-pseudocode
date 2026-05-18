/*
 * XREFs of sub_18005D38C @ 0x18005D38C
 * Callers:
 *     sub_18006A694 @ 0x18006A694 (sub_18006A694.c)
 *     sub_18008D684 @ 0x18008D684 (sub_18008D684.c)
 *     sub_18008DC1C @ 0x18008DC1C (sub_18008DC1C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005D38C(__int64 a1, int a2, char a3)
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
    sub_180010DD0(v8, (__int64)"Camera::SetRenderPassEnabled() -- illegal render pass index");
    v5 = sub_180010DD0(
           v7,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\camera.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v5, v6, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  result = a2;
  *(_BYTE *)(v3 + 48LL * a2) = a3;
  return result;
}
