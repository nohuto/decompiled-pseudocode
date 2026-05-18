/*
 * XREFs of sub_1800503B4 @ 0x1800503B4
 * Callers:
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180050CB0 @ 0x180050CB0 (sub_180050CB0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800503B4(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  char *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v11[5]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-88h] BYREF
  char v13[32]; // [rsp+98h] [rbp-50h] BYREF
  _QWORD v14[4]; // [rsp+B8h] [rbp-30h] BYREF

  v11[4] = a2;
  v3 = (_QWORD *)(a1 + 18576);
  sub_180050CB0(a1 + 18576, &v10, a2);
  if ( v10 == *v3 )
  {
    v4 = sub_18001C74C(v13, "ShaderManager::GetShaderProgram() -- shader program for name '", a2);
    v5 = sub_18001C61C(v14, v4, (__int64)"' does not exist");
    v6 = sub_180010DD0(
           v11,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v6, v7, (__int64)v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = v10 + 64;
  sub_180011B24((__int64)a2);
  return v8;
}
