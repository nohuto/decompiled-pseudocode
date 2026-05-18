/*
 * XREFs of sub_180057018 @ 0x180057018
 * Callers:
 *     sub_180092E0C @ 0x180092E0C (sub_180092E0C.c)
 *     sub_180092F68 @ 0x180092F68 (sub_180092F68.c)
 *     sub_18009341C @ 0x18009341C (sub_18009341C.c)
 *     sub_180093640 @ 0x180093640 (sub_180093640.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18002B220 @ 0x18002B220 (sub_18002B220.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180057018(__int64 a1, __int64 *a2, unsigned __int16 a3)
{
  __int64 *v5; // rax
  void *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD v10[4]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v12[4]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v13[32]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v14[32]; // [rsp+D0h] [rbp-38h] BYREF

  if ( a3 == 511 || a3 >= *(int *)(a1 + 18488) )
  {
    v5 = sub_18002B220(v12, a3);
    v6 = (void *)sub_18001DD3C((__int64)v13, (__int64)"ShaderManager::GetPropertyName() -- property id ", v5);
    v7 = sub_18001DC84((__int64)v14, v6);
    v8 = sub_1800113D0(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v8, v9, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18001875C(a2, 32LL * a3 + a1 + 2104);
  return a2;
}
