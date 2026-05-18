/*
 * XREFs of sub_180057880 @ 0x180057880
 * Callers:
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180058450 @ 0x180058450 (sub_180058450.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180057880(__int64 a1, char **a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v12[5]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v14[4]; // [rsp+98h] [rbp-50h] BYREF
  _BYTE v15[32]; // [rsp+B8h] [rbp-30h] BYREF

  v12[4] = a2;
  v3 = (_QWORD *)(a1 + 18576);
  sub_180058450(a1 + 18576, &v11, a2);
  if ( v11 == *v3 )
  {
    v7 = sub_18001DD9C(v14, "ShaderManager::GetShaderProgram() -- shader program for name '", a2);
    v8 = sub_18001DC84((__int64)v15, v7);
    v9 = sub_1800113D0(
           v12,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v9, v10, v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = v11 + 64;
  v5 = (unsigned __int64)a2[3];
  if ( v5 >= 0x10 )
    sub_180010884(*a2, v5 + 1);
  a2[2] = 0LL;
  a2[3] = (char *)15;
  *(_BYTE *)a2 = 0;
  return v4;
}
