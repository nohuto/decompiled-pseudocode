/*
 * XREFs of sub_18004F4AC @ 0x18004F4AC
 * Callers:
 *     sub_180034AB0 @ 0x180034AB0 (sub_180034AB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_18001E730 @ 0x18001E730 (sub_18001E730.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004D7D8 @ 0x18004D7D8 (sub_18004D7D8.c)
 *     sub_18004E44C @ 0x18004E44C (sub_18004E44C.c)
 *     sub_18004EBF0 @ 0x18004EBF0 (sub_18004EBF0.c)
 *     sub_180050C40 @ 0x180050C40 (sub_180050C40.c)
 *     sub_180050CB0 @ 0x180050CB0 (sub_180050CB0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18004F4AC(__int64 a1, _QWORD *a2, int a3, __int64 *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  char *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rax
  _QWORD v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+90h] [rbp-70h] BYREF
  int v22; // [rsp+A0h] [rbp-60h]
  __int128 v23; // [rsp+A8h] [rbp-58h]
  _QWORD v24[7]; // [rsp+C8h] [rbp-38h] BYREF

  v18[3] = a2;
  v18[2] = a4;
  if ( sub_18001F84C((__int64)a2) )
  {
    sub_180010DD0(
      v20,
      (__int64)"ShaderManager::AddShaderProgram() -- shader program cannot be registered with an empty name");
    v8 = sub_180010DD0(
           v19,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v8, v9, (__int64)v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_QWORD *)sub_180050CB0(a1 + 18576, v18, a2) != *(_QWORD *)(a1 + 18576) )
  {
    v10 = sub_18001C74C((char *)v19, "ShaderManager::AddShaderProgram() -- shader program for name '", a2);
    v11 = sub_18001C61C(pExceptionObject, v10, (__int64)"' is already added");
    v12 = sub_180010DD0(
            v20,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shadermanager.cpp");
    sub_18003AF58(v24, (__int64)v12, v13, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v24;
  }
  if ( (unsigned __int8)sub_180050C40(a4) )
  {
    sub_180010DD0(
      v19,
      (__int64)"ShaderManager::AddShaderProgram() -- shader program cannot be registered with zero-length program buffer");
    v14 = sub_180010DD0(
            v20,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shadermanager.cpp");
    sub_18003AF58(v24, (__int64)v14, v15, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v24;
  }
  v16 = sub_18004E44C(v18, a4);
  pExceptionObject[0] = *v16;
  pExceptionObject[1] = v16[1];
  *v16 = 0LL;
  v16[1] = 0LL;
  v22 = a3;
  v23 = 0LL;
  sub_18004D7D8((__int64 *)(a1 + 18576), (__int64)v19, a2, (__int64)pExceptionObject);
  sub_18004EBF0((__int64)pExceptionObject);
  sub_180011B24((__int64)a2);
  return sub_18001E730((__int64)a4);
}
