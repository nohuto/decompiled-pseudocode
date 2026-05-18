/*
 * XREFs of sub_18004F760 @ 0x18004F760
 * Callers:
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_18009AA00 @ 0x18009AA00 (sub_18009AA00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_18004DC30 @ 0x18004DC30 (sub_18004DC30.c)
 *     sub_18004E2F8 @ 0x18004E2F8 (sub_18004E2F8.c)
 *     sub_180050504 @ 0x180050504 (sub_180050504.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_18004F760(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rax
  char *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h]
  _QWORD *v21; // [rsp+48h] [rbp-B8h]
  _QWORD *v22; // [rsp+50h] [rbp-B0h]
  _QWORD *v23; // [rsp+58h] [rbp-A8h]
  _QWORD v24[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v25[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v27[7]; // [rsp+D8h] [rbp-28h] BYREF

  v21 = a2;
  v23 = a3;
  v22 = a4;
  if ( sub_18001F84C((__int64)a3) )
  {
    sub_180010DD0(v24, (__int64)"ShaderManager::CreateShaderFamily() -- shader family must have a non-empty name");
    v8 = sub_180010DD0(
           v25,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v8, v9, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = sub_180017648(v24, (__int64)a3);
  if ( (unsigned __int8)sub_180050504(a1, v10) )
  {
    v11 = sub_18001C74C((char *)v25, "ShaderManager::CreateShaderFamily() -- shader family with name '", a3);
    v12 = sub_18001C61C(pExceptionObject, v11, (__int64)"' already exists");
    v13 = sub_180010DD0(
            v24,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shadermanager.cpp");
    sub_18003AF58(v27, (__int64)v13, v14, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v27;
  }
  v15 = sub_18004347C(a1, &v19);
  sub_18004E2F8(a2, (__int64)a3, v15, a4);
  if ( v20 )
    sub_180010530(v20);
  v16 = sub_18004DC30((__int64 *)(a1 + 18560), (__int64)&v19, a3);
  sub_1800124F8((__int64 *)(*(_QWORD *)v16 + 64LL), a2);
  sub_180011B24((__int64)a3);
  v17 = a4[1];
  if ( v17 )
    sub_180010530(v17);
  return a2;
}
